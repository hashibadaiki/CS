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
        return false;
    }
    if (dotAfterAtCheck == true)
    {
        return false;
    }
    return true;
}