/**
 *
 * @param {Array} jobs
 */
function solution(jobs) {
  jobs.sort((a, b) => a[0] - b[0]); // 요청 시간 순으로 정렬
  let currentTime = jobs[0][0] + jobs[0][1];
  const scheduler = [currentTime];

  while (true) {
    const nextJobs = jobs.filter((job) => currentTime >= job[0]);
    
  }
}

const result = solution([
  [0, 3],
  [1, 9],
  [12, 6],
]);
