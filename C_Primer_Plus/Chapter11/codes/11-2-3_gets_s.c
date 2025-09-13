//gets_s()
#include <stdio.h>
int main(void)
{
    char words[60];
    
    gets_s(words, 60);
    puts(words);
    printf("done.");

    return 0;
}
//gets_s 只从标准输入中读取
//gets_s 会丢弃换行符
//gets_s 在读取到超出最大长度字符串时会彻底清空并返回空指针（NULL）
        //复习一下，fgets会保留换行符，而gets和gets_s会丢弃换行符