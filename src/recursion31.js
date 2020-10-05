function isVowel(alphabet) {
  const smallChar = alphabet.toLowerCase();
  const vowel = ["a", "i", "u", "e", "o"];
  const nothing = vowel.length * -1;
  const changeNum = vowel.map((arr) => {
    return smallChar.indexOf(arr);
  });
  const ans = changeNum.reduce((acc, current) => {
    return acc + current;
  });
  if (ans === nothing) {
    return false;
  } else {
    return true;
  }
}
