function getResult(arr, number, target) {
  if (!arr.length) {
    if (number === target) {
      return 1;
    } else {
      return 0;
    }
  }

  const nextNum = arr[0];
  const nextArr = arr.slice(1);

  return (
    getResult(nextArr, number - nextNum, target) +
    getResult(nextArr, number + nextNum, target)
  );
}

function solution(numbers, target) {
  return getResult(numbers, 0, target);
}

const result = solution([1, 1, 1, 1, 1], 3);
console.log(result);
