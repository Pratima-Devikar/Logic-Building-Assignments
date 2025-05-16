///////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program1.c
//  Description :    Write a program which accepts number from user and display below Pattern 
//  Author :         Pratima Bhagwan Devikar
//  Date :           16/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <=iNo ;iCnt ++)
    {
        printf("*   ");

    }
    for(iCnt = 1;iCnt <=iNo ;iCnt ++)
    {
        printf("#   ");

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
