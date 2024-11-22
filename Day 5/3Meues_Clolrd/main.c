#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
// #include "mina.h"

#define RIGHT 67
#define LEFT 68

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

void enterNewEmp_void(struct Employee emp[], int currentIndex,int storedIds [] ,int  idCounts);
void showMenuAfterExitNew();
 void displayEmp_Void(struct Employee emp[]);
// void addNewUser_void(struct Employee e[]);
void modify_void();
void showOptionsOFModifiedScreen_Void();

int main()
{
 int input;
 // int index = 0;
 int currentPos = 5;
 int EntryPos = 0;
 struct Employee emp[EMP_SIZE]={0};
 int currentEmpIndex = 0;
 int storedIds [EMP_SIZE] = {0};
 int idCounts = 0 ;

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

    gotoxy(25, 20); // Move cursor to column 0, row 10
    printf("Modify");

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

            gotoxy(25, 20); // Move cursor to column 0, row 10
            printf("Modify");

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

            textcolor(WHITE);
            gotoxy(25, 20); // Move cursor to column 0, row 10
            printf("Modify");


             currentPos = 15;
            }else if(currentPos == 15){

            gotoxy(25, 5);
           // setTextColor(stdout, TC_WHITE);
           printf("New");

            gotoxy(25, 10);
           // setTextColor(stdout, TC_WHITE);
            printf("Display");


            gotoxy(25, 15);
            //setTextColor(stdout, TC_BLUE);
            textcolor(WHITE);
            printf("Exit");

            textcolor(BLUE);
            gotoxy(25, 20); // Move cursor to column 0, row 10
            printf("Modify");


             currentPos = 20;
            }
            else if(currentPos = 20){

         //   printf("This is the Last menuItem press another Key");

            }
            break;
        }
//      case UP: printf("\n Up arrow : \n"); break;
         case UP: {
            clear();

         if(currentPos == 20){

            gotoxy(25, 5);
          textcolor(WHITE);
           printf("New");

            gotoxy(25, 10);
            textcolor(WHITE);
            printf("Display");


            gotoxy(25, 15);
            textcolor(BLUE);
            printf("Exit");

            textcolor(WHITE);
            gotoxy(25, 20); // Move cursor to column 0, row 10
            printf("Modify");


            currentPos = 15;

            } else
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


            textcolor(WHITE);
            gotoxy(25, 20); // Move cursor to column 0, row 10
            printf("Modify");


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


            textcolor(WHITE);
            gotoxy(25, 20); // Move cursor to column 0, row 10
            printf("Modify");


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


            textcolor(WHITE);
            gotoxy(25, 20); // Move cursor to column 0, row 10
            printf("Modify");


             currentPos = 5;
         //   printf("This is the first menuItem press another Key");

            }
            break;
        }
        default:  printf("\n  \n");
    }

}

   if(ch == ENTER || ch == EXIT  )
   {

         switch (ch) {
           case ENTER: {
            clear();

          if(currentPos == 20)  ///////////////////////////////////////////////////////////// Modify Method
          {
           modify_void() ;
           EntryPos = 1;
          }else
            if(currentPos == 15){ /// EXIT
              exit(0);
             EntryPos = 1;
            } else if(currentPos == 10){ /// Display

            displayEmp_Void(emp); //////////////////////////////////////// Method Display empls ////////////////////////////////////////

             EntryPos = 1;

            }else if(currentPos == 5){   /// New

             EntryPos = 1;

             enterNewEmp_void(emp,currentEmpIndex,storedIds, idCounts);  ////////////////////////////////////////////////  method of enter employees /////////////////////////////////////////////////////////////////

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

            gotoxy(25, 20); // Move cursor to column 0, row 10
            printf("Modify");


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

    gotoxy(25, 20); // Move cursor to column 0, row 10
    printf("Modify");


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



void enterNewEmp_void(struct Employee emp[], int currentIndex,int storedIds [], int idCounts  ) {
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

                  /*
                    while(checkIds_int(emp[currentIndex].id , storedIds,currentEmpIndex) == 0)
                    {
                     printf("this ID Is taken Before Enter Another  Employee ID: ");
                    scanf("%d", &emp[currentIndex].id);

                    }
                    */
                     // Check if the ID is unique
                    while (checkIds_int(emp[currentIndex].id, storedIds, idCounts) == 0) {
                        printf("This ID is already taken. Enter another Employee ID: ");
                        scanf("%d", &emp[currentIndex].id);
                        getchar(); // Consume the newline character left by scanf()
                    }

                    // Add the ID to storedIds
                    storedIds[idCounts] = emp[currentIndex].id;
                    (idCounts)++;


                    ///////////////////////////////////////////////////////////////

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
            printf("Invalid . Please answer with 'y' or 'n'.\n");
        }

            getch();
    }
}



int checkIds_int(int id, int storedIds[], int size) {
    for (int i = 0; i < size; i++) {
        if (id == storedIds[i])
        {
            return 0; // ID found
        }
    }
    return 1; // ID not found
}



 void modify_void()
 {
 int empId = 0 ;

     textcolor(WHITE);
     clear();
     printf(" \n Enter  ID You want to Modify: \n");
     scanf("%d", &empId);

     printf(" \n Choose what you wants : \n");
     showOptionsOFModifiedScreen_Void ();



 }



 void showOptionsOFModifiedScreen_Void ()
 {
 char ch = 0 ;
int  currentModifyPos = 5 ;
 int EntryPos = 0;

clear();
    gotoxy(5, 7); // Move cursor new
    textcolor(BLUE);
    printf("Change Name");
   textcolor(WHITE);

    gotoxy(20, 7); // Move cursor Dis
    printf("Change salary");

    gotoxy(35, 7); // Move cursor to exxit
    printf("Delete");

 while(1)
 {


    getch();
   ch = getch();

     if(ch ==27 ){
       ch = getch();
       ch = getch();

       //// enter switch here ya aziz

     switch (ch) {
        case RIGHT: {
            // clear();
			// print("%d\n")
            if(currentModifyPos == 5){

            gotoxy(5, 7);
           printf("Change Name");

            gotoxy(20, 7);
            textcolor(BLUE);
            printf("Change Salary");
             textcolor(WHITE);

            gotoxy(35, 7);
            printf("Delete");

            currentModifyPos = 20;
            int EntryPos = 0;

            } else if(currentModifyPos == 20){

            textcolor(WHITE);
            gotoxy(5, 7);
            printf("Change Name");

            gotoxy(20, 7);
            textcolor(WHITE);
            printf("Change Salary");

             textcolor(BLUE);
            gotoxy(35, 7);
            printf("Delete");

             currentModifyPos = 35;
            }
            else if(currentModifyPos = 35)
            {
         //   printf("This is the Last menuItem press another Key");
            }
            break;
        }
         case LEFT: {
            clear();

         if(currentModifyPos == 35){

            textcolor(WHITE);
            gotoxy(5, 7);
            printf("Change Name");

            gotoxy(20, 7);
            textcolor(BLUE);
            printf("Change Salary");

             textcolor(WHITE);
            gotoxy(35, 7);
            printf("Delete");


            currentModifyPos = 20;

            } else
            if(currentModifyPos == 20){

            textcolor(BLUE);
            gotoxy(5, 7);
            printf("Change Name");

            gotoxy(20, 7);
            textcolor(WHITE);
            printf("Change Salary");

             textcolor(WHITE);
            gotoxy(35, 7);
            printf("Delete");


            currentModifyPos = 5;

            } else if(currentModifyPos == 5){

            textcolor(BLUE);
            gotoxy(5, 7);
            printf("Change Name");

            gotoxy(20, 7);
            textcolor(WHITE);
            printf("Change Salary");

             textcolor(WHITE);
            gotoxy(35, 7);
            printf("Delete");


             currentModifyPos = 5;
            }
            break;
        }
        default:  printf("\n  \n");
    }
 /// end of switch

  } // end of if clause of right and Down



     if(ch == ENTER || ch == EXIT  )
   {

         switch (ch) {
           case ENTER: {
            clear();

          if(currentModifyPos == 35) /// EXIT
          {

             EntryPos = 1;
          } else
         if(currentModifyPos == 20) /// Display
         {


             EntryPos = 1;
          }else
          if(currentModifyPos == 5)  /// New
          {

             EntryPos = 1;
             clear();
             showMenuAfterExitNew();  /// show meues again
          }

           break;
        }
           case EXIT: {
            clear();
      if(EntryPos == 1)
      {
             showMenuAfterExitNew();  /// show meues again

             EntryPos = 0 ;
            } else if(currentModifyPos == 0){
             // printf("we already in main Screen");
                   // Close the terminal
                 exit(0);
            }
            break;
        }
        default:  printf("\n  \n");
 }

        } //// end of if clause of exit and enter

 } // end of while

} /// end of Function



/*


 int checkIds_int(int id , int storedIds [EMP_SIZE][EMP_SIZE]  )
 {
    for (int i = 0 ; i < storedIds.lenght-1 ; i++)
    {
       if(id == storedIds[i])
       {
         return 0 ;

       }else
       {
         return 1;
       }

    }

 }







/*

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





