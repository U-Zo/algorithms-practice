function solution(n, passenger, train) {
  let paths = [...Array(n + 1)].map(() => []);

  train.forEach((path) => {
    paths[path[0]].push(path[1]);
    paths[path[1]].push(path[0]);
  });

  let checked = Array(n + 1).fill(false);
  const dfs = (stationNo, passengers) => {
    if (checked[stationNo]) {
      return;
    }

    checked[stationNo] = {
      pass: passengers,
      stationNo,
    };

    for (let i = 0; i < paths[stationNo].length; i++) {
      dfs(paths[stationNo][i], passengers + passenger[paths[stationNo][i] - 1]);
    }
  };

  dfs(1, passenger[0]);

  checked.shift();
  checked.sort((a, b) => b.pass - a.pass);
  checked.sort((a, b) => b.stationNo - a.stationNo);

  return [checked[0].stationNo, checked[0].pass];
}

solution(
  5,
  [1, 1, 2, 3, 4],
  [
    [1, 2],
    [1, 3],
    [1, 4],
    [1, 5],
  ]
);
