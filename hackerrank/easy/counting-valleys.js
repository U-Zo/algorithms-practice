function countingValleys(steps, path) {
  const pathArr = path.split('');
  let level = 0;
  // Write your code here
  return pathArr.reduce((valleys, step) => {
    if (step === 'U') {
      level += 1;
      if (level === 0) {
        return valleys + 1;
      }

      return valleys;
    } else {
      level -= 1;
      return valleys;
    }
  }, 0);
}
