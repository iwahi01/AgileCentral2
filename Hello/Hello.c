#include <stdio.h>

__declspec(dllexport) void Hello() {
	printf("���L���C�u�����Hello�����o��\n");
//For DE1
	char num[] = "1234567890";
	int arry = 11;
	printf("num[%i]=%i\n", arry, num[arry]);

}