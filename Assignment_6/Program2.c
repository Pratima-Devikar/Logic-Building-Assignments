////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program2.c
//  Description :    Write a program which accepts single digit number from user and print it into word                   
//  Author :         Pratima Bhagwan Devikar
//  Date :           16/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<string.h>

void Display(int iNo)
{
    if(iNo / 10 != 0)
    {
        printf("Invalid Number");
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        printf("Zero");
    }
    else if(iNo == 1)
    {
        printf("One");
    }
    else if(iNo == 2)
    {
        printf("Two");
    }
    else if(iNo == 3)
    {
        printf("Three");
    }
    else if(iNo == 4)
    {
        printf("Four");
    }
    else if(iNo == 5)
    {
        printf("Five");
    }
    else if(iNo == 6)
    {
        printf("Six");
    }
    else if(iNo == 7)
    {
        printf("Seven");
    }
    else if(iNo == 8)
    {
        printf("Eight");
    }
    else if(iNo == 9)
    {
        printf("Nine");
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