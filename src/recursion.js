function count(counter, final) {
  if (counter === final) return;
  console.log(counter);
  return count(counter + 1, final);
}
count(0, 10);
