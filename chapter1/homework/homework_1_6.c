#include<stdio.h>

int main() {
	int a, b, c;
	int a2, b2, c2;
	scanf("%d%d%d", &a, &b, &c);
	a2 = a * a;
	b2 = b * b;
	c2 = c * c;
	if (a2 == (b2 + c2) ||
	    b2 == (a2 + c2) ||
	    c2 == (b2 + a2)) {
		printf("yes\n");
	} else {
		printf("not a triangle\n");
	}
}