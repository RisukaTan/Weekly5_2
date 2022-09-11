#include<stdio.h>
int MAX(int a, int b) {//65010536
	int Result;
	if (a < b) {
		Result = b;
	}
	else {
		Result = a;
	}
	return Result;
}
int main() {
	int a, b, Result;
	printf("Enter you number : ");
	scanf_s("%d", &a);
	printf("Enter you number : ");
	scanf_s("%d", &b);
	printf("MAX is %d", MAX(a, b));
	return 0;
}