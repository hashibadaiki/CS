// 天才Ian君は学校の課題として出された、
// 二次方程式の解の種類を判別するクイズをプログラムを使って
// 自動的に解く方法を思いつきました。
// 二次方程式ax2 + bx + c = 0の各係数である
// 整数a,b,cが与えられるので、以下の条件の整数を返す、
// quadraticEquationAnswerという関数を作成してください。

// 二次方程式の解の個数を調べるには、判別式を使います。
// 二次方程式ax2 + bx + c =0の判別式はb**2−4acです。
// 判別式が正のとき二次方程式は実数解を2つ、
// 判別式が0のとき重解（=実数解が1つ）、
// 判別式が負のとき虚数解（=実数解を持たない）を持ちます。
// また、aが0のとき、二次方程式では無いので注意が必要です。

// a = 0 0をかえす
// b**2−4ac = + 2を返す
// b**2−4ac = 0 1を返す
// b**2−4ac = - -2を返す

function quadraticEquation(a, b, c) {
  const discriminant = b ** 2 - 4 * a * c;
  if (a === 0) {
    return 0;
  } else if (discriminant > 1) {
    return 2;
  } else if (discriminant === 0) {
    return 1;
  } else if (discriminant < 0) {
    return -2;
  }
}
