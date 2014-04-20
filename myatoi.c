#include<stdio.h>
int isNum(char c);
int myatoi(char *str);

int myatoi(char *str){
	if(str == NULL) {
		return 0;
	}

	int res = 0;
	int negative = 1;
	if(*str == '-') {
		negative = -1;
		str++;
	}

	for(; *str != 0; str++) {
		if(!isNum(*str)) {
			break;
		}		
		res = *str - '0' + res*10;
	}
	res = res * negative;
	return res;
}

int isNum(char c){
	return (c >= '0' && c <= '9') ?  1 : 0;
}

int main(void){
	printf("%d ", myatoi("123"));
	return 0;
}
