// あるメールアドレスemailを受け取るので、
// それが正しいものであればtrueを、
// そうでなければfalseを返すisValidEmailという関数を作成してください。
// ここでの正しいアドレスというのは以下の3つの条件を満たすものを指します。
// - スペースがないこと
// - 「@」を1つのみ含んでいること
// - 「@」の後に「.」があること

// スペースの確認
// ダメならfalseを返す
// @1つのみの判定
// ダメならfalseを返す
// @のナンバー取得してその後に.があるのか確認する

// 提出コード
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isValidEmail(string email)
{
    string blank = " ";
    int blankCheck = email.find(blank);
    int existBlank = -1;
    string at = "@";
    string dot = ".";
    int atCheck = email.rfind(at);
    int dotCheck = email.rfind(dot);

    if (blankCheck != existBlank)
    {
        return false;
    }

    if (dotCheck < atCheck)
    {
        return false;
    }

    std::string ans = "";
    for (int i = 0; i < email.size(); i++)
    {
        string targetChar = string(1, email[i]);
        if (targetChar == "@")
        {
            targetChar = "1";
            ans += targetChar;
        }
    }
    if (ans != "1")
    {
        return false;
    }
    return true;
}

// memo
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isValidEmail(string email)
{
    // スペースの確認
    // ダメならfalseを返す OK

    // forで全部の文字確認して@@と@.の確認
    // @1つのみの判定
    // ダメならfalseを返す
    // @のナンバー取得してその後に.があるのか確認する
    // lastから検索することで回避できる
    //
    // 後ろから検索するやつと
    // forで全検索して@を1で足していって＝2になったらOK

    string blank = " ";
    int blankCheck = email.find(blank);
    int existBlank = -1;
    string at = "@";
    string dot = ".";
    int atCheck = email.rfind(at);
    int dotCheck = email.rfind(dot);
    bool dotAfterAtCheck = dot > at;

    if (blankCheck == existBlank)
    {
        return printf("ブランク");
    }
    else if (dotAfterAtCheck == true)
    {
        return printf("@のあと");
    }
    else
    {
        return printf("その他");
    }
}

// これでブランクある無し判定できた
if (blankCheck != existBlank)
{
    printf("ブランクがある");
    return blankCheck;
}
else if ()
{
    printf("ブランクがない");
    return blankCheck;
}

// @ .の位置関係を確認した
if (dotAfterAtCheck == true)
{
    printf("atは %d です。\n", atCheck);
    printf("dotは %d です。\n", dotCheck);
    return false;
}
else
{
    printf("atは %d です。\n", atCheck);
    printf("dotは %d です。\n", dotCheck);
    return true;
}