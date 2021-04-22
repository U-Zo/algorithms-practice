function repeatedString(s, n) {
  const length = s.length;
  const div = Math.ceil(n / length);
  const aArr = [];

  for (let i = 0; i < s.length; i++) {
    if (s[i] === 'a') {
      aArr.push(i + 1);
    }
  }

  let count = aArr.length * div;
  aArr.forEach((letter) => {
    if (letter + length * (div - 1) > n) {
      count--;
    }
  });

  return count;
}
