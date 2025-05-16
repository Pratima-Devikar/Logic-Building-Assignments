//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program5.c
//  Description :    Write a program which accepts N and print first 5 multiples of N
//  Author :         Pratima Bhagwan Devikar
//  Date :           16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void MultipleDisplay(int iNo)
{
    
    int iCnt = 0;
    int iMul = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMul = iCnt * iNo;
        printf("%d  ",iMul);
        
    }
    
}
int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}