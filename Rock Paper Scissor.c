#include<stdio.h>
#include<conio.h>
int you,computer;
int menu(){
	int choice;
//	printf("\t\t\t|-----------------------------| ");
	printf("\n\n\n\t\t\t+-----------------------------+");
	printf("\n\t\t\t|Press (1) to select Rock     |");
	printf("\n\t\t\t+-----------------------------+");
	printf("\n\t\t\t|Press (2) to select Paper    |");
	printf("\n\t\t\t+-----------------------------+");
	printf("\n\t\t\t|Press (3) to select Scissor  |");
	printf("\n\t\t\t+-----------------------------+");
	printf("\n\t\t\t|Press (4) to Exit            |");
	printf("\n\t\t\t+-----------------------------+");
//	printf("\n\t\t\t|-----------------------------|");
	printf("\n\n\t\t\tEnter your choice: ");
	scanf("%d",&choice);
	return(choice); 
}
void setup(){
	label:
		computer = rand()%4;
	if(computer==0){
		goto label;
	}
	you = menu();
}
void Makelogic(){
	switch(you)
	{
		case 1:
			if(computer==1){
				printf("\t\t\t+-----------------------------+ ");
				printf("\n\t\t\t|        Game Draw            |");
				printf("\n\t\t\t+-----------------------------+ ");
				printf("\n\n\t\t\t\t You = Rock\n\t\t\t\tComputer = Rock");
				break;
			}
			else if(computer==2){
				printf("\t\t\t+-----------------------------+ ");
				printf("\n\t\t\t|      Computer Won           |");
				printf("\n\t\t\t+-----------------------------+ ");
				printf("\n\n\t\t\t\t You = Rock\n\t\t\t\tComputer = Paper");
				break;
			}
			else{
				printf("\t\t\t+-----------------------------+ ");
				printf("\n\t\t\t|         You Won             | ");
				printf("\n\t\t\t+-----------------------------+ ");
				printf("\n\n\t\t\t\t You = Rock\n\t\t\t\tComputer = Scissor");
				break;
			}
		case 2:
			{
				if(computer==1){
				printf("\t\t\t+-----------------------------+ ");
				printf("\n\t\t\t|         You Won             |");
				printf("\n\t\t\t+-----------------------------+ ");
				printf("\n\n\t\t\t\t You = Paper\n\t\t\t\tComputer = Rock");
				break;
				}
			else if(computer==2){
				printf("\t\t\t+-----------------------------+ ");
				printf("\n\t\t\t|        Game Draw            |");
				printf("\n\t\t\t+-----------------------------+ ");
				printf("\n\n\t\t\t\t You = Paper\n\t\t\t\tComputer = Paper");
				break;
				}
			else{
				printf("\t\t\t+-----------------------------+ ");
				printf("\n\t\t\t|       Computer Won          |");
				printf("\n\t\t\t+-----------------------------+ ");
				printf("\n\n\t\t\t You = Paper\n\t\t\t\tComputer = Scissor");
				break;
				}
			}
		case 3:
			{
				if(computer==1){
				printf("\t\t\t+-----------------------------+ ");
				printf("\n\t\t\t|       Computer Won          |");
				printf("\n\t\t\t+-----------------------------+ ");
				printf("\n\n\t\t\t\t You = Scissor\n\t\t\t\tComputer = Rock");
				break;
			}
			else if(computer==2){
				printf("\t\t\t+-----------------------------+ ");
				printf("\n\t\t\t|          You Won            |");
				printf("\n\t\t\t+-----------------------------+ ");
				printf("\n\n\t\t\t\t You = Scissor\n\t\t\t\tComputer = Paper");
				break;
			}
			else{
				printf("\t\t\t+-----------------------------+ ");
				printf("\n\t\t\t|         Game Draw           |");
				printf("\n\t\t\t+-----------------------------+ ");
				printf("\n\n\t\t\t\t You = Scissor\n\t\t\t\tComputer = Scissor");
				break;
			}
		}
     	case 4:
			{
				exit(0);
			} 
		default:
			printf("\n\n\t\t\t\tInvalid User Choice");
}
}
int main()
{
	while(1){
		system("cls");
		printf("\n\n\n\n\n\n\n\t\t\tPress Enter to Start\n");
		getch();
		system("cls");
		setup();
		Makelogic();
		getch();
	}
	return 0;
}
