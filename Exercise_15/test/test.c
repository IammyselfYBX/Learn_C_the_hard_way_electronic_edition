/*
    type *ptr           //type 类型的指针,名为 ptr 。
    *ptr                //ptr 所指向位置的值。
    *(ptr + i)          //(ptr 所指向位置加上 i)的值。以字节为单位的话,应该是 ptr 所指向的位置再加上 sizeof(type) * i
    &thing              //thing 的地址。
    type *ptr = &thing  //名为 ptr , type 类型的指针,值设置为 thing 的地址。
    ptr++               //自增 ptr 指向的位置。
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    char *a[] = {"123", "qwer", "sdhj","Ybx"};
    printf("print address(ever time are difference): %s\n",a);
    printf("print first element: %s\n",*a);
    printf("%s | %s | %s | %s\n",a[0], a[1], a[2], a[3]);
    char *b = a[0];
    printf("print ever element of a[1]: %c %c %c %c\n",b[0], b[1], b[2]);
    char *c = a[1];
    printf("print ever element of a[2]: %c %c %c %c\n",c[0], c[1], c[2], c[3]);
    printf("--------------------------------------\n");
    return 0;
}