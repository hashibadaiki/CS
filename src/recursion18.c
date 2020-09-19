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

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string leetify(string charcters)
{
    const string ans = string(1, charcters[0]) + string(1, charcters[1]);
    return ans;
}

これで与えられた文字列の1個目と2個目を足す