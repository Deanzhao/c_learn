#include<stdio.h>
#include<string.h>

int myStrlen(char const *string);
int myStrlen(char const *string){
	int length;
	for(length = 0; *string++ != '\0';) {
		length ++;
	}
	return length;
}

int main(void){
	char *str;
	scanf("%s", str);
	printf("%d \n", myStrlen(str));
	printf("systeam said it is %lu \n", strlen(str));
	return 0;
}
