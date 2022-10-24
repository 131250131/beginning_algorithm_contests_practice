#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // for(int i=2; i<=2 * n; i+=2) 
    for(int i=1; i<=n; i++) 
        // printf("%d\n", i * 2); 
        printf("%d\n", i); 
    return 0;
}

// 题目1。假设需要输出2，4，6，8，...，2n，每个一行，能不能通过对程序2-1进行小小 的改动来实现呢?为了方便，现把程序复制如下:

// 任务1:修改第7行，不修改第6行。
    // for(int i=2; i<=2 * n; i+=2) 
// 任务2:修改第6行，不修改第7行。
        // printf("%d\n", i * 2); 