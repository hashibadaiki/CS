// - スペースがない
// - 大文字と小文字を含む
// - 数字を含む
// - 文字列が6以上

// 文字列が来てbooleanを返す

// 上3つの条件は正規表現で対応
// 最後はlengthで確認する

function isValidPassword(password) {
  const checkPasswordUpper = /[A-Z]/.test(password);
  const checkPasswordLower = /[a-z]/.test(password);
  const checkPasswordNum = /[0-9]/.test(password);
  const checkPasswordBlanc = /\s/.test(password);
  if (password.length < 6) {
    return false;
  } else if (checkPasswordBlanc) {
    return false;
  } else if (
    checkPasswordUpper === false ||
    checkPasswordLower === false ||
    checkPasswordNum === false
  ) {
    return false;
  } else {
    return true;
  }
}
