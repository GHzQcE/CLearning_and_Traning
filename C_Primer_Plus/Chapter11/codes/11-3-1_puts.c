//11-3字符串输出 puts.c
#include <stdio.h>
int main(void)
{
    char words[50];
    gets(words);
    puts(words);

    char words1[50];
    fgets(words1, 50, stdin);
    fputs(words1, stdout);  //fputs()函数是puts()针对⽂件定制的版本

}
//做一个小总结
/*
    函数            get()      fgets()                  gets_s()
    参数数量          1           3                         2
    (p.s.)       存储地址   存储地址，长度，输入文件      存储地址，长度

    换行符保留       否            是                        否
    若溢出         无作为        截断输入                  清空并返回NULL
    返回值     ------（成功：返回指向字符串的指针 ；失败/EOF：NULL）------    
*/