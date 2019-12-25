/*
    Switch语句
    switch 语句可以处理任意类型的表达式。一些语言
比如Python没有 switch 语句,因为带有布尔表达式的 if 语句可以做相同的事
情。对于这些语言, switch 语句比 if 语句更加灵活,然而内部的机制是一样
的。
C中的 switch 语句与它们不同,实际上是一个“跳转表”。你只能够放置结果为整
数的表达式,而不是一些随机的布尔表达式,这些整数用于计算从 swicth 顶部到
匹配部分的跳转。
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 2){
        printf("Error: you need one argument.\n");
        return 1;
    }
    int i = 0;
    for(i = 0; argv[1][i] != '\0'; i++){
        char letter = argv[1][i];

        switch (letter)
        {
        case 'a':
        case 'A':
            printf("%d:'A'\n",i);
            break;

        case 'b':
        case 'B':
            printf("%d:'B'\n",i);
            break;
        case 'c':
        case 'C':
            printf("%d:'C'\n",i);
            break;
        case 'd':
        case 'D':
            printf("%d:'D'\n",i);
            break;
        case 'e':
        case 'E':
            printf("%d:'E'\n",i);
            break;
        case 'f':
        case 'F':
            printf("%d:'F'\n",i);
            break;
        case 'g':
        case 'G':
            printf("%d:'G'\n",i);
            break;
        case 'h':
        case 'H':
            printf("%d:'H'\n",i);
            break;
        case 'i':
        case 'I':
            printf("%d:'I'\n",i);
            break;
        case 'j':
        case 'J':
            printf("%d:'J'\n",i);
            break;
        case 'k':
        case 'K':
            printf("%d:'K'\n",i);
            break;
        case 'l':
        case 'L':
            printf("%d:'L'\n",i);
            break;
        case 'm':
        case 'M':
            printf("%d:'M'\n",i);
            break;
        case 'n':
        case 'N':
            printf("%d:'N'\n",i);
            break;
        case 'o':
        case 'O':
            printf("%d:'O'\n",i);
            break;
        case 'p':
        case 'P':
            printf("%d:'P'\n",i);
            break;
        case 'q':
        case 'Q':
            printf("%d:'Q'\n",i);
            break;
        case 'r':
        case 'R':
            printf("%d:'R'\n",i);
            break;
        case 's':
        case 'S':
            printf("%d:'S'\n",i);
            break;
        case 't':
        case 'T':
            printf("%d:'T'\n",i);
            break;
        case 'u':
        case 'U':
            printf("%d:'U'\n",i);
            break;
        case 'v':
        case 'V':
            printf("%d:'V'\n",i);
            break;
        case 'w':
        case 'W':
            printf("%d:'W'\n",i);
            break;
        case 'x':
        case 'X':
            printf("%d:'X'\n",i);
            break;
        case 'y':
        case 'Y':
            printf("%d:'Y'\n",i);
            break;
        case 'z':
        case 'Z':
            printf("%d:'Z'\n",i);
            break;
        default:
            printf("%d:%c is not a vowel\n",i, letter);
            break;
        }
    }

    return 0;
}