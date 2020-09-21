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

bool isValidEmail(string email){
    // スペースの確認
// ダメならfalseを返す
// @1つのみの判定
// ダメならfalseを返す
// @のナンバー取得してその後に.があるのか確認する

    string blank = " ";
    int blankCheck = email.find(blank);
    int existBlank = -1;
    string at = "@";
    int atCheck = email.find(at);
    int existAt = -1;

    if(blankCheck == existBlank){
        return false;
    }
    if(atCheck){

    }
}