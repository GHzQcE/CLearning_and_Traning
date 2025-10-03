//strncat()
#include <stdio.h>
#include <string.h>
int main(void)
{
    char words1[30];
    char words2[20];

    gets_s(words1, 20);
    gets_s(words2, 20);
    
    strncat(words1, words2, 3);

    puts    //好困，，，明天再学
}