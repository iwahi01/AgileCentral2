#include <stdio.h>

__declspec(dllimport) int Hello(int);

void main() {
	printf("�Ăяo�����Hello_C�����o��\n");
	int val = Hello(99);
	printf("�Ăяo����Hello�����̖߂�l=%i\n", val);
}