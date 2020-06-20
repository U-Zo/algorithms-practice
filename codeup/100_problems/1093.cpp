#include <cstdio>

int arr[24];
int n, num;

int main(void) {
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[num]++;
	}

	for (int i = 1; i <= 23; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}