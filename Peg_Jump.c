/* ------------------------------------------------
  * Class: CS 141, Spring 2017.  Tues 11am lab
  * System: Windows 10, Code::Blocks
  * Program: #2, Peg Jump
  * Date: 01/30/2017
  * Author: James Iorgovan
  * TA: Moumita Samanta
  * -----------------------------------------------
  */


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void displayInformation()
{
printf("Author: James Iorgovan\n"
       "Program: #3, Pentago\n"
       "TA: Moumita Samanta, Tues 11\n"
       "Feb 8, 2017\n\n\n\n"

       "Play the two-player game of Pentago. Be the first to get 5 in a row.\n\n"

       "Pentago is played on a 6 by 6 board, divided into four 3 by 3\n"
       "quadrants.  There are two players, X and O, who alternate turns.\n"
       "The goal of each player is to get five of their pieces in a row,\n"
       "either horizontally, vertically, or diagonally.\n\n"

       "Players take turns placing one of their pieces into an empty\n"
       "space anywhere on the board, then choosing one of the four\n"
       "board quadrants to rotate 90 degrees left or right.\n\n"

       "If both players get five in a row at the same time, or the\n"
       "last move is played with no five in a row, the game is a tie.\n"
       "If a player makes five a row by placing a piece, there is no need\n"
       "to rotate a quadrant and the player wins immediately.\n\n"

       "Play online at:  https://perfect-pentago.net\n"
       "Purchase at:     www.mindtwisterusa.com\n\n"

       "For each move provide four inputs:\n"
       "row (A-F), column (1-6), quadrant (1-4), rotation direction (L or R)\n"
       "For instance input of B32R places the next piece at B3 and then\n"
       "would rotate quadrant 3 (lower-left) to the right (clockwise).\n\n"

       "At any point enter 'x' to exit the program.\n\n\n\n");
}
void main()
{
  int i = 0;                                   // Loop counter
  int player = 0;                              // Player number - 1 or 2
  int go = 0;                                  // '.' selection placement for turn
  int row = 0;                                 // Row index for a '.'
  int column = 0;                              // Column index for a '.'
  int line = 0;                                // Row or column index in checking loop
  int winner = 0;                              // The winning player
  char boardPiece[6][6] = {
                            {'.','.','.','.','.','.'},
                            {'.','.','.','.','.','.'},
                            {'.','.','.','.','.','.'},
                            {'.','.','.','.','.','.'},
                            {'.','.','.','.','.','.'},
                            {'.','.','.','.','.','.'},
                          };

void displayBoard(char boardPiece[0][0], char boardPiece[0][1], char boardPiece[0][2], char boardPiece[0][3], char boardPiece[0][4], char boardPiece[0][5],
                  char boardPiece[1][0], char boardPiece[1][1], char boardPiece[1][2], char boardPiece[1][3], char boardPiece[1][4], char boardPiece[1][5],
                  char boardPiece[2][0], char boardPiece[2][1], char boardPiece[2][2], char boardPiece[2][3], char boardPiece[2][4], char boardPiece[2][5],
                  char boardPiece[3][0], char boardPiece[3][1], char boardPiece[3][2], char boardPiece[3][3], char boardPiece[3][4], char boardPiece[3][5],
                  char boardPiece[4][0], char boardPiece[4][1], char boardPiece[4][2], char boardPiece[4][3], char boardPiece[4][4], char boardPiece[4][5],
                  char boardPiece[5][0], char boardPiece[5][1], char boardPiece[5][2], char boardPiece[5][3], char boardPiece[5][4], char boardPiece[5][5])
{
    printf("1   1 2 3 4 5 6   2\n");
    printf("    -----------        \n");
    printf("A:  %c %c %c %c %c %c  :A\n", boardPiece[0][0], boardPiece[0][1], boardPiece[0][2],
                                          boardPiece[0][3], boardPiece[0][4], boardPiece[0][5]);
    printf("B:  %c %c %c %c %c %c  :B\n", boardPiece[1][0], boardPiece[1][1], boardPiece[1][2],
                                          boardPiece[1][3], boardPiece[1][4], boardPiece[1][5]);
    printf("C:  %c %c %c %c %c %c  :C\n", boardPiece[2][0], boardPiece[2][1], boardPiece[2][2],
                                          boardPiece[2][3], boardPiece[2][4], boardPiece[2][5]);
    printf("D:  %c %c %c %c %c %c  :D\n", boardPiece[3][0], boardPiece[3][1], boardPiece[3][2],
                                          boardPiece[3][3], boardPiece[3][4], boardPiece[3][5]);
    printf("E:  %c %c %c %c %c %c  :E\n", boardPiece[4][0], boardPiece[4][1], boardPiece[4][2],
                                          boardPiece[4][3], boardPiece[4][4], boardPiece[4][5]);
    printf("F:  %c %c %c %c %c %c  :F\n", boardPiece[5][0], boardPiece[5][1], boardPiece[5][2],
                                          boardPiece[5][3], boardPiece[5][4], boardPiece[5][5]);
    printf("    -----------        \n");
    printf("3   1 2 3 4 5 6   4\n");

    player = i%2 + 1;

    do
      {
         printf("\nPlayer %d, please enter your move: ""\n", player,(player==1)?'X':'O');
         scanf("%c", &go);
         scanf("%d", &go);
        // if(go != 1-36);
         //printf("\nInvalid move, please try again.\n");

         row = --go/6;                                          // Get row index of '.' destination
         column = go%6;                                         // Get column index of '.' destination
      }while(go<0 || go>36 || boardPiece[row][column]>'36');

      boardPiece[row][column] = (player == 1) ? 'X' : 'O';      // Insert player symbol
}

    printf("\n\n1   1 2 3 4 5 6   2\n");
    printf("    -----------        \n");
    printf("A:  %c %c %c %c %c %c  :A\n", boardPiece[0][0], boardPiece[0][1], boardPiece[0][2],
                                          boardPiece[0][3], boardPiece[0][4], boardPiece[0][5]);
    printf("B:  %c %c %c %c %c %c  :B\n", boardPiece[1][0], boardPiece[1][1], boardPiece[1][2],
                                          boardPiece[1][3], boardPiece[1][4], boardPiece[1][5]);
    printf("C:  %c %c %c %c %c %c  :C\n", boardPiece[2][0], boardPiece[2][1], boardPiece[2][2],
                                          boardPiece[2][3], boardPiece[2][4], boardPiece[2][5]);
    printf("D:  %c %c %c %c %c %c  :D\n", boardPiece[3][0], boardPiece[3][1], boardPiece[3][2],
                                          boardPiece[3][3], boardPiece[3][4], boardPiece[3][5]);
    printf("E:  %c %c %c %c %c %c  :E\n", boardPiece[4][0], boardPiece[4][1], boardPiece[4][2],
                                          boardPiece[4][3], boardPiece[4][4], boardPiece[4][5]);
    printf("F:  %c %c %c %c %c %c  :F\n", boardPiece[5][0], boardPiece[5][1], boardPiece[5][2],
                                          boardPiece[5][3], boardPiece[5][4], boardPiece[5][5]);
    printf("    -----------        \n");
    printf("3   1 2 3 4 5 6   4\n");



      // Bug: works if you respectively type 1-36 but not with a letter
      //    : program ends after 1 move
}
//---------------------------------------------------------------------------------------------------------------------


