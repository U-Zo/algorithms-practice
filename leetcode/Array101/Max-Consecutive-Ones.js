/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function (nums) {
  let max = 0;
  let consecutive = 0;

  for (let i = 0; i < nums.length; i++) {
    if (nums[i] === 1) {
      consecutive++;
    } else {
      max = Math.max(max, consecutive);
      consecutive = 0;
    }
  }

  return Math.max(max, consecutive);
};

const result = findMaxConsecutiveOnes([1]);
console.log(result);
