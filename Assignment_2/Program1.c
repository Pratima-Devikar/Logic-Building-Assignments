/////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program1.c
//  Description :    Used to accept one number from user and print that number of * on screen  
//  Author :         Pratima Bhagwan Devikar
//  Date :           10/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    while(iCnt < iNo)
    {
        printf("*\n");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}



