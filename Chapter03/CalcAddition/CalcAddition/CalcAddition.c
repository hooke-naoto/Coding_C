#include <stdio.h>
int main() {
	int point = 50;
	int addValue1;
	int addValue2;
	int total;
	addValue1 = 4 + 6;
	printf("%d\n", addValue1);
	addValue2 = addValue1 + 35;
	printf("%d\n", addValue2);
	total = addValue2 + point;
	printf("%d\n", total);
	return 0;
}