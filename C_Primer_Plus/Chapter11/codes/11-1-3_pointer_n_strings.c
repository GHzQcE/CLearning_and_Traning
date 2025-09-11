//11-3 指针与字符串的关系
#include <stdio.h>
int main(void)
{
    const char * mesg = "Don't be a fool!";
    const char * copy;

    copy = mesg;
    printf("%s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);   
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);  
    //复习一下，&在C里面是取地址符号，但是这里的mesg本身是一个指针，那么&mesg就是存放这个指针的地址
}

//最后你会发现，mesg的地址和copy的地址相同，也就是说，计算机实际上并没有进行拷贝这个操作
//如果确实需要整个数组，可以使用strcpy()或strncpy()函数，我们稍后介绍这两个函数。