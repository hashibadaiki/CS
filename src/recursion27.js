// Stephanieの家では残念ながら毎年サンタクロースは
// 家にプレゼントを運んできません。毎年プレゼントを待ちながら、
// 日付を観察するとサンタクロースが家に来るのは閏年だとわかりました。
// ある年yearが与えられるので、閏年かどうかを判定する、
// isLeapYearという関数を作成してください。
// 閏年の条件は以下の通りです。

function isLeapYear(year) {
  const leapYear = year % 4 === 0;
  const specialLeapYear = year % 400 === 0;
  const notLeapYear = year % 100 === 0;
  if (specialLeapYear) {
    return true;
  } else if (notLeapYear) {
    return false;
  } else if (leapYear) {
    return true;
  } else {
    return false;
  }
}
