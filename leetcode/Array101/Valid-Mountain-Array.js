/**
 * @param {number[]} arr
 * @return {boolean}
 */
var validMountainArray = function (arr) {
  const length = arr.length;
  let i = 0;

  while (arr[i] < arr[i + 1]) {
    i++;
  }

  if (i === 0 || i === length - 1) {
    return false;
  }

  while (arr[i] > arr[i + 1]) {
    i++;
  }

  return i === length - 1 && length > 2;
};
