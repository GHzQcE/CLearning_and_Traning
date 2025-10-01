#include <stdio.h>
int main(void)
{
    char name1[15], name2[15];
    int numbers;

    printf("please enter your name.");
    numbers = scanf("%10s %10s", name1, name2);     //scanf()函数返回的是它读取了多少数据项
    printf("your name is %s and %s.However you entered %d numbers", name1, name2, numbers);

    return 0;
}