/*
-------------------------------------
    更多变量和一些算术
--------------------------------------
    你可以通过声明 int , float , char 和 double 类型的变量,来对它们做更
多的事情,让我们来熟悉它们吧。接下来我们会在各种数学表达式中使用它们,所
以我会向你介绍C的基本算术操作。
*/
#include <stdio.h>
int main(int argc, char * argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;
    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    long universe_of_defects = 1L * 1024L * 1024L *1024L;
    printf("The entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe.\n", part_of_universe);

    //this makes no sense, just a demo of something weird
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d %%.\n", care_percentage);    //用2个%来打印出一个%

    return 0;
}