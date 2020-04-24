#include <cstdio>

char arr[51] = { 0 };
int i = 0, tmp = 0, flag = 0, ans = 0;

int main(void) {
	scanf_s("%s", arr, 50);
	while (arr[i] != 0) {
		if (arr[i] >= '0' && arr[i] <= '9') {
			tmp *= 10;
			tmp += arr[i] - '0';
		}
		else {
			if (flag == 0) {
				ans += tmp;
			}
			else {
				ans -= tmp;
			}

			if (flag == 0 && arr[i] == '-') {
				flag = 1;
			}
			tmp = 0;
		}

		i++;
	}

	if (flag == 0) {
		ans += tmp;
	}
	else if (flag == 1) {
		ans -= tmp;
	}

	printf_s("%d", ans);

	return 0;
}