/////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program2.c
//  Description :    Used to accept one number from user and print that number of * on screen  
//  Author :         Pratima Bhagwan Devikar
//  Date :           10/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iVal =0;
    while(iNo > iVal )
    {
        printf("*\n");
        iNo--;
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



