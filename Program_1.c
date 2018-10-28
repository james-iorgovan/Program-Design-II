#include <stdio.h>
#include <stdlib.h>

int getNumber();
int reverseNumber(int userInput);
int subtractNumbers(int userInput, int reverse);
int addNumber(int userInput, int reverse);

int main() {

    //(0 points) Display the identifying information and the instructions.  Each of these should be a separate function, with no parameters and no return value.

    int userInput, reverse, total, newTotal;
    char charInput;

     //(5 points) Prompt for and read in user input.  This should be a separate function that returns an int.

    userInput = getNumber();
    printf("Yo number is %d\n\n", userInput);

      //(10 points) Write a reverseNumber() function to separate out the individual digits, make it into a new reversed number, and display it.  This should be a separate function that "catches" the original number and returns the reversed number.

    reverse = reverseNumber( userInput );
    printf("The reverse is %d\n", reverse);



    //(5 points) Do the subtraction and store the answer in a variable.  Be sure to display the largest number first when doing the subtraction.  You will need to use an "if" statement for this. Display the result.

    total = subtractNumbers(userInput, reverse);
    printf("total: %d\n", total);



    //(5 points) Prompt to continue and get user input.  This should be a function that returns a char.

    printf("Press 'Y' to continue or 'X' to exit... ");
    scanf(" %c", &charInput);

    if (charInput == 'x') {
    printf("Thank you for playing!\n");
        return total;

    }

    //(5 points) Again reverse the number and this time do the addition.  Again use the reverseNumber() function that you wrote above.

    reverse = reverseNumber( total );
    if (reverse / 100 == 0) {
        reverse = reverse * 10;
    }

    newTotal = addNumber(total, reverse);
    printf("Your new number is %d", newTotal);


    //(25 points) Test all possible numbers between 1..1000.  Display which values do not work, and the total of how many of those numbers do not work for this trick, either because they have duplicate digits or because the result of the computation does not equal 1089.  You will need to use a loop for this.  Your program must compute these values, so you can't just print out the results from the program shown above.


}



int getNumber() {
    int userInput;
    printf("    Welcome to the number guessing game!\n");
    printf("If you concentrate, sometimes you can connect to the electrons in the computer!\n");
    printf("Let's try it.  Think of a three digit number. (To make it harder, make the digits\n");
    printf("all different from each other). Type in your number: ");
    scanf("%d", &userInput);

    return userInput;

}



int reverseNumber(int userInput) {
    int n = userInput, r;
    int left = n;
    int rev = 0;
    while(left>0)

    {

        r = left % 10;
        rev = rev * 10 + r;
        left = left / 10;  //left = Math.floor(left / 10);

    }

    return rev;

}





int subtractNumbers(int userInput, int reverse) {

    int total;
    if ( userInput > reverse) {
        printf("    %d (The original number)\n", userInput);
        printf("-   %d (The reversed number)\n",reverse);
        total = userInput - reverse;
        printf("=======\n");
        printf("    %d\n", total);

    }   else {
        printf("    %d (The reversed number)\n",reverse);
        printf("-   %d (The original number)\n", userInput);
        total = reverse - userInput;
        printf("=======\n");
        printf("    %d\n\n", total);

    }

    return total;

}

int addNumber(int userInput, int reverse) {
    int total;
    if ( userInput > reverse) {
        printf("    %d (The original number)\n", userInput);
        printf("+   %d (The reversed number)\n",reverse);
        total = userInput + reverse;
        printf("=======\n");
        printf("    %d\n", total);

    }   else {

        printf("    %d (The reversed number)\n",reverse);
        printf("+   %d (The original number)\n", userInput);
        total = reverse + userInput;
        printf("=======\n");
        printf("    %d\n\n", total);

    }

    return total;

}
