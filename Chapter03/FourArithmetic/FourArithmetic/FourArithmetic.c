#include <stdio.h>
int main() {
	int value1 = 9;
	int value2 = 4;
	int addAns, subAns, mulAns, divAns;
	addAns = value1 + value2;
	subAns = value1 - value2;
	mulAns = value1 * value2;
	divAns = value1 / value2;
	printf("%d\n", addAns);
	printf("%d\n", subAns);
	printf("%d\n", mulAns);
	printf("%d\n", divAns);
	return 0;
}