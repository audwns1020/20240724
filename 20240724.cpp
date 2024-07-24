// 2차원 배열 문제6
//#include <stdio.h>
//
//int main()
//{
//	const int n = 5;
//	long arr[n][n] = {};
//	int num = 1;
//	int x = -1, y = 0;
//
//	for (int i = 0; i < 5; i++) {
//		x++;
//		arr[y][x] = num;
//		num++;
//	}
//
//	for (int i = 0; i < 4; i++) {
//		y++;
//		arr[y][x] = num;
//		num++;
//	}
//
//	for (int i = 0; i < 4; i++) {
//		x--;
//		arr[y][x] = num;
//		num++;
//	}
//
//	for (int i = 0; i < 3; i++) {
//		y--;
//		arr[y][x] = num;
//		num++;
//	}
//
//	for (int i = 0; i < 3; i++) {
//		x++;
//		arr[y][x] = num;
//		num++;
//	}
//
//	for (int i = 0; i < 2; i++) {
//		y++;
//		arr[y][x] = num;
//		num++;
//	}
//
//	for (int i = 0; i < 2; i++) {
//		x--;
//		arr[y][x] = num;
//		num++;
//	}
//
//	for (int i = 0; i < 1; i++) {
//		y--;
//		arr[y][x] = num;
//		num++;
//	}
//
//	for (int i = 0; i < 1; i++) {
//		x++;
//		arr[y][x] = num;
//		num++;
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
