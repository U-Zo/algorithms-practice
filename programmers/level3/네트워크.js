function solution(n, computers) {
  let answer = 0;
  let visited = [];

  const bfs = (computer) => {
    const q = [];
    q.push(computer);
    visited[computer] = true;
    while (q.length) {
      const _computer = q.shift();
      for (const index in computers[_computer]) {
        if (visited[index]) {
          continue;
        }

        if (computers[_computer][index]) {
          visited[index] = true;
          q.push(index);
        }
      }
    }
  };

  for (const computer in computers) {
    if (visited[computer]) {
      continue;
    }

    answer++;
    bfs(computer);
  }

  return answer;
}

const result = solution(3, [
  [1, 1, 0],
  [1, 1, 0],
  [0, 0, 1],
]);

console.log(result);
