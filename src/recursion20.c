// 文字列s1と文字列s2が与えられるので、その中にs2という文字列が含まれているのかを
// 調べるisSubstringという関数を定義してください。

// 小文字、大文字も区別する。記号も

// if　最初の文字を文字列から検索（前から順番に）
// なければfalseを返す
// 見つかれば添字に+1して次の文字が見つかるか？
// これを文字列の分だけ繰り返す
// s2の途中でなければfalseを返す

// s2の1文字目でs1文字列を走査する。あればtrueを返す処理

// 難しく考えすぎてた。find関数でOK

// 提出コード
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isSubstring(string s1, string s2)
{
    int checkSting = s1.find(s2);
    int nothing = -1;
    if (checkSting == nothing)
    {
        return false;
    }
    else
    {
        return true;
    }
}
