#include <stdio.h>

// 问题5:if(a)if(b)x++;else y++的确切含义是什么?这个else应和哪个if配套? 有没有办法明确表达出配套方法?

// 实验思路: 枚举a b

// 编译输出：
// question_1_5.c:12:18: warning: add explicit braces to avoid dangling else [-Wdangling-else]
//                         if(a)if(b)x++;else y++;
//                                       ^
// 1 warning generated.

// 运行输出:
// a:0 b:0, x:0, y:0
// a:0 b:1, x:0, y:0  
// a:1 b:0, x:0, y:1
// a:1 b:1, x:1, y:0

// 结论: 现代的编译器会在这种可能引起歧义的编写方式进行warning。
// 这告诉我们即使是单挑语句的if else, 也尽量加上括号以提高其可读性


// if(a)if(b)x++;else y++; 

// 等同于：

// if (a) {
// 	if (b) {
// 		x++;
// 	} else {
// 		y++;
// 	}
// } 

// 其他讨论： https://en.wikipedia.org/wiki/Dangling_else

int main() {
	int x,y;
	for (int a = 0; a < 2; a++) {
		for (int b = 0; b < 2; b++) {
			x = 0;
			y = 0;
			if(a)if(b)x++;else y++;
			// if (a) {
			// 	if (b) {
			// 		x++;
			// 	} else {
			// 		y++;
			// 	}
			// } 
			printf("a:%d b:%d, x:%d, y:%d\n", a, b, x, y);
		}
	}

	return 0;
}