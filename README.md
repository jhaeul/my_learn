#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#define MY 5

void main(void) {
	int x = 2, y=3;
	printf("%d\n", 3 && 4);
	printf("%d\n", 1 || 4);
	printf("%d\n", 100 && 200 && 0);
	printf("%d\n", (2 > 3) && (++x < 5));
	printf("x=%d\n", x);
	printf("%d\n", (3 >2)||(++y < 5));
	printf("y=%d\n", y);


}

