const flattenArr = (arr) => {
  return arr.reduce(
    (prev, curr) =>
      curr instanceof Array ? [...prev, ...flattenArr(curr)] : [...prev, curr],
    []
  );
};

const output = flattenArr([[2, [[3]]], 4, [[[5]]]]);
console.log(output);
