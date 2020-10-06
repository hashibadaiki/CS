// 両方の文字を大文字に統一する
// 要素が存在しているか判断する
// ない場合はそのまま返す
// あった場合は、その単語とそれ移行を全て小文字にする

function toUpperHeadLowerTail(word, alphabet) {
  const findChar = word.lastIndexOf(alphabet);
  const nothing = -1;
  if (findChar === nothing) {
    return word.toUpperCase();
  } else {
    const beforeStr = word.substr(0, findChar).toUpperCase();
    const afterStr = word.substr(findChar).toLowerCase();
    return beforeStr + afterStr;
  }
}
