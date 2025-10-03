//strncmp()
#include <stdio.h>
#include <string.h>
int main(void)
{
    char words1[20];
    char words2[20];
    int n;

    printf("只检查前三个字符");
    fgets(words1, 20, stdin);
    fgets(words2, 20, stdin);

    n = strncmp(words1, words2, 3);     //只比较前n个字符
    printf("%d", n);

    return 0;
}