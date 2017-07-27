#include <stdio.h>

__declspec(dllexport) int Hello(int arry) {
	printf("共有ライブラリ｢Hello｣から出力\n");
	//Update DE1
	char num[] = "1234567890";
	printf("num[%i]=%i\n", arry, num[arry]);
	return num[arry];
}