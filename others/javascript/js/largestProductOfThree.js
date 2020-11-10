const largestProductOfThree = (arr) => {
  const resultArr = []; // 결과를 담는 배열

  const dfs = (index, depth, num) => {
    console.log(`index = ${index}`, `depth = ${depth}`, `num = ${num}`);
    if (depth > 1) {
      resultArr.push(num);
      return;
    }

    for (let i = index; i < arr.length; i++) {
      dfs(i + 1, depth + 1, num * arr[i]);
    }
  };

  for (let i = 0; i < arr.length; i++) {
    dfs(i + 1, 0, arr[i]);
  }

  let max = resultArr[0];
  for (const num of resultArr) {
    max = Math.max(max, num);
  }

  return max;
};

const output = largestProductOfThree([-1, 2, -5, 7]);

console.log(output);
