/**
 * @param {number[]} arr
 * @return {number[]}
 */
var replaceElements = function (arr) {
  if (arr.length <= 1) {
    return [-1];
  }

  const store = [];

  let max = arr[0];
  for (let i = 1; i < arr.length; i++) {
    if (max <= arr[i]) {
      max = arr[i];
      continue;
    }

    if (max > arr[i]) {
      store.push(max);
      max = arr[i];
    }
  }

  let i = 0;
  arr.map((val, index) => {
    if (val < store[i]) {
      return store[i];
    }

    return store[++i];
  });
};
