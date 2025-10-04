//strncpy()
#include <stdio.h>
#include <string.h>
int main(void)
{
    char word1[20];
    char word2[20];

    printf("please enter some words.");
    gets_s(word1, 10);
    strncpy(word2, word1, 3);   //这里有一个有意思的问题可能会导致输出错误，因为你只复制了前三个字符，没有包括终止符
    word2[3] = '\0';            //所以可能会导致输出错误，可以手动添加终止符
    
    puts(word2);

    return 0;
}