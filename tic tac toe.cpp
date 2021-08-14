#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

char sqaure[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkWin();
void drawBoard();

int main(){
	int player = 1,i,choice;
	char mark; // X or  O
	do{
		drawBoard();
		player = (player % 2) ? 1:2;
		printf("player %d ,Enter the choice: ", player);
		scanf("%d",&choice);
		mark = (player == 1) ? 'X' : 'O';
		if(choice ==1 && sqaure[1] == '1')
			sqaure[1] = mark;
		else if(choice ==2 && sqaure[2] == '2')
			sqaure[2] = mark;
		else if(choice ==3 && sqaure[3] == '3')
			sqaure[3] = mark;
		else if(choice ==4 && sqaure[4] == '4')
			sqaure[4] = mark;
		else if(choice ==5 && sqaure[5] == '5')
			sqaure[5] = mark;
		else if(choice ==6 && sqaure[6] == '6')
			sqaure[6] = mark;
		else if(choice ==7 && sqaure[7] == '7')
			sqaure[7] = mark;
		else if(choice ==8 && sqaure[8] == '8')
			sqaure[8] = mark;
		else if(choice ==9 && sqaure[9] == '9')
			sqaure[9] = mark;
		else{
			printf("INVALID INPUT !");
			player--;
			getch();
		}
		i = checkWin();
		player++;
	}while(i==-1);

	drawBoard();
	if (i == 1)
	{
		printf("==>> player %d won",--player);
	}
	else{
		printf("GAME DRAW");
	}

	getch();
	return 0;
}

int checkWin(){
	if(sqaure[1] == sqaure[2] && sqaure[2] == sqaure[3])
	 	return 1;
	else if (sqaure[4] == sqaure[5] && sqaure[5] == sqaure[6])
	{
	 	return 1;
	}
	else if (sqaure[7] == sqaure[8] && sqaure[8] == sqaure[9])
	{
	 	return 1;
	}
	else if (sqaure[1] == sqaure[4] && sqaure[4] == sqaure[7])
	{
	 	return 1;
	}
	else if (sqaure[2] == sqaure[5] && sqaure[5] == sqaure[8])
	{
	 	return 1;
	}
	else if (sqaure[3] == sqaure[6] && sqaure[6] == sqaure[9])
	{
	 	return 1;
	}
	else if (sqaure[1] == sqaure[5] && sqaure[5] == sqaure[9])
	{
	 	return 1;
	}
	else if (sqaure[3] == sqaure[5] && sqaure[5] == sqaure[7])
	{
	 	return 1;
	}
	else if (sqaure[1] ! = '1' && sqaure[2] != '2' && sqaure[3] != '3' && sqaure[4] != '4' && sqaure[5] != '5' && sqaure[6] != '6' && sqaure[7] != '7' && sqaure[8] != '8' && sqaure[9] != '9')
	{
		return  0;
	}
	else
		return -1;
}

void drawBoard(){
	system("cls");
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("Player1 (X) - Player2 (O) \n\n\n");
	printf("	|	|	\n");
	printf(" %c	 | %c | %c \n",sqaure[1],sqaure[2],sqaure[3]);
	printf("____|___|___\n");
	printf("____|___|___\n");
	printf(" %c	 | %c | %c \n",sqaure[4],sqaure[5],sqaure[6]);
	printf("____|___|___\n");
	printf("____|___|___\n");
	printf(" %c	 | %c | %c \n",sqaure[7],sqaure[8],sqaure[9]);
	printf("	|	|	\n");
}