// 文字列stringと数値iを受け取り、i番目に「_」を入れた文字列を返す、
// insertUnderscoreAtという関数を作成してください。
// 数値iが受け取った文字列のサイズ以上の場合、
// 文字列はそのまま返されます。

// insertを使って挿入
// if 文字列の長さとiを比較してiが大きければそのまま返す
// 違う場合挿入する処理

// 提出コード
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string insertUnderscoreAt(string str, int i)
{
    if (str.size() <= i)
    {
        return str;
    }
    else
    {
        string insertWord = "_";
        string ans = str.insert(i, insertWord);
        return ans;
    }
}