#include <stdio.h>

__declspec(dllimport) void Hello();

void main() {
	printf("呼び出し元｢Hello_C｣から出力\n");
	Hello();
}