////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program1.c
//  Description :    Write a program which accepts number from user and if number is less than 50 then
//                   print small,if it is greater than 50 and less than 100 then print medium,if it is 
//                   greater than 100 then print large 
//  Author :         Pratima Bhagwan Devikar
//  Date :           16/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo <= 50)
    {
        printf("Small");
    }
    else if((iNo > 50) && (iNo <= 100))
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }

}
int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
