///////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program4.c
//  Description :    Write a program to find odd factorial of given number  
//  Author :         Pratima Bhagwan Devikar
//  Date :           16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo =-iNo;
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }
        
    } 

    return iFact;
}
int main()
{
    int iValue = 0,iRet= 0;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}

