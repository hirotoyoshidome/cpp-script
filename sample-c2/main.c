#include<stdio.h>
#include<stdbool.h>


enum judge { NG, OK};

#define CONST 100
#define CONST2 "aaa"

// 関数
int add(int x, int y) {
  return x + y;
}

// 構造体
struct User {
  int age;
  int gender;
};

// 既存のデータ型に新しい名前をつける
typedef struct User USER;

// ここではやらないが、structの代わりにunionを使うとメモリを共有する構造が作れる

int main() {
  printf("Hello!!\n");

  int num = 10;
  // intの出力はこうする printf(num); とはできない
  printf("%d\n",num);

  // intはマイナスも可能
  int minus = -10;
  printf("%d\n",minus);

  // unsigned int minus = -10; unsignedをつけると符号なしになるのでマイナスは扱えない

  // 小数(8バイト)
  double dbl = 0.1;
  printf("%f\n", dbl);

  // 小数(4バイト)
  float dbl2 = 0.1;
  printf("%f\n", dbl2);

  // 1文字の場合はシングルクオートを使う
  char str = 'a';
  // charの出力
  printf("%c\n", str);

  // 文字列の場合はダブルクオートを使う
  // charの配列で持たせる
  char string[] = "aaa";
  // 文字列の出力
  printf("%s\n",string);

  // ポインタを使った文字列
  char *strp = "bbb";
  // ポインタのアドレスを表示
  printf("%p\n", strp);
  // 文字列を表示
  printf("%s\n", strp);

  // cではboolはstdboolをincludeする必要がある。(C++は標準である)
  bool isOK = true;

  // if文
  if (isOK) {
    printf("OK\n");
  } else {
    printf("NG\n");
  }

  // for文
  for (int i = 0; i < 5; i++) {
    printf("%d\n", i + 1);
  }

  // enum
  enum judge j = OK;
  // 宣言しておいたenumのインデックスが取れる
  printf("%d\n", j);

  // define
  // 定数として扱える
  printf("%d\n", CONST);
  printf("%s\n", CONST2);

  // 関数
  printf("%d\n", add(2, 5));

  // 配列
  int ary [3] = {2,4,6};
  for (int i = 0; i < 3; i++) {
    printf("%d\n", ary[i]);
  }

  // ポインタ
  int N,*n;
  N = 99;

  // ポインタに値を設定する
  // &をつけるとメモリ上のアドレスを渡せる
  n = &N;

  // 出力
  printf("%d\n", N); // 99
  printf("%d\n", *n); // 99 * をつけるとポインタから参照できる

  printf("%x\n", n); // アドレスを参照することも可能
  printf("%x\n", &N); // 同じアドレスが確認できる


  // 構造体
  struct User u;
  u.age = 20;
  u.gender = 1;
  printf("age : %d, gender : %d\n", u.age, u.gender);

  // typedef
  USER u2;
  u2.age = 30;
  u2.gender = 0;
  printf("age : %d, gender : %d\n", u2.age, u2.gender);

  return 0;
}
