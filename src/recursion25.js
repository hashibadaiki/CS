// 文字列stringを受け取り、文字数の半分を文字列の真ん中から返す、
// middleSubstringという関数を定義してください。
// （文字数が2以下の場合は、最初の文字を返します。）

// middleSubstring("A") --> A
// middleSubstring("AB") --> A
// middleSubstring("ABC") --> B
// middleSubstring("ABCD") --> BC
// middleSubstring("ABCDE") --> BC
// middleSubstring("ABCDEF") --> CDE
// middleSubstring("ABCDEFG") --> CDE
// middleSubstring("ABCDEFGH") --> CDEF
// middleSubstring("ABCDEFGHI") --> CDEF
// middleSubstring("ABCDEFGHIJ") --> DEFGH
// middleSubstring("ABCDEFGHIJK") --> DEFGH
// middleSubstring("ABCDEFGHIJKL") --> DEFGHI
// middleSubstring("fundamental") --> damen

// 方程式を紐解く
// 元の文字数|その半分|抽出する文字数|削除する文字数
//  10     |5      |10/2(切り下げ)|5/2(切り上げ)
//  7      |3      |3            |2
//  8      |4      |4            |2
//  9      |4      |4            |2
//  5      |3      |2            |2

// 文字列を判定する
// 2文字以下なら先頭の文字を返す（以下は3文字以上の場合）
// 上記のロジックを当てはめていく
// ①2でわる
// ①から削除する文字数を図る。切り上げ
// 最初の値から抽出する文字列を図る。切り捨て
// 削除の処理
// 抽出の処理

function middleSubstring(stringInput) {
  const cutNum = 2;
  const firstChar = stringInput.substr(0, 1);
  if (stringInput.length <= cutNum) {
    console.log(firstChar);
  } else {
    const halfNum = Math.floor(stringInput.length / 2);
    const pickUpChar = Math.floor(stringInput.length / 2);
    const deleteChar = Math.ceil(halfNum / 2);
    const result = stringInput.slice(deleteChar).substr(0, pickUpChar);
    console.log(result);
  }
}
middleSubstring("abcde");
