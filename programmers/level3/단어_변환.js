const sliceWord = (index, word) => {
  const wordArr = [...word];
  wordArr.splice(index, 1);
  return wordArr.join('');
};

function solution(begin, target, words) {
  let answer = 0;

  if (!words.includes(target)) {
    return answer;
  }

  const visited = new Set();
  let nextWords = [];

  const bfs = () => {
    const q = [];
    q.push(begin);

    while (q.length) {
      const word = q.shift();
      visited.add(word);
      if (word === target) {
        return;
      }

      for (let i = 0; i < word.length; i++) {
        const slicedWord = sliceWord(i, word);
        const nextWord = words.filter((word) => {
          return !visited.has(word) && sliceWord(i, word) === slicedWord;
        });

        nextWords.push(...nextWord);
      }

      if (!q.length) {
        answer++;
        q.push(...nextWords);
        nextWords = [];
      }
    }
  };

  bfs();

  return answer;
}

const result = solution('hit', 'cog', [
  'hot',
  'dot',
  'dog',
  'lot',
  'log',
  'cog',
]);

console.log(result);
