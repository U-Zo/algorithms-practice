/**
 * @param {number[]} arr
 * @return {boolean}
 */
var checkIfExist = function (arr) {
  const obj = {};

  for (let i = 1; i < arr.length; i++) {
    const current = arr[i];
    obj[arr[i - 1]] = true;

    if (obj[current * 2]) {
      return true;
    }

    if (obj[current / 2]) {
      return true;
    }
  }

  return false;
};
