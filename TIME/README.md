# TIME

ref: [時間情報の取得 clock_gettime() - 時間の扱い - 碧色工房](https://www.mm2d.net/main/prog/c/time-05.html)    

```
ヘッダー
#include <time.h>

構造体
struct timespec {
  time_t tv_sec; /* Seconds.  */
  long tv_nsec;  /* Nanoseconds.  */
};
関数
int clock_getres(clockid_t clk_id, struct timespec *res);
int clock_gettime(clockid_t clk_id, struct timespec *tp);
```

* 秒単位の値とナノ秒単位の値で時間を表現する。
* clock_getresはclk_idで示したクロックの精度をresに格納する。 これまで紹介してきた関数は格納先の構造体から最大の精度は分かっても、実際の精度は不明だったが、 この関数によって取得することが可能になっている。
* clock_gettimeはclk_idで示したクロックの時間情報をtpに格納する。 こちらが時間情報の関数となるが、clk_idで様々なタイプの時間情報を取得することができる。
