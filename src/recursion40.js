function numberOfDots(x, totalNum = 0) {
  if (x === 0) return totalNum;
  return numberOfDots(x - 1, (totalNum += x));
}
