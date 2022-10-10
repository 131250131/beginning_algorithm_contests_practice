#include <stdio.h>

// 问题3:double型浮点数最大正数值和最小正数值分别是多少(不必特别精确)?

// 实验思路1：问题1相同，声明一个double 类型的值，不断+1，看什么时候达到“翻转”的边界？
// 但这个耗时太长，增大步长为1 * 10^16

// 实验思路2： 基于问题2的理解，double = gives you 52 bits of significand, 11 bits of exponent, and 1 sign bit.
// 那就是 0 011..11(10个1) 0111111...111(51个1）是最大double

// 我的结论，0011111111110111111111111111111111111111111111111111111111111111 代表的double，也就是 2^1024*2^52

// 公开讨论：
// 1. https://stackoverflow.com/questions/61882455/c-why-max-of-64bit-double-has-308-digits
// 2. https://en.wikipedia.org/wiki/Double-precision_floating-point_format

int main() {
	double a = 0;
	while (a >= 0) {
		a += 1000000000000;
	}
	printf("%f\n", a - 1);
	printf("%f\n", a);
	return 0;
}