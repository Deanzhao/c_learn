#include<stdio.h>
#include<stdlib.h>
void printTriangle(char c) {
	int n = c - 'A' + 1;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 2*n - 1; j++){
		//想一下x,y轴，这里0，0在左上角
			if(i <= n - 1 && i >= j - n + 1 && i >= -j + n - 1) {
				//想一下绝对值
				printf("%c", 'A' + i - abs(j - n + 1));
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return ;
	
}

int main(void){
	char c;
	scanf("%c", &c);
	printTriangle(c);
	return 0;
}
