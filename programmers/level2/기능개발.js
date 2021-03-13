const getDurations = (progresses, speeds) => {
  const result = [];
  let maxDuration = 0;

  const durations = progresses.forEach((progress, index) => {
    const remainProgress = 100 - progress;
    const speed = speeds[index];
    const progressDone = Math.ceil(remainProgress / speed);

    if (maxDuration < progressDone) {
      result.push(1);
      maxDuration = progressDone;
    } else {
      if (!result.length) {
        result.push(1);
        maxDuration = progressDone;
      } else {
        const resultTail = result.pop();
        result.push(resultTail + 1);
      }
    }
  });

  return result;
};

function solution(progresses, speeds) {
  const answer = getDurations(progresses, speeds);
  return answer;
}

const result = solution([93, 30, 55], [1, 30, 5]);
