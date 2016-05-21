/*
	Tested with: gcc (GCC) 6.1.1 20160501
*/

#include <string.h>

#define ABRACADABRA "wut>\xf6\x86\x04\x08\xb0\x04\x31\xdb\xb9\xe0\x86\x04\x08\x31\xd2\xb2\x0e\xcd\x80\xb0\x01\xcd\x80"

char hello[] = "Hello World!\n\0" ABRACADABRA;

int main(int argc, char *argv[]) {
	char magic_stdout[14];
	memcpy(&magic_stdout, &hello, sizeof hello);
}
