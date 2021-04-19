function rotLeft(a, d) {
  for (let i = 0; i < d; i++) {
    const num = a.shift();
    a.push(num);
  }

  return a;
}
