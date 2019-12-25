/**
 * Zed's Awesome Debug Macros
 * 
 * 一、C的错误处理问题
 *  几乎每个编程语言中,错误处理都非常难。
 *  有些语言尽可能试图避免错误这个概念,而另一些语言发明了复杂了控制结构,比如异常来传递错误状态。
 * 
 * 二、写C语言程序按照下列模式:
 *    调用函数。
 *    如果返回值出现错误(每次都必须检查)。
 *    清理创建的所有资源。
 *    打印出所有可能有帮助的错误信息。
 * 很多C程序需要持续运行数周、数月或者数年,并且需要优雅地处理来自于多种资源的错误。
 * 你并不能仅仅让你的服务器在首次运行就退出,你也不能让你写的库使使用它的程序退出。这非常糟糕
 */
#include <stdio.h>
#include "dbg.h"
#include <stdlib.h>

void test_debug()
{
    debug("I have Brown Hair.");

    debug("I am %d years old.", 37);
}

void test_log_err()
{
    log_err("I believe everything is broken.");
    log_err("There are %d problems in %s.", 0, "space");
}

void test_log_warn()
{
    log_warn("You can safely ignore this.");
    log_warn("Maybe consider looking at : %s.", "/etc/passwd");
}

void test_log_info()
{
    log_info("Well I did something mundane.");
    log_info("It happened %f times today.", 1.3f);
}

int test_check(char *file_name)
{
    FILE *input = NULL;
    char *block = NULL;

    block = malloc(100);
    check_mem(block);

    input = fopen(file_name, "r");
    check(input, "Failed to open %s.", file_name);

    free(block);
    fclose(input);
    return 0;

error:
    if(block){
        free(block);
    }
    if(input){
        fclose(input);
    }
    return -1;
}

int test_sentinel(int code)
{
    char *temp = malloc(100);
    check_mem(temp);

    switch (code)
    {
    case 1:
        log_info("It worked.");
        break;
    
    default:
        sentinel("I shouldn't run.");
        break;
    }

    free(temp);
    return 0;

error:
    if(temp){
        free(temp);
    }
    return -1;
}

int test_check_mem()
{
    char *test = NULL;
    check_mem(test);

    free(test);
    return 1;

error:
    return -1;
}

int test_check_debug()
{
    int i = 0;
    check_debug( i != 0, "Oops, I was 0.");

    return 0;

error:
    return -1;
}

int main(int argc, char * argv[])
{
    check (argc == 2, "Need an argument.");

    printf("-------test_debug-----\n");
    test_debug();
    printf("-------test_log_err----\n");
    test_log_err();
    printf("-------test_log_warn-----\n");
    test_log_warn();
    printf("-------test_log_info-----\n");
    test_log_info();

    printf("\n-------check--------------\n");
    check(test_check("macro.c") == 0, "failed with macro.c");
    check(test_check(argv[1]) == -1, "failed with argv");
    check(test_sentinel(1) == 0, "test_sentinel failed.");
    check(test_sentinel(100) == -1, "test_sentinel failed.");
    check(test_check_mem() == -1, "test_check_men failed.");
    check(test_check_debug() == -1, "test_check_debug failed.");

    return 0;

error:
    return 1;
}