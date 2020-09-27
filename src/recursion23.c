// 文字列stringと数値iが与えられるので、
// i番目の文字が削除された文字列を返す、
// deleteAtという関数を作成してください。
// 数値iが受け取った文字列のサイズより大きい場合は、
// 文字列をそのまま返します。

// 提出
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string deleteAt(string str, int i)
{
    if (i > str.size())
    {
        return str;
    }
    int eraseNumber = i - 1;
    int eraseAmount = 1;
    string erasedString = str.erase(eraseNumber, eraseAmount);
    return erasedString;
}
