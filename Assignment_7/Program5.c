/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program5.c
//  Description :    Write a program which returns difference between Even Factorial and odd Factorial
//                   of given number 
//  Author :         Pratima Bhagwan Devikar
//  Date :           16/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEfact = 1;
    int iOfact = 1;

    if(iNo < 0)
    {
        iNo =-iNo;
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEfact = iEfact * iCnt;
        }
        if(iCnt % 2 != 0)
        {
            iOfact = iOfact * iCnt;
        }
        
    } 

    return iEfact - iOfact;
}
int main()
{
    int iValue = 0,iRet= 0;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}

