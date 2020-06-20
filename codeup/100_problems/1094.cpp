#include <cstdio>

int arr[10000];
int n, num;

int main(void) {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[i] = num;
	}

	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
		
	return 0;
}