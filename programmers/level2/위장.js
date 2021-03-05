function solution(clothes) {
  let answer = 1;

  const map = new Map();

  for (const clothe of clothes) {
    const hasValue = map.get(clothe[1]);
    if (!hasValue) {
      map.set(clothe[1], 1);
    } else {
      map.set(clothe[1], hasValue + 1);
    }
  }

  const keys = map.keys();
  for (const key of keys) {
    answer *= map.get(key) + 1;
  }

  answer -= 1;

  return answer;
}

console.log(
  solution([
    ['yellowhat', 'headgear'],
    ['bluesunglasses', 'eyewear'],
    ['green_turban', 'headgear'],
  ])
);
