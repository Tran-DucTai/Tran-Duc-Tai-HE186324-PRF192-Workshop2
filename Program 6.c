#include<stdio.h>

int main(){
	int code; 
	for(code = 0; code < 256; code++){
		printf("%c, %d, %o, %x\n", code, code, code, code);
		if(code != 0 && code % 20 == 0)
		getchar();
	}
	return 0;
}
