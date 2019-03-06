struct telnum {
    char name[7];               /*姓名*/
    char tel[13];               /*電話號碼*/
};                              /*定義保存一個電話號碼的結構體*/
struct telnum num[100];         /*全局變量，一個結構體數組*/
int i;                          /*全局變量，當前記錄的條數*/
