#include <stdio.h>

__declspec(dllexport) int Hello(int arry) {
	printf("���L���C�u�����Hello�����o��\n");
	//Update DE1
	char num[] = "1234567890";
	printf("num[%i]=%i\n", arry, num[arry]);
	return num[arry];
}