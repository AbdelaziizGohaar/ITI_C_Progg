#include <stdio.h>
#include <stdlib.h>
#include "conio.h"


#define RIGHT 67
#define LEFT 68
#define ENTER 10
#define CLEAR() printf("\033[H\033[J")

#define BACKSPACE 127
#define INSERT 50
#define HOME 72
#define END 70

#define DELETE 51

int main()
{
  char lineEitor [40]={0};
    char *ptrHead = NULL;
    char *ptrTail = NULL;
    char *ptrCurrent = NULL;

int array_size;
array_size = sizeof(lineEitor) / sizeof(char);


  ptrHead = lineEitor;
  ptrTail = &lineEitor[39];
  ptrCurrent = lineEitor ;

 while(1)
 {

   char ch =0 ;
    ch = getch();

     if(ch ==27 ){ /// extendend Char
       ch = getch();
       ch = getch();

       if(ch == LEFT)
       {
          if(ptrCurrent == ptrHead)
          {

          }else
          {
            ptrCurrent = ptrCurrent -1 ;
          }

         for(int i = 0 ; i < array_size ; i++)
         {
            if(ptrCurrent == &lineEitor[i])
            {
              gotoxy(i+4, 7);
              textcolor(BLUE);
              printf("%c", lineEitor[i]);
            }else{

               gotoxy(i+4, 7); // Move cursor to column 10, row 5
              textcolor(WHITE);
              printf("%c", lineEitor[i]);

            } //end of else statments of colors
         } // end of for loop
       } // end of left arrow
       else if(ch == RIGHT)
       {
         if(ptrCurrent == ptrTail)
          {

          }else
          {
             ptrCurrent = ptrCurrent +1 ;
          }

         for(int i = 0 ; i < array_size ; i++)
         {
            if(ptrCurrent == &lineEitor[i])
            {
              gotoxy(i+4, 7);
              textcolor(BLUE);
              printf("%c", lineEitor[i]);
            }else{

               gotoxy(i+4, 7); // Move cursor to column 10, row 5
              textcolor(WHITE);
              printf("%c", lineEitor[i]);

            } //end of else statments of colors
         } // end of for loop

       } // end of Rght arroe

       else if(ch == DELETE)
       {
         // delete next char and then clear screen and draw array again in page
             char x=0;
             x = getch();

         ptrCurrent = ptrCurrent +1 ;
          *ptrCurrent = NULL;

          if (ptrCurrent < ptrTail)
          {
            char *temp = ptrCurrent; // Save the current pointer
             // Shift all elements to the left from ptrCurrent to ptrTail
               while (temp < ptrTail)
               {
                *temp = *(temp + 1); // Copy the next element to the current position
                  temp++;              // Move to the next position
                }
            } // end of swaaping

            CLEAR();
            /// print data of array on screen again

        for(int i = 0 ; i < array_size ; i++)
         {
            if(ptrCurrent == &lineEitor[i])
            {
              gotoxy(i+4, 7);
              textcolor(BLUE);
              printf("%c", lineEitor[i]);
            }else{

               gotoxy(i+4, 7); // Move cursor to column 10, row 5
              textcolor(WHITE);
              printf("%c", lineEitor[i]);

            } //end of else statments of colors
         } // end of for loop

        } // end of Delete

         else if (ch == HOME)
         {
         ptrCurrent = ptrHead;

         for(int i = 0 ; i < array_size ; i++)
         {
            if(ptrCurrent == &lineEitor[i])
            {
              gotoxy(i+4, 7);
              textcolor(BLUE);
              printf("%c", lineEitor[i]);
            }else{

               gotoxy(i+4, 7); // Move cursor to column 10, row 5
              textcolor(WHITE);
              printf("%c", lineEitor[i]);

            } //end of else statments of colors
         } // end of for loop

       } // end of home

       else if(ch == END)
       {
         ptrCurrent = ptrTail;

         for(int i = 0 ; i < array_size ; i++)
         {
            if(ptrCurrent == &lineEitor[i])
            {
              gotoxy(i+4, 7);
              textcolor(BLUE);
              printf("%c", lineEitor[i]);
            }else{

               gotoxy(i+4, 7); // Move cursor to column 10, row 5
              textcolor(WHITE);
              printf("%c", lineEitor[i]);

            } //end of else statments of colors
         } // end of for loop

       } // end of the End section


       }/// END OF EXTENDED CHAR
       else  /// BEGIN NORMAL CHAR
        {

        if (ch == BACKSPACE) // delete the previous chars
        {
         // delete previous char and then clear screen and draw array again in page
         ptrCurrent = ptrCurrent -1 ;
          *ptrCurrent = NULL;

          if (ptrCurrent < ptrTail)
          {
            char *temp = ptrCurrent; // Save the current pointer
             // Shift all elements to the left from ptrCurrent to ptrTail
               while (temp < ptrTail)
               {
                *temp = *(temp + 1); // Copy the next element to the current position
                  temp++;              // Move to the next position
                }
            } // end of swaaping

            CLEAR();
            /// print data of array on screen again

        for(int i = 0 ; i < array_size ; i++)
         {
            if(ptrCurrent == &lineEitor[i])
            {
              gotoxy(i+4, 7);
              textcolor(BLUE);
              printf("%c", lineEitor[i]);
            }else{

               gotoxy(i+4, 7); // Move cursor to column 10, row 5
              textcolor(WHITE);
              printf("%c", lineEitor[i]);

            } //end of else statments of colors
         } // end of for loop

        }else {
        /// populate this char in array then clear screen and draw again

         *ptrCurrent = ch;

          CLEAR();

         for(int i = 0 ; i < array_size ; i++)
         {
            if(ptrCurrent == &lineEitor[i])
            {
              gotoxy(i+4, 7);
              textcolor(BLUE);
              printf("%c", lineEitor[i]);
            }else{

               gotoxy(i+4, 7);
              textcolor(WHITE);
              printf("%c", lineEitor[i]);

            } //end of else statments of colors

         } // end of for loop

         if(ptrCurrent == ptrTail)
         {

         }else
         {
           ptrCurrent++;      // Move to the next position
         }
        } // end of else od adding chars to screen

        } ///  end of else of normal Char
 } ///end of while



    return 0;
}
