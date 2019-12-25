/**
 * 测试__FILE__, __TIME__
 * */
#include <stdio.h>

int main(int argc, char *agrv[])
{
    printf("__FILE_:"__FILE__"\n");
    printf("__DATE__:"__DATE__"\n");
    printf("__TIME__:"__TIME__"\n");
    printf("__TIMESTAMP__:"__TIMESTAMP__"\n");
    printf("__BASE_FILE__:"__BASE_FILE__"\n");
    //printf("LINE:"__LINE__"\n");

    return 0;
}
