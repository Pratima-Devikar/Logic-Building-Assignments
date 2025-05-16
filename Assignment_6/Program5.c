///////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program5.c
//  Description :    Write a program which accepts number from user and display its Table in reverse order 
//  Author :         Pratima Bhagwan Devikar
//  Date :           16/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void TableRev(int iNo)
{
   int iCnt = 0;
    int iMul = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10;iCnt >=1 ;iCnt --)
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

    TableRev(iValue);

    return 0;
}