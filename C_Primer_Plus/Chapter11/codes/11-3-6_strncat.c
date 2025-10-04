//strncat()
#include <stdio.h>
#include <string.h>
int main(void)
{
    char words1[30];
    char words2[20];

    gets_s(words1, 20);
    gets_s(words2, 20);
    
    strncat(words1, words2, 3);     //前面的保留完整，后面的取n个字符接在前面

    puts(words1);

    return 0;
}