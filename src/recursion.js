// 指定の値までの再帰関数
// function count(counter, final) {
//   if (counter === final) return;
//   console.log(counter);
//   return count(counter + 1, final);
// }
// count(0, 10);

// 1〜10まで全て足す再帰関数

function totalCount(startNum, totalNum, final) {
  console.log(startNum, totalNum, final);
  if (startNum > final) return;
  return totalCount(startNum + 1, startNum + totalNum, final);
}
totalCount(1, 0, 10);
