function isPrimeNumber(number) {
  if (number <= 1) {
    return false;
  }

  if (number === 2) {
    return true;
  }

  if (number % 2 === 0) {
    return false;
  }

  for (let i = 3; i < number; i += 2) {
    if (number % i === 0) {
      return false;
    }
  }

  return true;
}

function getCombinedNumbers(arr, prevNumber, answer) {
  let currentNumber = prevNumber || '';

  for (let i = 0; i < arr.length; i++) {
    const nextNumbers = [...arr];
    const nextNumber = currentNumber + arr[i];

    if (isPrimeNumber(Number(nextNumber))) {
      answer.push(Number(nextNumber));
    }

    nextNumbers.splice(i, 1);
    getCombinedNumbers(nextNumbers, nextNumber, answer);
  }
}

function solution(numbers) {
  const numberArr = [...numbers];
  const answer = [];
  getCombinedNumbers(numberArr, '', answer);

  return [...new Set(answer)].length;
}
