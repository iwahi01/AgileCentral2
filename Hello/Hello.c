#include <stdio.h>

__declspec(dllexport) void Hello(int arry) {
	printf("共有ライブラリ｢Hello｣から出力\n");

	char num[] = "1234567890";
	printf("num[%i]=%i\n", arry, num[arry]);

}