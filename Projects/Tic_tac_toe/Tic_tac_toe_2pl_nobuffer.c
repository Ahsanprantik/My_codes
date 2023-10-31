/*	A simple Tic Tac Toe game.	*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char matrix[3][3];
int n_pos[3][3] = {
	{7, 8, 9},
	{4, 5, 6},
	{1, 2, 3}
};

char check(void);
void init_matrix(void);
void get_player_move(char sign);
void disp_matrix(void);

int main(void)
{
	char done;

	printf("This is the game of Tic Tac Toe.\n");
	printf("You will be playing against the computer.\n");

	done = ' ';

	init_matrix();
	do{
		printf("\n\n\nX's turn\n\n");
		disp_matrix();
		get_player_move('X');
		done = check();	/*	see if winner	*/
		if(done!=' ')	break;	/*	win	*/
		printf("O's turn\n");
		disp_matrix();
		get_player_move('O');
		done = check();	/*	see if winner	*/
	}	while(done==' ');
	if(done=='X')	printf("'X' won!\n");
	else if(done=='O') printf("'O' won!!!!\n");
	else if(done=='D')	printf("Draw\n");
	disp_matrix();	/*	show final positions	*/
	printf("\n");

	return 0;
}

/*	Initialize the matrix.	*/
void init_matrix(void)
{
	int i, j;

	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
			matrix[i][j] = ' ';
}

/*	Get a player's move.	*/
void get_player_move(char sign)
{
	int i, j, n;

	n = getch() - '0';
	
	for(i=0; i<3; i++)	{
		for(j=0; j<2; j++)
			if(n_pos[i][j]==n)	break;
		if(n_pos[i][j]==n)	break;
	}	/*	translate numpad input to 0 based index	*/

	if(matrix[i][j]!=' ')	{
		printf("Invalid move, try again.\n");
		disp_matrix();
		get_player_move(sign);	/*	recursion	*/
	}
	else matrix[i][j] = sign;
}

/*	Display the matrix on the screen.	*/
void disp_matrix(void)
{
	int t;

	printf("\n");
	for(t=0; t<3; t++)	{
		printf(" %c | %c | %c\n",
			matrix[t][0], matrix[t][1], matrix[t][2]);
		if(t!=2)	printf("---|---|---\n");
	}
	printf("\n");
}

/*	See if there is a winner.	*/
char check(void)
{
	int i, j;

	for(i=0; i<3; i++)	/*	check rows	*/
		if(matrix[i][0]==matrix[i][1] &&
			matrix[i][1]==matrix[i][2])	return matrix[i][0];

	for(i=0; i<3; i++)	/*	check columns	*/
		if(matrix[0][i]==matrix[1][i] &&
			matrix[1][i]==matrix[2][i])	return matrix[0][i];

	/*	test diagonals	*/
	if(matrix[0][0]==matrix[1][1] &&
		matrix[1][1]==matrix[2][2])	return matrix[0][0];
	if(matrix[0][2]==matrix[1][1] &&
		matrix[1][1]==matrix[2][0])	return matrix[0][2];

	for(i=0; i<3; i++)	{
		for(j=0; j<3; j++)
			if(matrix[i][j]==' ')	break;
		if(matrix[i][j]==' ')	break;
	}

	if(i*j==9)	return 'D';

	return ' ';
}