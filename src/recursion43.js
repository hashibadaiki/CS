function reverseString(str, reverseStr = "") {
  const addStr = str.substr(-1);
  const leftStr = str.slice(0, -1);
  if (leftStr.length === str.length) return reverseStr;
  return reverseString(leftStr, (reverseStr += addStr));
}
