//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program3.c
//  Description :    Write a program which accept number from user and print its number line
//  Author :         Pratima Bhagwan Devikar
//  Date :           16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{

    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = -iNo;iCnt <= iNo;iCnt++)
    {
        printf("%d   ",iCnt);
    }
    
}
int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}