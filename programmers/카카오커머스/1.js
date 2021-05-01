function solution(gift_cards, wants) {
  let giftsArr = [];
  let wantsArr = [];

  for (let i = 0; i < gift_cards.length; i++) {
    const giftIndex = gift_cards[i];
    giftsArr[giftIndex] ? giftsArr[giftIndex]++ : (giftsArr[giftIndex] = 1);

    const wantsIndex = wants[i];
    wantsArr[wantsIndex] ? wantsArr[wantsIndex]++ : (wantsArr[wantsIndex] = 1);
  }

  console.log(giftsArr);
  console.log(wantsArr);

  let answer = 0;
  wantsArr.forEach((want, index) => {
    if (!giftsArr[index]) {
      answer += want;
    } else {
      const count = want - giftsArr[index];
      if (count > 0) {
        answer += count;
      }
    }
  });

  return answer;
}

const result = solution([5, 4, 5, 4, 5], [1, 2, 3, 5, 4]);

console.log(result);
