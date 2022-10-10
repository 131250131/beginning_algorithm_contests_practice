#include<stdio.h>

int main()
{
	const int price = 95;
	int a;
	double b;

	scanf("%d", &a);
	b = a * price;
	if (b > 300) {
		b = b * 0.85;
	}
	printf("%0.2f\n", b);
	return 0;
}