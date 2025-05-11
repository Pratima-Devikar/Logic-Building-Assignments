/////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program5.c
//  Description :    Used to accept one number from user and print that number of * on screen  
//  Author :         Pratima Bhagwan Devikar
//  Date :           10/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("* \n");
    }
}
int main()
{
    int iValue = 0;
    

    printf("Enter Number \n");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;
}
