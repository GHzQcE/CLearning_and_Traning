//sprintf()
#include <stdio.h>
#include <string.h>
int main(void)
{
    char word1[20] = "hello";
    char name[20];
    int age;
    sprintf(word1, "his name is %s.And his age is %s", name, age);  //还可以把这个用在循环里，这就很有意思了

    puts(word1);

    return 0;
}
