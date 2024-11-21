#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
// #include "mina.h"

#define UP 65
#define DOWN 66
#define ENTER 10
#define EXIT 113
#define EMP_SIZE 10
#define clear() printf("\033[H\033[J")

struct BD {
 unsigned char  Day ;
 unsigned char Month ;
 int year ;
 };


 struct Employee {
 int id ;
 char name[20] ;
 int salary ;
 int age ;
 struct BD b ;
 };

void enterNewEmp_void(struct Employee emp[],int currentIndex) ;
void showMenuAfterExitNew();
 void displayEmp_Void(struct Employee emp[]);
// void addNewUser_void(struct Employee e[]);

int main()
{
 int input;
 // int index = 0;
 int currentPos = 5;
 int EntryPos = 0;
 struct Employee emp[EMP_SIZE]={0};
 int currentEmpIndex = 0;

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
        }
        default:  printf("\n  \n");
    }

}

   if(ch == ENTER || ch == EXIT  ){

         switch (ch) {
           case ENTER: {
            clear();

            if(currentPos == 15){ /// EXIT

              exit(0);
             EntryPos = 1;
            } else if(currentPos == 10){ /// Display

          //  gotoxy(25, 10);
          //  textcolor(WHITE);
          //  printf("Display");

            displayEmp_Void(emp); //////////////////////////////////////// Method Display empls ////////////////////////////////////////

             EntryPos = 1;

            }else if(currentPos == 5){   /// New

             EntryPos = 1;

             enterNewEmp_void(emp,currentEmpIndex);  ////////////////////////////////////////////////  method of enter employees /////////////////////////////////////////////////////////////////

             clear();

             showMenuAfterExitNew();  /// show meues again
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
void enterNewEmp_void2(struct Employee emp[],int currentIndex){
 char decistion = 'y';
 // struct Employee emp[EMP_SIZE]={0};
 int empId = 0;
 char empName = 0;
 int empAge = 0 ;
// int currentIndex = 0;

  while(decistion == 'y')
 {
    clear();
    printf(" \n Do You Want to enter New User ?  y/n   \n ");

        decistion = getch();

      if(decistion == 'Y' || decistion == 'y'  )
    {
          if (currentIndex < EMP_SIZE)
       {
          if(emp[currentIndex].id == 0 )
          {

            printf("Enter the Employe ID  \n ");
            scanf("%d",&emp[currentIndex].id);

           printf("Enter the Employe Name  \n ");
           scanf("%s",&emp[currentIndex].name);
             getch();

             printf("Enter the Employe Salary  \n ");
            scanf("%d",&emp[currentIndex].salary);

          }else
             {
                for(int i = 0 ; i < EMP_SIZE ; i++)
              {
                if(emp[i].id == 0)
               {
                 currentIndex = i ;
                 i = EMP_SIZE ;
                }
               }
              } // else end
                currentIndex= currentIndex + 1  ;
          }

        //decistion = 'Y' ;
     } // decisition = y
     else if(decistion == 'N' || decistion == 'n'  )
     {
      //  printf("We are in the No Section  \n ");
        decistion = 'n' ;
     }
     else
     {
     printf("error please answer with y/n");
     };

    getch();
  } //end of while loop


} // end of Function



void showMenuAfterExitNew()
 {

    gotoxy(25, 5); // Move cursor new
    textcolor(BLUE);
    printf("New");
   textcolor(WHITE);

    gotoxy(25, 10); // Move cursor Dis
    printf("Display");

    gotoxy(25, 15); // Move cursor to exxit
    printf("Exit");

 }




 void displayEmp_Void(struct Employee emp[])
 {
 clear();
int i = 0 ;

  while(emp[i].id != 0  )
  {
    printf("Employee %d id = %d \t",i,emp[i].id);
    printf("Employee %d name  = %s \t",i,emp[i].name);
    printf("Employee %d salary  = %d \n",i,emp[i].salary);
      i++;
  }

 }



void enterNewEmp_void(struct Employee emp[], int currentIndex) {
    char decision = 'y';

    while (decision == 'y')
    {
        clear(); // Clear the screen if required.
        printf(" \n Do you want to enter a new user? (y/n): \n");

        decision = getch();

        if (decision == 'y' || decision == 'Y') {
            if (currentIndex < EMP_SIZE) {

                while (currentIndex < EMP_SIZE && emp[currentIndex].id != 0) {
                    currentIndex++;
                }

                if (currentIndex < EMP_SIZE) {
                    printf("Enter the Employee ID: ");
                    scanf("%d", &emp[currentIndex].id);

                    printf("Enter the Employee Name: ");
                    scanf("%s", emp[currentIndex].name); // No need for `&` with char arrays.

                    printf("Enter the Employee Salary: ");
                    scanf("%d", &emp[currentIndex].salary);


                    // Move to the next index for the next employee.
                    currentIndex++;
                } else {
                    printf("Employee list is full.\n");
                    decision = 'n'; // Exit the loop since no more entries can be made.
                }
            }
        } else if (decision == 'n' || decision == 'N')
        {
          decision = 'n'; // Exit the loop since no more entries can be made.
        } else {
            printf("Invalid input. Please answer with 'y' or 'n'.\n");
        }

            getch();
    }
}





/*
 void displayEmp_Void_2(struct Employee emp[])
 {
 clear();
 int i = 0 ;

  for (i = 0; i < EMP_SIZE -1 ; i++) {
        gotoxy(5, 5 + i);
        textcolor(WHITE);
        printf("%s\n", emp[i].name);  // Print the employee's name
    }
 }

*/


/*
// void addNewUser_void(Employee e)
void addNewUser_void(struct Employee e[])
 {

     printf("Enter the Employe ID  \n ");
     scanf("%d",&e.id);

     printf("Enter the Employe Name  \n ");
      scanf("%c",e.name);

     printf("Enter the Employe age  \n ");
           scanf("%d",e.age);

      printf("Enter the Employe Salary  \n ");
           scanf("%d",e.salary);

      printf("Enter the Employe Birth day  \n ");
           scanf("%d",e.b.Day);

      printf("Enter the Employe Birth month  \n ");
           scanf("%d",e.b.Month);

      printf("Enter the Employe Birth year  \n ");
           scanf("%d",e.b.year);

 }

*/





