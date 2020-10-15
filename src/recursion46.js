function divideBy3Count(n, counter = 1) {
  const result = Math.floor(n / 3);
  if (n === 0) return 0;
  if (result === 1) return counter;
  return divideBy3Count(result, (counter += 1));
}
