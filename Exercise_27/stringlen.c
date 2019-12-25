#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    printf("---------------求字符串的长度---------------\n");
    char a[] = "YangBingxue is the most handsome man in NCEPU";
    int len = strlen(a);
    puts(a);
    printf("The length of a[] is %d\n",len);

    printf("---------------求整形数组的长度---------------\n");
    int b[] = {1, 2, 45, 23, 45, 67};
    int intlen = sizeof(b)/sizeof(int);
    int i = 0;
    for(i = 0; i<intlen; i++){
        printf("%d ", b[i]);
    }
    printf("\nThe length of b[] is %d\n", intlen);

    return 0;
}