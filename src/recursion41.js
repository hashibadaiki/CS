function totalSquareArea(x, totalArea = 0) {
  if (x === 0) return totalArea;
  return totalSquareArea(x - 1, (totalArea += x ** 3));
}
