#include <stdio.h>

__declspec(dllexport) void Hello(int arry) {
	printf("���L���C�u�����Hello�����o��\n");

	char num[] = "1234567890";
	printf("num[%i]=%i\n", arry, num[arry]);

}