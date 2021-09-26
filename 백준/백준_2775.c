/*
2�� 1ȣ : 1
2�� 2ȣ : 1 + 3 = 4
2�� 3ȣ : 1 + 3 + 6 = 10
3�� 2ȣ : 2�� 1ȣ + 2�� 2ȣ = 1 + 4 = 5

1�� 1ȣ : 1
1�� 2ȣ : 1 + 2 = 3
1�� 3ȣ : 1 + 2 + 3 = 6
1�� 4ȣ : 1 + 2 + 3 + 4 = 10
1�� 1ȣ : 1


*/

#include <stdio.h>

void apart(int a, int b) {
	int arr[16][15] = { 0 };

	for (int i = 1; i <= 14; i++)
		arr[0][i] = i;
	for (int k = 1; k <= a; k++) {
		for (int j = 1; j <= b; j++) {
			for (int i = 1; i <= j; i++) {
				arr[k][j] += arr[k - 1][i];
			}
		}
	}
	printf("%d\n", arr[a][b]);
}

int main(void)
{
	int num, A, B;

	scanf_s("%d", &num);
	
	for (int i = 0; i < num; i++) {
		scanf_s("%d %d", &A, &B);
		apart(A, B);
	}
	return 0;
}