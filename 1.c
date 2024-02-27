/*Construct a program to read the numbers until -1 is encountered. Find the average of
positive numbers and negative numbers entered by user.*/
#include <stdio.h>

int main ()
{
    float sum = 0  , avg , count=0;
    int in ;
    
    while (1)
    {
        printf("\nEnter a number  : ");
        scanf("%d",&in);
        if (in==-1)
        {
            break;
        }
        else
        {
            sum+=in;
            count++;
        }
    }
    avg=sum/count;

    printf("\nThe average is : %f",avg);
    
    
    return 0;
}