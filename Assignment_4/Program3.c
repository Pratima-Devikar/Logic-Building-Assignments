///////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program3.c
//  Description :    Used to accept  number from user and display all its non factors
//  Author :         Pratima Bhagwan Devikar
//  Date :           14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        if((iNo % iCnt) != 0 )
        {
            printf("%d\n",iCnt);
            
        }

    }
    
   
}
int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}