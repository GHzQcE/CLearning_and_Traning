//strcpy() 复制字符串
#include <stdio.h>
#include <string.h>
int main(void)
{
    char words1[20];
    char words2[20];
    
    printf("please enter some words.\n");
    fgets(words1, 20, stdin); 
    strcpy(words2, words1);

    printf("words1: %s", words1);
    printf("words2: %s", words2);

    return 0;
}
//那么这里为什么不直接让words2 = words1呢？因为words1，words2 实际上都是字符串名
//他们所包含的都是字符串的首地址，所以这样相当于是把words1的地址赋给words1
//这样做可能会达到相同的效果，但是归根结底，这个操作不是“复制”

//另外，因为缺乏长度控制，所以strcpy()是不安全的，可能会超过word2的限制导致程序崩溃