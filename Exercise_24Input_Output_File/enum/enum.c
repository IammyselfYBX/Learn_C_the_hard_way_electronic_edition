/**
 * 遍历枚举
*/
#include <stdio.h>

typedef enum weekend{
    Mon, Tues, Wed, Thur, 
    Fri, Sat, Sun
}weekend;

int main(int argc, char *arg[])
{
    int i = 0;
    weekend *week;
    printf("%s\n", week[1]);
    // for(i = 0; i <= Sun; i++){
    //     printf("%d, %s\n", i+1, week[i]);
    // }

    return 0;
}