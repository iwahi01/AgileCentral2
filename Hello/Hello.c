#include <stdio.h>

__declspec(dllexport) void Hello() {
	printf("共有ライブラリ｢Hello｣から出力\n");
//For DE1
	char num[] = "1234567890";
	int arry = 11;
	printf("num[%i]=%i\n", arry, num[arry]);

}