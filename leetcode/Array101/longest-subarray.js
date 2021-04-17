'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function (inputStdin) {
  inputString += inputStdin;
});

process.stdin.on('end', function () {
  inputString = inputString.split('\n');

  main();
});

function readLine() {
  return inputString[currentLine++];
}

/*
 * Complete the 'longestSubarray' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

function longestSubarray(arr) {
  let max = 1;

  let currLength = 1;
  let currVal = arr[0];

  for (let i = 1; i < arr.lenght; i++) {
    const diff = arr[i] - currVal;

    if (diff >= -1 && diff <= 1) {
      currLength++;
      console.log(currLength);
      continue;
    }

    max = Math.max(max, currLength);
    currLength = 0;
    currVal = arr[i];
  }

  return max;
}

function main() {
  const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

  const arrCount = parseInt(readLine().trim(), 10);

  let arr = [];

  for (let i = 0; i < arrCount; i++) {
    const arrItem = parseInt(readLine().trim(), 10);
    arr.push(arrItem);
  }

  const result = longestSubarray(arr);

  ws.write(result + '\n');

  ws.end();
}
