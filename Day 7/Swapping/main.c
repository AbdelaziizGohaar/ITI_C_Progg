#include <stdio.h>
#include <stdlib.h>

void swap_1(int *ptrx ,int *ptry );
void swap_2(int *ptrx ,int *ptry );


int main()
{
int x =20;
int y = 100;

printf("original x = %d , original y = %d \n",x,y);


swap_1(&x , &y );
printf("swap 1 x = %d , y = %d \n",x,y);

swap_2(&x , &y);
printf("sawp 2 x = %d , y = %d \n",x,y);

    return 0;
}


void swap_1(int *ptrx ,int *ptry )
{
  *ptrx = *ptrx + *ptry;
  *ptry = *ptrx - *ptry;
  *ptrx = *ptrx - *ptry;
}

/* logic 1
Step 1: Take two variables x and y.

Step 2: Store the sum of these variables in x.

Step 3: Subtract y from x and store it in y.

Step 4: Replace x with x - y.
*/

void swap_2(int *ptrx ,int *ptry )
{
  *ptrx = *ptrx * *ptry;
  *ptry = *ptrx / *ptry;
  *ptrx = *ptrx / *ptry;
}

/* logic 2
a = a * b;
b = a / b;
a = a / b;
*/









