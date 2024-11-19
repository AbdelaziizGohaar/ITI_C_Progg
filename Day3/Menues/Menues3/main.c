#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
//#include "mina.h"
#define UP 72
#define DOWN 80

int main()
{
int input;

//printf(" \t\t MenuItem1 \n\n\n\n");
//printf(" \t\t MenuItem2 \n\n\n\n");
//printf(" \t\t MenuItem3 \n\n\n\n");


    gotoxy(25, 5); // Move cursor to column 10, row 5
    printf("MenuItem1");

    gotoxy(25, 10); // Move cursor to column 20, row 8
    printf("MenuItem2");

    gotoxy(25, 15); // Move cursor to column 0, row 10
    printf("MenuItem3");

            char ch =0 ;
            ch = getch();
//     printf("\nYou entered: %c\n", ch);



/*

     if(ch ==-32){
        printf("\n  arrows clicked \n");
       char ch = getch();
     if(ch ==UP){
         printf("\n upper arrow clicked \n");
       }else
     {
        printf("\n xxxxxxx : \n");
     }

}else{
           printf("\n not = -32 \n");
}


*/

/*
       switch (getch()) {
        case 'A': printf("\n Up arrow : \n"); break;
        case 'B': printf("\n down arrow : \n"); break;
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
