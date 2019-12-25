/*
    指针,可怕的指针
    你可以用指针做下面四个最基本的操作:
        向OS申请一块内存,并且用指针处理它。这包括字符串,和一些你从来没见过的东西,比如结构体。
        通过指针向函数传递大块的内存(比如很大的结构体),这样不必把全部数据都传递进去。
        获取函数的地址用于动态调用。
        对一块内存做复杂的搜索,比如,转换网络套接字中的字节,或者解析文件。
    
    --------------------怎么理解--------------------------------
    当你写下一些类似 ages[i] 的东西时,你实际上在用 i 中的数字来索引 ages 。
        i 是什么:如果 i 的值为0,那么就等同于写下 ages[0] 。我们把 i 叫做下标,因为它是 ages 中的一个位置。它也能称为地址,这是“我想要 ages 位于地址 i 处的整数”中的说法。偏移量
        age 是什么: 那么 ages 是在计算机中那些整数的起始位置(段地址)。当然它也是个地址,C编译器会把任何你键入 ages 的地方替换为数组中第一个整数的地址。
        另一个理解它的办法就是把 ages 当作“数组内部第一个整数的地址”,但是它是整个计算机中的地址,而不是像 i 一样的 ages 中的地址。 ages 数组的名字在计算机中实际上是个地址。
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int ages[] = {23, 43, 12, 18};
    char *names[] = {
        "Ybx", "YBX",
        "YBx", "YangBingxue"
    };

    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    printf("-------------normal----------------------\n");
    for(i = 0; i < count; i++){
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }
    printf("------------pointer---------------\n");

    int *cur_age = ages;
    char **cur_name = names;

    for(i = 0; i < count; i++){
        printf("%s is %d years old.\n",*(cur_name+i), *(cur_age+i));
    }
    printf("---------------end--------------------\n");
}