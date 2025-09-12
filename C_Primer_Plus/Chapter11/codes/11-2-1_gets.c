//11.2 字符串输入
//11-2-1 gets函数
#include <stdio.h>
int main(void)
{
    char words[50];
    puts("please enter some words.");
    gets(words);    //如果你用vscode这里已经报警告了
    puts(words);
    printf("%s", words);
    puts("done.");   // 这里可以看到，gets()会在识别到换行符...
                     //...时终止输入，并去掉换行符。而puts()会在输出是加上一个换行符
}
//由于puts()只有 提前声明的一个字符串变量 一个参数，并没有最大可接受的字符串长度...
//因此当输入的字符串长度过长时会导致缓冲区溢出，从而“导致一系列安全风险”
//可以使用fgets()或gets_s()，接下来我们分别学习