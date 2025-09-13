//fgets()，不小心把这个文件删了QuQ
#include <stdio.h>
int main(void)
{
    char words[50];
    char * ptr;

    ptr = fgets(words, 50, stdin);  //参数为，赋给变量，最大长度，要读入的文件，返回字符串的指针或NULL
    fputs(words, stdout);   //同上
    fputs(ptr, stdout);     //fgets会保留换行符

    return 0;
}