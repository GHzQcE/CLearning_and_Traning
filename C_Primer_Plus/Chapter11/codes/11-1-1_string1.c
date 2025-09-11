//11-1 几种定义字符串的方法与初探puts()
#include <stdio.h>
#define MSG "I an a symbolic string constant"
#define MAXLENGTH 81
int main(void)
{
    char words[MAXLENGTH] = "I am a symbolic string constant";//双引号里的内容为“字符串字面量”或者“字符串常量”
    //创建了一个MAXLENGTH长度的数组，并把它“初始化”为后面的字符串
    const char * ptl = "Something is pointing at me.";
    //创建了一个指向const char类型的指针并把一个字符串的地址赋给他
    puts("Here are \"some\" strings:");
    puts(MSG);
    puts(words);
    //这里接受了一个数组
    puts(ptl);//puts会自动再末尾加上换行符
    //实际上这个函数接收一个指针，这里是ptl，也就是刚刚那条字符串的地址
    words[8] = 'p';
    char words_undefine[] = "this is not define";
    puts(words);

    return 0;
}

//then more
/*
    “字符串常量”实际上是“静态存储类别”，什么是静态存储类别呢？当程序执行到这里时，这个字符串
就会被存储一次，但也仅此一次，多次执行不会创建多条存储。"......."<-像是这样的内容被视为指向
存储地址的指针。
    如果你在printf函数里用%p转义符号配上"..."参数的话，你会发现你打印了一串地址
    *"..."则是代表地址上的值，结合之前数组的知识，也就是字符串的首字母
    
    对于指针表示法表示字符串和数组表示法表示字符串的区别？
    书里介绍了一些技术细节，这里我只写一个结论
    在使用指针表示法是用指针修改字符串的值可能会导致程序错误，
    因此建议在使用指针表示法是指向 const char 类型
    而使用数组表示法则没有这个问题
    因此，如果打算修改字符串的内容，就不要使用指针表示法，请使用数组表示法
    
*/
