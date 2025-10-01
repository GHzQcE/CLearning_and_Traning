//一些处理字符串的函数
//strcmp()——用来比较两个字符串是否相等
#include <stdio.h>
#include <string.h> //strcmp()在这个头文件里
int main(void)
{
    char string1[50];
    char string2[50];

    printf("请输入两个字符串，然后计算机会检查他们是否相等");
    fgets(string1, 50, stdin);
    printf("请输入下一个");
    fgets(string2, 50, stdin);

    printf("%d", strcmp(string1, string2));     //当两个字符串相等时，放回0
    /*
    当不相等时，这里就有一点问题了，让我来详细做说明
    假设有两个字符串“hello”和“hi”
    hello         hello
    |       ->     |          ->不同，返回两者的ASCII表插值
    he            he
    */                                          
    return 0;
}