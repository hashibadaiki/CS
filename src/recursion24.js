// 与えられた文字列の空白を全て消す
// 奇数か？偶数か判断する。偶数ならfalse
// 奇数なら +1した整数を変数に代入する
// 前半と後半に文字列を分ける
// 後半の文字列をソートする
// 同じか判定する

function isPalindrome(str) {
  const stringInput = str.replace(/\s+/g, "").toLowerCase();
  const halfNum = Math.floor(stringInput.length / 2);
  const evenOrOdd = stringInput.length % 2;
  const even = 0;
  const firstHalf = stringInput.slice(0, halfNum);
  const beforeSecondHalf = stringInput.slice(halfNum);
  if (evenOrOdd === even) {
    const secondHalf = beforeSecondHalf.split("").reverse().join("");
    if (firstHalf === secondHalf) {
      return true;
    } else {
      return false;
    }
  } else {
    const secondHalf = beforeSecondHalf.slice(1).split("").reverse().join("");
    if (firstHalf === secondHalf) {
      return true;
    } else {
      return false;
    }
  }
}
isPalindrome();
