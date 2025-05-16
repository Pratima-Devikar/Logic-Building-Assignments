////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program4.c
//  Description :    Write a program which accepts number from user and display its Table 
//  Author :         Pratima Bhagwan Devikar
//  Date :           16/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Table(int iNo)
{
   int iCnt = 0;
    int iMul = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt =1;iCnt <=10 ;iCnt ++)
    {
        iMul = iNo * iCnt;
        printf("%d  ",iMul);
    }

}
int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}