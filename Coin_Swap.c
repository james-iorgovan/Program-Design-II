// coinswap.c
//    Illustrate a user interface for the coinswap game.
// Given a "board" of 5 squares, with 3 "heads" coins on
// the left, and 3 "tails" coins on the right.  The objective
// is to swap the location of the pieces.  On each move
// "heads" can move to the right or jump a "tails"
// piece.  "Tails" can move to the left, or jump a "heads"
// piece.
//
/* Running the game will look something like the following:

      1 2 3 4 5
      H H . T T
      Enter where you move from and to: 2 3

      1 2 3 4 5
      H . H T T
      Enter where you move from and to: 2 3
*/

#include <stdio.h>


void displayBoard( char p1, char p2, char p3, char p4, char p5)
{
    // Display board
    printf("1 2 3 4 5 \n");
    printf("%c %c %c %c %c\n", p1, p2, p3, p4, p5);
}

//-------------------------------------------------------
// Set the characterToPlace at the destination piece
void setPiece(  char characterToPlace, char destination,
                char *p1, char *p2, char *p3, char *p4, char *p5)
{
    switch (destination) {
        case '1': *p1 = characterToPlace; break;
        case '2': *p2 = characterToPlace; break;
        case '3': *p3 = characterToPlace; break;
        case '4': *p4 = characterToPlace; break;
        case '5': *p5 = characterToPlace; break;
    }
}

//-------------------------------------------------------
// Get the character at position and return it
char getCharAt( char position, char p1, char p2, char p3, char p4, char p5)
{
    switch (position) {
        case '1': return p1; break;
        case '2': return p2; break;
        case '3': return p3; break;
        case '4': return p4; break;
        case '5': return p5; break;
    }
}

void makeMove( char from, char to,   // where we move from and to
               char *p1, char *p2, char *p3, char *p4, char *p5)
{
    // Call the function to change where we are moving to
    char sourceCharacter = getCharAt(from,*p1,*p2,*p3,*p4,*p5);
    setPiece( sourceCharacter, to, &*p1, &*p2, &*p3, &*p4, &*p5);
    // Call the function to change where we are coming from
    setPiece( '.', from, p1, p2, p3, p4, p5);
}

// If we're done, return 1
// else if we are not done, return 0, which will exit the main loop
int done( p1,p2,p3,p4,p5)
{
   if( p1=='T' && p2=='T' && p3=='.' &&
       p4=='H' && p5=='H') {
        return 1;   // 1 stands for TRUE
    }
    else {
        return 0;
    }
}


int main()
{
    // Declare and initialize the board pieces
    char p1,p2,p3,p4,p5;   // The board pieces
    p1=p2 = 'H';           // Initial piece values
    p3 = '.';
    p4=p5 = 'T';
    char from, to;         // Where we move from and to

    displayBoard(  p1, p2, p3, p4, p5);
    system("color 1f");

    while( 1) {
        // Prompt for move values
        printf("Enter where you move from and to: ");
        scanf(" %c %c", &from, &to);

        makeMove( from, to, &p1,&p2,&p3,&p4,&p5);

        displayBoard(  p1, p2, p3, p4, p5);
    }


    printf("Done with program");
    return 0;
}//end main()

/*
    if( from=='1' && to=='2'){*p2=*p1;*p1='.'; }
    else if( from=='2' && to=='3'){*p3=*p2;*p2='.'; }
    else if( from=='3' && to=='4'){*p4=*p3;*p3='.'; }
    else if( from=='4' && to=='5'){*p5=*p4;*p4='.'; }
    // Single moves going right to left
    else if( from=='5' && to=='4'){*p4=*p5;*p5='.'; }
    else if( from=='4' && to=='3'){*p3=*p4;*p4='.'; }
    else if( from=='3' && to=='2'){*p2=*p3;*p3='.'; }
    else if( from=='2' && to=='1'){*p1=*p2;*p2='.'; }
    // Jump moves going left to right
    else if( from=='1' && to=='3'){*p3=*p1;*p1='.'; }
    else if( from=='2' && to=='4'){*p4=*p2;*p2='.'; }
    else if( from=='3' && to=='5'){*p5=*p3;*p3='.'; }
    // Jump moves going right to left
    else if( from=='5' && to=='3'){*p3=*p5;*p3='.'; }
    else if( from=='4' && to=='2'){*p2=*p4;*p4='.'; }
    else if( from=='3' && to=='1'){*p1=*p3;*p3='.'; }
    else printf("Invalid move. \n");
    */
