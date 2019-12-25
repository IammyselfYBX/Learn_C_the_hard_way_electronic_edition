/**
 * 用到 fscanf 和 fgets 在结构体中构建关于一个人的信息
 * 枚举的使用
 * 
 * I/O函数
 * 这是一个各种IO函数的简单列表。你应该查询每个函数并为其创建速记卡,包含函数名称,功能和它的任何变体。
        fscanf
        fgets
        fopen
        freopen
        fdopen
        fclose
        fcloseall
        fgetpos
        fseek
        ftell
        rewind
        fprintf
        fwrite
        fread
*/
#include <stdio.h>
#include "dbg.h"

#define MAX_DATA 100

typedef enum eye_color{
    BLUE_EYES, GREEN_EYES, BROWN_EYES,
    BLACK_EYES, OTHER_EYES
}eye_color;

const char *eye_color_name[] = {
    "Blue", "Green", "Brown", "Black", "Other"
};

typedef struct Person{
    int age;
    char first_name[MAX_DATA];
    char last_name[MAX_DATA];
    eye_color eyes;
    float income;
}Person;

int main(int argc, char *argv[])
{
    Person you  = {.age = 0};
    int i = 0;
    char *in = NULL;

    printf("What's your First Name?");
    in = fgets(you.first_name, MAX_DATA-1, stdin);
    check(in != NULL, "Failed to read last name.");

    printf("What's your last name?");
    in = fgets(you.last_name, MAX_DATA-1, stdin);
    check(in != NULL, "Failed to read last name.");

    printf("How old are you?");
    int rc = fscanf(stdin, "%d", &you.age);
    check(rc > 0, "You have to enter a number.");

    printf("What color are your eyes:\n");
    for(i = 0; i <= OTHER_EYES; i++){
        printf("%d) %s\n", i+1, eye_color_name[i]);
    }
    printf("> ");

    int eyes = -1;
    rc = fscanf(stdin, "%d", &eyes);
    check(rc > 0, "You have to enter a number.");

    you.eyes = eyes - 1;
    check(you.eyes <= OTHER_EYES && you.eyes >= 0, "Do it right, that's not an option.");

    printf("How much do you make an hour? ");
    rc = fscanf(stdin, "%f", &you.income);
    check(rc > 0,"Enter a floatiing point number.");

    printf("---------RESULTS--------------\n");

    printf("Fiest Name:%s", you.first_name);
    printf("Last Name:%s",you.last_name);
    printf("Age:%d\n",you.age);
    printf("Eyes:%s\n",eye_color_name[you.eyes]);
    printf("Income:%f\n",you.income);

    return 0;

error:
    return -1;
}