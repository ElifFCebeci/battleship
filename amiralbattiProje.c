#include <stdio.h>
#include <stdlib.h>
//Is the total number of ships
#define shipcount 4


//Is the symbol of the ships placed in the shipPlacement function
char shipsymbol = 's';



//Asks the player for the board size
void userInput(int *boardsize) {
	printf("\n       WELCOME THE GAME!!\n\n\n");
    printf("Please enter the gameboard size: ");
    scanf("%d", boardsize);
    
	
}


//It initializes game boards according to the received board size
void makingArray(char board[][27], int boardsize) {
    for (int i = 1; i <= boardsize; i++) {
        for (int a = 1; a <= boardsize; a++) {
            board[i][a] = '*';
        }
    }
}


//It prints game boards according to makingArray function and the receive board size
void printArray(char board[][27], int boardsize) {
    printf("   ");
    for (int i = 1; i <= boardsize; i++) {
        printf("%2d ", i);
    }
    printf("\n");

    for (int i = 1; i <= boardsize; i++) {
        printf("%2d ", i);
        for (int a = 1; a <= boardsize; a++) {
            printf(" %c ", board[i][a]);
        }
        printf("\n");
    }
}



//It is a function that allows players to place their ships
void shipPlacement(char board[][27], int boardsize) {
    int lin, col, lin1, col1;
    int p=1;
    //Allows placement of ships according to the number of ships
    while(p<=shipcount){
	
	if (p==1){
	// "x" allows the same ship to be placed again in case of incorrect placements
    for(int x=1;x<2;x++){
	
        printf("Enter the Carrier's coordinate!!\n");
        	printf("(There should be 5 units.)\n");
        	printf("(Warning: The row or column value must be the same in the entered coordinates example(initial(1 1),final(1 5).))\n");
        	//Prompts the player to enter the ship placement coordinates
        	 //This process is the same for other ships
            printf("Enter initial coordinate:\n");
            scanf("%d%d",&lin, &col);
             printf("Enter final coordinate:\n");
             scanf("%d%d",&lin1, &col1);
             //If the line coordinates are the same that allows placement of ships depending on ship column length and game board size
            //This process is the same for other ships
            if (abs(col1 - col) == 4 && lin == lin1 && col > 0 && col1 <= boardsize && lin > 0 && lin <= boardsize) {
            	// temp replaces the smaller column coordinate and allows the ship to be placed on the board until temp equals the larger coordinate
            	//This process is the same for other ships
            	int temp = (col1 > col) ? col : col1 ;
            	if(temp==col){
				while (temp <= col1) {
            if (board[lin][temp] == '*') {
                board[lin][temp] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}}
				else{
				while (temp <= col) {
            if (board[lin][temp] == '*') {
                board[lin][temp] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}
					}
                }
                //If the column coordinates are the same that allows placement of ships depending on ship line length and game board size
                //This process is the same for other ships
             else if (abs(lin1 - lin) == 4 && col == col1 && col > 0 && col <= boardsize && lin > 0 && lin1 <= boardsize) {
             	// temp replaces the smaller line coordinate and allows the ship to be placed on the board until temp equals the larger coordinate
            	//This process is the same for other ships
                int temp = (lin1 > lin) ? lin : lin1 ;
            	if(temp==lin){
				while (temp <= lin1) {
            if (board[temp][col] == '*') {
                board[temp][col] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}}
				else{
				while (temp <= lin) {
            if (board[temp][col] == '*') {
                board[temp][col] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}
					}
            } else {
                printf("Invalid coordinates or ship placement, try again.\n");
                x--;
            }}p++;//Shows the current state of the board after each ship placed
			printArray(board,boardsize);}
            
            else if(p==2){
			
            for(int x=1;x<2;x++){
			
         printf("Enter the Battleship's coordinate!!\n");
            printf("There should be 4 units.\n");
            printf("(Warning: The row or column value must be the same in the entered coordinates example(initial(1 1),final(1 4).).))\n");
             printf("Enter initial coordinate:\n");
            scanf("%d%d",&lin, &col);
             printf("Enter final coordinate:\n");
             scanf("%d%d",&lin1, &col1);

            if (abs(col1 - col) == 3 && lin == lin1 && col > 0 && col1 <= boardsize && lin > 0 && lin <= boardsize) {
                int temp = (col1 > col) ? col : col1 ;
            	if(temp==col){
				while (temp <= col1) {
            if (board[lin][temp] == '*') {
                board[lin][temp] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}}
				else{
				while (temp <= col) {
            if (board[lin][temp] == '*') {
                board[lin][temp] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}
					}
            }
			 else if (abs(lin1 - lin) == 3 && col == col1 && col > 0 && col <= boardsize && lin > 0 && lin1 <= boardsize) {
                int temp = (lin1 > lin) ? lin : lin1 ;
            	if(temp==lin){
				while (temp <= lin1) {
            if (board[temp][col] == '*') {
                board[temp][col] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}}
				else{
				while (temp <= lin) {
            if (board[temp][col] == '*') {
                board[temp][col] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}
					} }else {
                printf("Invalid coordinates or ship placement, try again.\n");
                
            x--;}}p++;
			printArray(board,boardsize);}
		
			else if(p==3){
			
            for(int x=1;x<2;x++){
			
         printf("Enter the Submarine's coordinate!!\n");
            printf("There should be 3 units.\n"); 
            printf("(Warning: The row or column value must be the same in the entered coordinates example(initial(1 1),final(1 3).).))\n");
             printf("Enter initial coordinate:\n");
            scanf("%d%d",&lin, &col);
             printf("Enter final coordinate:\n");
             scanf("%d%d",&lin1, &col1);

            if (abs(col1 - col) == 2 && lin == lin1 && col > 0 && col1 <= boardsize && lin > 0 && lin <= boardsize) {
               int temp = (col1 > col) ? col : col1 ;
            	if(temp==col){
				while (temp <= col1) {
            if (board[lin][temp] == '*') {
                board[lin][temp] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}}
				else{
				while (temp <= col) {
            if (board[lin][temp] == '*') {
                board[lin][temp] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}
					}
                 }
             else if (abs(lin1 - lin) == 2 && col == col1 && col > 0 && col <= boardsize && lin > 0 && lin1 <= boardsize) {
                int temp = (lin1 > lin) ? lin : lin1 ;
            	if(temp==lin){
				while (temp <= lin1) {
            if (board[temp][col] == '*') {
                board[temp][col] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}}
				else{
				while (temp <= lin) {
            if (board[temp][col] == '*') {
                board[temp][col] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}
					}
            } else {
                printf("Invalid coordinates or ship placement, try again.\n");
                x--;
            }}p++;
			printArray(board,boardsize);}
            else {
			
           for(int x=1;x<2;x++){
			
         printf("Enter the Destroyer's coordinate!!\n");
            printf("There should be 2 units./n");
            printf("(Warning: The row or column value must be the same in the entered coordinates example(initial(1 1),final(1 2).).))\n");
             printf("Enter initial coordinate:\n");
            scanf("%d%d",&lin, &col);
             printf("Enter final coordinate:\n");
             scanf("%d%d",&lin1, &col1);

            if (abs(col1 - col) == 1 && lin == lin1 && col > 0 && col1 <= boardsize && lin > 0 && lin <= boardsize) {
               int temp = (col1 > col) ? col : col1 ;
            	if(temp==col){
				while (temp <= col1) {
            if (board[lin][temp] == '*') {
                board[lin][temp] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}}
				else{
				while (temp <= col) {
            if (board[lin][temp] == '*') {
                board[lin][temp] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}
					}
            } else if (abs(lin1 - lin) == 1 && col == col1 && col > 0 && col <= boardsize && lin > 0 && lin1 <= boardsize) {
                int temp = (lin1 > lin) ? lin : lin1 ;
            	if(temp==lin){
				while (temp <= lin1) {
            if (board[temp][col] == '*') {
                board[temp][col] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}}
				else{
				while (temp <= lin) {
            if (board[temp][col] == '*') {
                board[temp][col] = shipsymbol;
                temp++;
            }
                    else {
                        printf("Invalid coordinates or ship placement, try again.\n");
                        x--;
                        break;
                    }}
					}
            } else {
                printf("Invalid coordinates, try again.\n");
                x--;
            }}p++;}}
         
}
//It is a counter function that counts how many shots players have made.
int Boardcounter(char board1[][27],int boardsize){
	int counter=0;
	 for (int i = 1; i <= boardsize; i++) {
        for (int j = 1; j <= boardsize; j++) {
            if (board1[i][j] == 'x'|| board1[i][j]=='O') {
                counter++;
            }
        }
    }
    //The counter is updated after each shot and printed to the screen
    printf("                                                         Counter:%d\n",counter);
    return counter;
}

//It is the function that allows players to shoot.
void hit(char board[][27], char board1[][27], int boardsize) {
    int row, col;
    int f = 0;

    while (f < 2) {
    	//Prompts the player to enter the shooting coordinates
        printf("Enter the coordinates (example 1 2):\n");
        scanf("%2d%2d", &row, &col);
        //Verify the accuracy of the entered coordinates
        if (row > 0 && row <= boardsize && col > 0 && col <= boardsize) {
        	//Prevents making two shots at the same location
            if (board1[row][col] == 'x' || board1[row][col] == 'O') {
                printf("You've already shot at these coordinates. Try again.\n");
                f--;
                //Shows the current state of the board after each shot, along with the shot counter printed on the screen
                Boardcounter(board1,boardsize);
                printArray(board1, boardsize);
              //Notifies if a hit is made on the other player's board where there is a ship
            } else if (board[row][col] == 's') {
                printf("Congratulations! The ship was hit.\n");
                board1[row][col] = 'x';
                Boardcounter(board1,boardsize);
                printArray(board1, boardsize);
            } else {
                printf("No hits.\n");
                board1[row][col] = 'O';
                Boardcounter(board1,boardsize);
                printArray(board1, boardsize);
            }
        } else {
            printf("Invalid coordinates, try again.\n");
            f--;
        }

        f++;
    }
}

//It is a function that counts the shots hitting a ship.
int countHits(char board[][27], int boardsize) {
    int hits = 0;
    for (int i = 1; i <= boardsize; i++) {
        for (int j = 1; j <= boardsize; j++) {
            if (board[i][j] == 'x') {
                hits++;
            }
        }
    }
    return hits;
}


int main() {
	//The size of the game board is requested from the players.
    int boardsize;
    userInput(&boardsize);
    if (boardsize < 5 ||boardsize>26){
    	printf("invalid valuable try again.\n");
		userInput(&boardsize);}

    char player2attack[27][27];
    char player1attack[27][27];
    char player1board[27][27];
    char player2board[27][27];
    int totalPlayer1Hits = 0;
    int totalPlayer2Hits = 0;

    makingArray(player1attack, boardsize);
    makingArray(player2attack, boardsize);
    makingArray(player1board, boardsize);
    makingArray(player2board, boardsize);

    printf("Player1 place ships\n");
    printArray(player1board, boardsize);
    shipPlacement(player1board, boardsize);

    system("cls");

    printf("Player2 place ships\n");
    printArray(player2board, boardsize);
    shipPlacement(player2board, boardsize);

    system("cls");

   

    while (1) {
        printf("Player1 turn:\n");
        Boardcounter(player1attack,boardsize);
        printArray(player1attack, boardsize);
        hit(player2board, player1attack, boardsize);
        system("cls");

        totalPlayer1Hits = countHits(player1attack, boardsize);
        if (totalPlayer1Hits == 14) {
            printf("Player1 won!!\n");
            break;
        }

        printf("Player2 turn:\n");
        Boardcounter(player2attack,boardsize);
        printArray(player2attack, boardsize);
        hit(player1board, player2attack, boardsize);
        system("cls");

        totalPlayer2Hits = countHits(player2attack, boardsize);
        if (totalPlayer2Hits == 14) {
            printf("Player2 won!!\n");
            break;
        }
    }

    printf("\nGAME OVER!!\n");

    return 0;
}
