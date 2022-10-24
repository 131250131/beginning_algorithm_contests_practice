#include<stdio.h> 

int main()
{
    double i;
    for(i = 0; i != 10; i += 0.1)
        printf("%.1f\n", i);
    return 0;
}

// 题目2。下面的程序运行结果是什么?“!=”运算符表示“不相等”。提示:请上机实 验，不要凭主观感觉回答。
// 死循环。
// 修改方法：for(i = 0; i - 10 < 1e-5; i += 0.1)