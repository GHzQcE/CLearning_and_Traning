//strlen()
#include <stdio.h>
#include <string.h>
int main(void)
{
    char words1[20];
    size_t length;  //long是c的关键字，不能用

    printf("please enter some words.");
    fgets(words1, 20, stdin);   //fgets会储存一个换行符，所以会导致长度加1，使用gets_s就没有这个问题了
    length = strlen(words1);    //实际上，strlen()返回的是size_t类型

    printf("your words is %zu letters long.", length);

    return 0;
}