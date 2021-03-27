/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function (nums) {
  return nums.reduce((count, curr) => {
    let digit = 1;
    let num = curr;

    while (num > 9) {
      num = Math.floor(num / 10);
      digit++;
    }

    if (digit % 2 === 0) {
      return count + 1;
    }

    return count;
  }, 0);
};
