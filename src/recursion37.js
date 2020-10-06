function isRationalNumber(number) {
  const sqrtNum = Math.sqrt(number);
  if (sqrtNum % 1 === 0) {
    return true;
  } else {
    return false;
  }
}
