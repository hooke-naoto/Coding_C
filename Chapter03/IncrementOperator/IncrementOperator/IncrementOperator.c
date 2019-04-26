#include <stdio.h>
int main()
{
	int value, prefix, postfix;

	/* prefix increment */
	value = 3;
	prefix = ++value;	// Add 1 to "value" then "value" is input to "prefix".
	printf("prefix:%d\n", prefix);
	printf("value:%d\n", value);

	/* postfix increment */
	value = 3;
	postfix = value++;	// "value" is input to "postfix" then add 1 to "value".
	printf("postfix:%d\n", postfix);
	printf("value:%d\n", value);

	/* assignment operator */
	int value1 = 100;
	int value2 = 20;
	value1 += 30;	// value1 = value1 + 30
	printf("value1:%d\n", value1);
	value1 -= value2;	// value1 = value1 - value2
	printf("value1:%d\n", value1);

	return 0;
}