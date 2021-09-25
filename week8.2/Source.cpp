#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int  k = 0;
int main() {
	int n[9];
	for (int i = 0; i <= 9; i++) {
		printf("Enter height : ");
		scanf("%d", &n[i]);
	}
	for (int j = 0; j <= 9; j++) {
		k = k + n[j];
	}
	printf("\n\n------------------------------\n");
	float avg = k / 10;
	printf("Height avg is %.2f", avg);
	return 0;
}