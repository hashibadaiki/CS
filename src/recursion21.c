// 文字列stringを受け取り、
// 最後の4文字以外を「Hint is:」で置き換える、
// lastFourHintという関数を作成してください。
// (「Hint is:◯◯◯◯」という表示で書いてください。)
// また、もし文字列が6文字未満の場合、
// 「There is no Hint」と返してください。

// ifで長さ6以下ならfalse
// それ以上なら以下の処理
// 文字列全体の長さから　-4した値が分割位置
// それを変数に入れて表示させる

// 提出コード
#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <string.h>

using namespace std;

string lastFourHint(string stringInput)
{
    int noHint = 6;
    if (stringInput.size() < noHint)
    {
        return "There is no Hint";
    }
    else
    {
        int startPosition = stringInput.size() - 4;
        string hintWord = stringInput.substr(startPosition);
        return "Hint is:" + hintWord;
    }
}
