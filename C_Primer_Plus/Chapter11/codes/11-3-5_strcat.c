//strcat()函数，这是一个用来连接的函数
//会自动处理掉字符串末尾的\0
#include <stdio.h>
#include <string.h>
int main(void)
{
    char words1[20];    //实际上这里还可以增加一个小巧思，考虑到一会要把两个句子拼接在一起，也就是最大
    char words2[20];
    
    printf("please enter some words, and I will connect two sentense together.");
    gets_s(words1, 20);
    gets_s(words2, 20);
    strcat(words1, words2);

    printf("And then it is %s.", words1);

    return 0;
}