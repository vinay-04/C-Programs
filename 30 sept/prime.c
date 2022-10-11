#include <math.h>
#include <stdio.h>
int main()
{
	int n, i, a = 1;
	printf("Enter a number: \n");
	scanf("%d", &n);
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			a = 0;
			break;
		}
	}
	if (n <= 1)
		a = 0;
	if (a == 1) {
		printf("Prime", n);
	}
	else {
		printf("Composite", n);
	}
	return 0;
}
