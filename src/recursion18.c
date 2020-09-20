// Leetify
// ある文字列stringが渡されるので、それをLeetで書き換えるleetifyという関数を作成してください。
// ただし変換するのは以下の文字が入力された際のみに限ります。

// しないといけないこと

// 文字列を受け取る
// それを文字に分解する
// 1文字1文字判定する
// 分岐を大量に作るよりもforの中にforを書く方法を模索
// 条件分岐させる
// false/true それぞれの処理を行う
// それを文字列の長さだけ繰り返す

// - a/A = 4
// - b/B = 8
// - e/E = 3
// - l/L = 1
// - o/O = 0
// - s/S = 5
// - t/T = 7
// - z/Z = 2

// 提出
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string leetify(string str)
{
    std::string ans = "";
    for (int i = 0; i < str.size(); i++)
    {
        string targetChar = string(1, str[i]);
        if (targetChar == "a" || targetChar == "A")
        {
            targetChar = "4";
            ans += targetChar;
        }
        else if (targetChar == "b" || targetChar == "B")
        {
            targetChar = "8";
            ans += targetChar;
        }
        else if (targetChar == "e" || targetChar == "E")
        {
            targetChar = "3";
            ans += targetChar;
        }
        else if (targetChar == "l" || targetChar == "L")
        {
            targetChar = "1";
            ans += targetChar;
        }
        else if (targetChar == "o" || targetChar == "O")
        {
            targetChar = "0";
            ans += targetChar;
        }
        else if (targetChar == "s" || targetChar == "S")
        {
            targetChar = "5";
            ans += targetChar;
        }
        else if (targetChar == "t" || targetChar == "T")
        {
            targetChar = "7";
            ans += targetChar;
        }
        else if (targetChar == "z" || targetChar == "Z")
        {
            targetChar = "2";
            ans += targetChar;
        }
        else
        {
            ans += targetChar;
        }
    }
    return ans;
}

// 以下はメモ
// これで与えられた文字列の1個目と2個目を足す
string leetify(string charcters)
{
    const string ans =
        string(1, charcters[0]) + string(1, charcters[1]);
    return ans;
}

// 文字列の文字数を表示する
int leetify(string string)
{
    int num = 1;
    for (int i = 0; i < string.size(); i++)
    {
        num = i;
    }
    return num;
}

// こちらの方がスマートにかけると思ったけど、条件分岐とその後の処理がが難しいので諦める
string leetify(string str)
{
    const string checkDuplicationCharcters = "aAbBeElLoOsStTzZ";
    for (int i = 0; i < str.size(); i++)
    {
        string targetChar = string(1, str[i]);
        for (int i = 0; i < checkDuplicationCharcters.size(); i++)
        {
            string checkChar = string(1, checkDuplicationCharcters[i]);
            if (targetChar != checkChar)
            {
            }
        }
    }
}