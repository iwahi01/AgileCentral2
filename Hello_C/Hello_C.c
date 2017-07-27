#include <stdio.h>

__declspec(dllimport) int Hello(int);

void main() {
	printf("呼び出し元｢Hello_C｣から出力\n");
	int val = Hello(99);
	printf("呼び出し先｢Hello｣からの戻り値=%i\n", val);
}