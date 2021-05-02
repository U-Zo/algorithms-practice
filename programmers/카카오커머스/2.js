function hasIndex(indexArr, arr) {
  let bool = true;

  arr.forEach((value, index) => {
    if (!indexArr.includes(index)) {
      if (value) {
        bool = false;
      }
    }
  });

  return bool;
}

function solution(needs, r) {
  const needArr = needs
    .reduce((total, current) => total.map((ele, i) => ele + current[i]))
    .map((need, index) => ({
      need,
      no: index,
    }))
    .sort((a, b) => b.need - a.need)
    .slice(0, r)
    .map((need) => need.no);

  let answer = 0;

  needs.forEach((need, index) => {
    if (hasIndex(needArr, need)) {
      answer++;
    }
  });

  return answer;
}

const result = solution(
  [
    [1, 0, 0],
    [1, 1, 0],
    [1, 1, 0],
    [1, 0, 1],
    [1, 1, 0],
    [0, 1, 1],
  ],
  2
);

console.log(result);
