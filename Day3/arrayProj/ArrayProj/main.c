#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int main()
{
    int arr[SIZE] ={1};
    int row = 0;
    int col = 0;
    int i =0 ;
    int j = 0;


    for(int i=0; i<SIZE; i++)
    {
        printf("Enter element %d to the array: ",(i+1));
        scanf("%d", &arr[i]);
    }
    printf("Enter number of rows: ");
    scanf ("%d",&row);
    if(SIZE % row !=0 || row > SIZE){
        printf("Invalid input it again: ");
        return 1;
    }
    col = SIZE /row;
    for (i=0; i<row; i++){
        for (j=0; j<col; j++){
            printf("%d\t",arr[i*col +j]);
        }
        printf("\n");
    }

    return 0;
}
