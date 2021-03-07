function solution(genres, plays) {
  const answer = [];

  const genreByPlay = new Map();
  const songs = [];

  for (const index in genres) {
    const genre = genres[index];
    const play = plays[index];

    const playOfGenre = genreByPlay.get(genre);
    if (!playOfGenre) {
      genreByPlay.set(genre, play);
    } else {
      genreByPlay.set(genre, playOfGenre + play);
    }

    songs.push([Number(index), genre, play]);
  }

  // 정렬
  const sortedGenreByPlay = [...genreByPlay].sort((x, y) => y[1] - x[1]);
  songs.sort((x, y) => y[2] - x[2]);

  console.log(songs);

  for (let i = 0; i < sortedGenreByPlay.length; i++) {
    if (!sortedGenreByPlay[i]) {
      continue;
    }

    const genre = sortedGenreByPlay[i][0];
    const songOfGenre = [];

    for (const song of songs) {
      if (song[1] === genre) {
        songOfGenre.push(song[0]);
      }

      if (songOfGenre.length === 2) {
        break;
      }
    }

    answer.push(...songOfGenre);
  }

  return answer;
}

console.log(
  solution(['pop', 'pop', 'pop', 'rap', 'rap'], [45, 50, 40, 60, 70])
); // output : [ 7, 3, 4, 6, 0 ]
