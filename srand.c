#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TRUE 1
#define FALSE 0

void shuffle(int *deck, int n_cards){
	int i;
	static int first_time = TRUE;

	if(first_time) {
		first_time = FALSE;
		srand((unsigned int)time(NULL));
	}

	for(i = n_cards - 1; i > 0; i -=1){
		int where;
		int temp;

		where = rand() % i;
		temp = deck[where];
		deck[where] = deck[i];
		deck[i] = temp;
	}
}

int main(void){
	int deck[5] = {1, 2, 3, 4, 5};
	shuffle(deck, 5);
	for(int i = 0; i < 5; i++) {
		printf("%d ", deck[i]);
	}
	return 0;
}
