function interestsPayed(initialLoan, didPayOnTime) {
  const fee = 1.02;
  const lateFee = 1.15;
  const interest = 2.5;
  if (didPayOnTime) {
    return initialLoan * fee + interest;
  } else {
    return initialLoan * lateFee + interest;
  }
}
