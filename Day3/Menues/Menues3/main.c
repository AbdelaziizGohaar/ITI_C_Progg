#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
//#include "mina.h"
#define UP 65
#define DOWN 66
#define ENTER 10
#define EXIT 113

int main()
{
int input;
int currentPos = 5;

//printf(" \t\t MenuItem1 \n\n\n\n");
//printf(" \t\t MenuItem2 \n\n\n\n");
//printf(" \t\t MenuItem3 \n\n\n\n");


    gotoxy(25, 5); // Move cursor to column 10, row 5
    setTextColor(stdout, TC_BLUE);
    printf("New");

    gotoxy(25, 10); // Move cursor to column 20, row 8
    printf("Display");

    gotoxy(25, 15); // Move cursor to column 0, row 10
    printf("Exit");


    while(1){

     char ch =0 ;
    ch = getch();

     if(ch ==27){
       ch = getch();
       ch = getch();

       //// enter switch here ya aziz

        switch (ch) {
        case DOWN: {
            clear();

            if(currentPos = 5){

            gotoxy(25, 5);
            setTextColor(stdout, TC_WHITE);
           printf("New");

            gotoxy(25, 10);
            setTextColor(stdout, TC_BLUE);
            printf("Display");


            gotoxy(25, 15);
            setTextColor(stdout, TC_WHITE);
            printf("Exit");

            currentPos = 10;

            } else if(currentPos = 10){

            gotoxy(25, 5);
            setTextColor(stdout, TC_WHITE);
           printf("New");

            gotoxy(25, 10);
            setTextColor(stdout, TC_WHITE);
            printf("Display");


            gotoxy(25, 15);
            setTextColor(stdout, TC_BLUE);
            printf("Exit");

             currentPos = 15;
            }else if(currentPos = 15){

            printf("This is the Last menuItem press another Key");

            }
            break;
        }
//      case UP: printf("\n Up arrow : \n"); break;
         case UP: {
            clear();

            if(currentPos = 15){

            gotoxy(25, 5);
            setTextColor(stdout, TC_WHITE);
           printf("New");

            gotoxy(25, 10);
            setTextColor(stdout, TC_BLUE);
            printf("Display");


            gotoxy(25, 15);
            setTextColor(stdout, TC_WHITE);
            printf("Exit");

            currentPos = 10;

            } else if(currentPos = 10){

            gotoxy(25, 5);
            setTextColor(stdout, TC_BLUE);
           printf("New");

            gotoxy(25, 10);
            setTextColor(stdout, TC_WHITE);
            printf("Display");


            gotoxy(25, 15);
            setTextColor(stdout, TC_WHITE);
            printf("Exit");

             currentPos = 5;
            }else if(currentPos = 15){

            printf("This is the first menuItem press another Key");

            }
            break;
        }case ENTER: {
            clear();

            if(currentPos = 15){

            gotoxy(25, 15);
            setTextColor(stdout, TC_WHITE);
            printf("Exit");

            } else if(currentPos = 10){


            gotoxy(25, 10);
            setTextColor(stdout, TC_WHITE);
            printf("Display");


            }else if(currentPos = 5){

            gotoxy(25, 10);
            setTextColor(stdout, TC_WHITE);
            printf("New");

            }

            break;
        }
        default:  printf("\n  \n"); break;
    }





}


     //   printf("\nYou entered: %d\n", ch);
/*


     if(ch ==27){

    //    printf("\n  arrows clicked \n");
       ch = getch();
       ch = getch();

         printf("\nYou entered: %d\n", ch);
     if(ch ==UP){
         printf("\n upper arrow clicked \n");
       }else
     {
        printf("\n xxxxxxx : \n");
     }
     if(ch ==DOWN){
         printf("\n lower arrow clicked \n");
       }else
     {
        printf("\n xxxxxxx : \n");
     }

}else{
           printf("\n not = -32 \n");
}

*/
////////////////////////////


/*
       switch (ch) {
        case DOWN: {
            clear();

            gotoxy(25, 5);
            setTextColor(stdout, TC_WHITE);
             printf("New");

            gotoxy(25, 10);
            setTextColor(stdout, TC_BLUE);
            printf("Display");


            gotoxy(25, 15);
            setTextColor(stdout, TC_WHITE);
            printf("Exit");

            break;
        }
        case 'A': printf("\n Up arrow : \n"); break;
        case 'B': printf("\n down arrow : \n"); break;
         case 1: {
            printf("You selected 1.\n");
            printf("Performing operations for case 1.\n");
            int result = 1 + 1; // Example operation
            printf("Result: %d\n", result);
            break;
        }
        default:  printf("\n nooo \n"); break;
    }

*/



/*
 while (1) {

       char ch = getch();
  //   printf("\nYou entered: %c\n", ch);

  if(ch==){


  }
      setTextColor(stdout, TC_RED);
    printf("This text is red.\n");

    setTextColor(stdout, TC_GREEN);
    printf("This text is green.\n");

    setTextColor(stdout, TC_WHITE); // Reset to default
    printf("This text is white.\n");


        if (input == -1) {  // Exit condition
            printf("Exiting the loop...\n");
            break;
        }

    }
*/





    return 0;

}
