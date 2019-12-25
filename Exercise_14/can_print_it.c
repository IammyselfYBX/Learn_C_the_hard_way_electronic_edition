#include "function.h"
int can_print_it(char ch)
{
    //isalpha 和 isblank 做了检查提供的字符是否是字母或者空白字符的所有工作。
    return isalpha(ch) || isblank(ch);
    //只是简单地将 isalpha(ch) || isblank(ch) 的真值(0或1)返回给它的调用者 print_letters
}