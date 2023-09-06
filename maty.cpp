#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	
	int cash = 0, prvni = 0, druhy = 0, treti = 0, bet = 0;
	
	system("mode 50,26");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t   ");
	printf("Zadej kolik mas penez: ");
	scanf("%d",&cash);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t   ");
	printf("Po kolika chces sazet: ");
	scanf("%d",&bet);
	system("cls");

	do{
	printf("Penize: %i",cash);
	printf("\t\t & = x3 | $ = x5 | 7 = x100");
	
	
	prvni = rand()%3+1;
	druhy = rand()%3+1;
	treti = rand()%3+1;
	
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t   ");
		
	switch(prvni){
		case 1: printf("|&|"); break;
		case 2: printf("|$|"); break;
		case 3: printf("|7|"); break;
	}
	
	switch(druhy){
		case 1: printf("|&|"); break;
		case 2: printf("|$|"); break;
		case 3: printf("|7|"); break;
	}
	
	switch(treti){
		case 1: printf("|&|"); break;
		case 2: printf("|$|"); break;
		case 3: printf("|7|"); break;
	}

	cash = cash-bet;
	
	if(prvni == 1 && druhy == 1 && treti == 1){
		printf("\n\n\t\tVyhral jsi 3x%d",bet);
		cash = cash+3*bet;
		printf("\n\t\tNyni mas: %d", cash+bet);
	}
	if(prvni == 2 && druhy == 2 && treti == 2){
		printf("\n\n\t\tVyhral jsi 5x%d",bet);
		cash = cash+5*bet;
		printf("\n\t\tNyni mas: %d", cash+bet);
	}
	if(prvni == 3 && druhy == 3 && treti == 3){
		printf("\n\n\t\tVyhral jsi 100x%d",bet);
		cash = cash+100*bet;
		printf("\n\t\tNyni mas: %d", cash+bet);
		
	}
	
	getchar();
	
	system("cls");
	} while(cash>0);
	
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t      ");
	printf("Vsechno si prohral");
	getchar();
}
