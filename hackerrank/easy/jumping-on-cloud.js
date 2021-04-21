function jumpingOnClouds(c) {
  let count = 0;
  for (let i = 0; i < c.length; i++) {
    if (c[i + 2] === 0) {
      i++;
      count++;
      continue;
    }

    count++;
  }

  return count - 1;
}
