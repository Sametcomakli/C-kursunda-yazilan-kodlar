// 4 basamaklı armstrong sayıları

#include <stdio.h>

int main()
{
	for (int i = 1000; i < 10000; ++i) {
		int d1 = i % 10;
		int d2 = i / 10 % 10;
		int d3 = i / 100 % 10;
		int d4 = i / 1000;
		if (i == (d1 * d1 * d1 * d1) + (d2 * d2 * d2 * d2) + (d3 * d3 * d3 * d3) + (d4 * d4 * d4 * d4))
			printf("%d\n", i);
	}
}
