/*
    字符串数组和循环
    @author:杨秉学
    @time:2019/5/2
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
    int i = 0;
    
    //go through each string in agrv
    /* 在C语言中,实际上没有真正的“布尔”类型,而是用一个整数来代替,0代
表 false ,其它值代表 true 。上一个练习中表达式 i < argc 实际上值为1或
者0,并不像Python是显式的 Ture 或者 False 。这是C语言更接近计算机工作方
式的另一个例子,因为计算机只把值当成数字。 */
    for(i = 1; i < argc; i++)
    {
        printf("arg %d: %s\n",i ,argv[i]);
    }
    printf("argv[0]:%s\n", argv[0]);
    printf("----------------------------------------\n");

    char *states[] = {  //这样的话,一共4个指针
        "Beijing", "Changchun",
        "tianjing", "Shanghai"
    };

    int num_states = 4;

    for(i = 0; i < num_states; i++)
    {
        printf("statue %d: %s\n", i, states[i]);
    }

    return 0;
}