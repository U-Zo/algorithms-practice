function sockMerchant(n, ar) {
  let arr = Array(n).fill(0);

  ar.forEach((val) => {
    if (arr[val]) {
      arr[val]++;
    } else {
      arr[val] = 1;
    }
  });

  return arr.reduce((total, pile) => {
    return total + Math.floor(pile / 2);
  }, 0);
}
