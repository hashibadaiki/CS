function howMuchIsYourDebt(year) {
  const debt = 10000;
  const interest = 1.2;
  const totalPrice = debt * interest ** year;
  return Math.floor(totalPrice);
}
