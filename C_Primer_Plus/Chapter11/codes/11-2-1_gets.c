//11.2 字符串输入
//11-2-1 gets函数
#include <stdio.h>
int main(void)
{
    char words[50];
    puts("please enter some words.");
    gets(words);
    puts(words);
    printf("%s", words);    //

}