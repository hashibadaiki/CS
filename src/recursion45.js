function splitAndAdd(digits, counter = 0, totalNum = 0) {
  const strNum = digits.toString();
  const addNum = parseInt(strNum[counter]);
  if (counter === strNum.length) return totalNum;
  return splitAndAdd(digits, (counter += 1), (totalNum += addNum));
}
