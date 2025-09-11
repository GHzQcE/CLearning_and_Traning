//11-2 指针数组，字符串数组
#include <stdio.h>
#define SLEN 40
#define LIM 5
int main(void)
{
    const char *mytalents[LIM] =        //指针表示法
    {
        "Adding numbers swiftly"
        "Multiplying accurately","Stashing data",
        "Following instryctions"
    };                     //目前来看，这是一个内含5个指针的数组
    char yourtalents[LIM][SLEN] = 
    {
        "Walking in a straight line,"
        "Sleeping", "Watching television",
        "Mailing letters", "Reading email"
    };      //而这时一个内涵五个数组的数组数组，每个数组内部含有“SLEN”个char类型的值
    int i;

    puts("Let's compare talents.");
    puts(*mytalents[1]);
    puts(yourtalents[1]);
}