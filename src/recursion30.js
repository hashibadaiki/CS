function whoIsWinner(hisCard) {
  const myCard = 10;
  if (hisCard === myCard) {
    return "draw";
  } else if (hisCard > myCard || hisCard === 1 || hisCard === 2) {
    return "you lose";
  } else {
    return "you win";
  }
}
