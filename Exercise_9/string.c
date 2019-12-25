/*
    数组和字符串
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
    int numbers[4] = {0};
    char name[4] = {'a'};

    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1],
            numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n",
                name[0], name[1],
                name[2], name[3]);
    printf("%s\n", name);
    //reset
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    name[0] = 'Y';
    name[1] = 'B';
    name[2] = 'X';
    name[3] = '\0';

    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1],
            numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n",
        name[0], name[1],
        name[2], name[3]);
    printf("%s\n", name);

    //another way to use name
    char *another = "Zed";
    printf("another each:%c %c %c %C\n",
                another[0], another[1],
                another[2], another[3]);

    return 0;
}