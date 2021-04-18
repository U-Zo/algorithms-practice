function hourglassSum(arr) {
  let answer = -987654321;

  for (let i = 0; i < 4; i++) {
    for (let j = 0; j < 4; j++) {
      let temp = 0;
      for (let k = i; k < i + 3; k++) {
        for (let l = j; l < j + 3; l++) {
          if (k === i + 1) {
            temp += arr[k][l + 1];
            break;
          } else {
            temp += arr[k][l];
          }
        }
      }

      answer = Math.max(answer, temp);
    }
  }

  return answer;
}
