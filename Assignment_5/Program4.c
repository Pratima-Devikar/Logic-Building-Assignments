//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program4.c
//  Description :    Write a program which accepts N from user and print all odd numbers up to N
//  Author :         Pratima Bhagwan Devikar
//  Date :           16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void OddDisplay(int iNo)
{

    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d   ",iCnt);
        }
        
    }
    
}
int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}