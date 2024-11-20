#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
// #include "mina.h"

#define UP 65
#define DOWN 66
#define ENTER 10
#define EXIT 113
#define clear() printf("\033[H\033[J")



int main()
{
 int input;
 // int index = 0;
 int currentPos = 5;
 int EntryPos = 0;

//printf(" \t\t MenuItem1 \n\n\n\n");
//printf(" \t\t MenuItem2 \n\n\n\n");
//printf(" \t\t MenuItem3 \n\n\n\n");


    gotoxy(25, 5); // Move cursor to column 10, row 5
    textcolor(BLUE);
    printf("New");
   textcolor(WHITE);

    gotoxy(25, 10); // Move cursor to column 20, row 8
    printf("Display");

    gotoxy(25, 15); // Move cursor to column 0, row 10
    printf("Exit");


    while(1){

     char ch =0 ;
    ch = getch();

     if(ch ==27 ){
       ch = getch();
       ch = getch();

       //// enter switch here ya aziz

        switch (ch) {
        case DOWN: {
            // clear();
			// print("%d\n")
            if(currentPos == 5){

            gotoxy(25, 5);
           // setTextColor(stdout, TC_WHITE);
           printf("New");

            gotoxy(25, 10);
           // setTextColor(stdout, TC_BLUE);
            textcolor(BLUE);
            printf("Display");
             textcolor(WHITE);

            gotoxy(25, 15);
            //setTextColor(stdout, TC_WHITE);
            printf("Exit");

            currentPos = 10;
            int EntryPos = 0;

            } else if(currentPos == 10){

            gotoxy(25, 5);
           // setTextColor(stdout, TC_WHITE);
           printf("New");

            gotoxy(25, 10);
           // setTextColor(stdout, TC_WHITE);
            printf("Display");


            gotoxy(25, 15);
            //setTextColor(stdout, TC_BLUE);
            textcolor(BLUE);
            printf("Exit");

             currentPos = 15;
            }else if(currentPos = 15){

         //   printf("This is the Last menuItem press another Key");

            }
            break;
        }
//      case UP: printf("\n Up arrow : \n"); break;
         case UP: {
            clear();

            if(currentPos == 15){

            gotoxy(25, 5);
          textcolor(WHITE);
           printf("New");

            gotoxy(25, 10);
            textcolor(BLUE);
            printf("Display");


            gotoxy(25, 15);
            textcolor(WHITE);
            printf("Exit");

            currentPos = 10;

            } else if(currentPos == 10){

            gotoxy(25, 5);
           textcolor(BLUE);
           printf("New");

            gotoxy(25, 10);
            textcolor(WHITE);
            printf("Display");


            gotoxy(25, 15);
         textcolor(WHITE);
            printf("Exit");

             currentPos = 5;
            }else if(currentPos == 5){

                gotoxy(25, 5);
           textcolor(BLUE);
           printf("New");

            gotoxy(25, 10);
            textcolor(WHITE);
            printf("Display");


            gotoxy(25, 15);
         textcolor(WHITE);
            printf("Exit");

             currentPos = 5;
         //   printf("This is the first menuItem press another Key");

            }
            break;
        }case ENTER: {
            clear();

            if(currentPos == 15){

            gotoxy(25, 15);
            textcolor(WHITE);
            printf("Exit");

             EntryPos = 1;

            } else if(currentPos == 10){


            gotoxy(25, 10);
            textcolor(WHITE);
            printf("Display");

             EntryPos = 1;

            }else if(currentPos == 5){

            gotoxy(25, 10);
            textcolor(WHITE);
            printf("New");

             EntryPos = 1;
            }

           break;
        }
        case EXIT: {
            clear();

            if(EntryPos == 1){

    gotoxy(25, 5); // Move cursor to column 10, row 5
    textcolor(BLUE);
    printf("New");

    textcolor(WHITE);

    gotoxy(25, 10); // Move cursor to column 20, row 8
    printf("Display");

    gotoxy(25, 15); // Move cursor to column 0, row 10
    printf("Exit");

       EntryPos = 0 ;
            } else if(currentPos == 0){

             // printf("we already in main Screen");

            }

            break;
        }
        default:  printf("\n  \n");
    }





}

   if(ch == ENTER || ch == EXIT  ){

         switch (ch) {
           case ENTER: {
            clear();

            if(currentPos == 15){

          //  gotoxy(25, 15);
           // textcolor(WHITE);
           // printf("Exit");

              exit(0);

             EntryPos = 1;

            } else if(currentPos == 10){


            gotoxy(25, 10);
            textcolor(WHITE);
            printf("Display");

             EntryPos = 1;

            }else if(currentPos == 5){

            gotoxy(25, 10);
            textcolor(WHITE);
            printf("New");

             EntryPos = 1;
            }

           break;
        }
           case EXIT: {
            clear();
      if(EntryPos == 1){

             gotoxy(25, 5); // Move cursor to column 10, row 5
             textcolor(BLUE);
             printf("New");

            textcolor(WHITE);

            gotoxy(25, 10); // Move cursor to column 20, row 8
            printf("Display");

            gotoxy(25, 15); // Move cursor to column 0, row 10
            printf("Exit");

             EntryPos = 0 ;
            } else if(currentPos == 0){
             // printf("we already in main Screen");
                   // Close the terminal
                 exit(0);
            }
            break;
        }
        default:  printf("\n  \n");
}


           }


}
//////

     return 0;
}


//// new Function to add User








