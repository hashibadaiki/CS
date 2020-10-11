function sheeps(count, counter = 0, joinSheeps = "") {
  if (count === counter) return joinSheeps;
  return sheeps(count, counter + 1, (joinSheeps += counter + 1 + " sheep ~ "));
}
