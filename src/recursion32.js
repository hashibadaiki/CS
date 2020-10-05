function hideAddress(address) {
  const findAt = address.indexOf("@");
  const beforeStr = address.slice(0, 3);
  const afterStr = address.slice(findAt);
  const connect = "...";
  if (findAt <= 4) {
    return address;
  } else {
    return beforeStr + connect + afterStr;
  }
}
