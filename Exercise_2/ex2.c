/*
    用Make来代替Python
    在Python当中，执行一个程序需要
    $> python hello.py
    用make取代之后是
    $> make hello 

    -------makefile-----------
    CFLAGS=-Wall -g
    ex2:ex2.c
        cc ex2.c -o ex2
    clean:
        rm -f ex1   //rm 前面是一个 TAB ,而不是多个等量的空格。
    ------------------
    $> make ex2 或者 make    //执行生成ex2
    $> make clean   //执行clean目标
*/
#include <stdio.h>
int main(int argc, char * argv[])
{
    printf("hello world\n");

    return 0;
}