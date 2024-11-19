
#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 4

int main()
{

int arr [ROWS][COLS] ;
int numValu = 0;

int rowSum = 0;
int rowcounter = 0;

int colavg0 = 0 ;
int colavg1 = 0 ;
int colavg2 = 0 ;
int colavg3 = 0 ;

int colCounter = 0 ;

 for(int j = 0 ; j < ROWS ; j++){
  for(int i = 0 ; i < COLS ; i++){
//  printf("Enter the Data inside array of  [%d][%d]",j,i);
//   scanf("%d",&numValu);
     int valid = 0;
     while (!valid) { // Loop until valid input is provided
                 printf("Enter the Data inside array of  [%d][%d]",j,i);
                if (scanf("%d", &numValu) == 1) { // Check if input is an integer
                    if (numValu > 0) { // Check if the integer is positive
                       // break; // Valid input, exit the loop
                         valid = 1;
                         arr[j][i]= numValu ;
                    } else {
                        printf("Error: Enter a positive integer.\n");
                    }
                } else {
                    printf("Error: Invalid input. Please enter a positive integer.\n");
                    // Clear the invalid input from the buffer
                    while (getchar() != '\n');
                }
            }

            // here out of while loop
            // here inside col        colavg , colCounter   rowSum  rowcounter


  }

  // here inside row


}





 for(int j = 0 ; j < ROWS ; j++){
  for(int i = 0 ; i < COLS +1; i++){
     // here inside col        colavg , colCounter   rowSum  rowcounter
 //  printf("arr[%d][%d] = %d\n", i, j, arr[j][i]);

           if(rowcounter < 4){
            rowSum = rowSum + arr[j][i] ;
            rowcounter = rowcounter +1 ;
            }else{
             printf("the rows %d summ is = %d \n",j,rowSum ) ;
             rowcounter = 0;
             rowSum = 0 ;
            }
   }
///// print the avg col
            if(i == 0){
            colavg0 = colavg0 + arr[j][i] ;
            }else if (i == 1){
               colavg1 = colavg1 + arr[j][i] ;
            }else if(i==2){
               colavg2 = colavg2 + arr[j][i] ;
            }else if(i==3){
                colavg3 = colavg3 + arr[j][i] ;
            }

}

 printf("the col 0 avg is = %d \n",colavg0 ) ;
 printf("the col 1 avg is = %d \n",colavg1 ) ;
 printf("the col 2 avg is = %d \n",colavg2 ) ;
 printf("the col 3 avg is = %d \n",colavg3 ) ;


   return 0;

}

/*
           if(colCounter > 4){
            colavg = colavg + numValu ;
            colCounter = colCounter +1
            }else{
             printf("the col __ avg is = %d" \n, colavg/4 )
            }


*/


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 4

int main() {
    int numValu;

    for (int j = 0; j < ROWS; j++) {
        for (int i = 0; i < COLS; i++) {
            while (1) { // Loop until valid input is provided
                printf("Enter a positive integer for array[%d][%d]: ", j, i);

                if (scanf("%d", &numValu) == 1) { // Check if input is an integer
                    if (numValu > 0) { // Check if the integer is positive
                        break; // Valid input, exit the loop
                    } else {
                        printf("Error: Enter a positive integer.\n");
                    }
                } else {
                    printf("Error: Invalid input. Please enter a positive integer.\n");
                    // Clear the invalid input from the buffer
                    while (getchar() != '\n');
                }
            }
            printf("Accepted value: %d\n", numValu); // Optionally display accepted input
        }
    }

    return 0;
}

*/

