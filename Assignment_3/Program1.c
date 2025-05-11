///////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program1.c
//  Description :    Used to accept one number from user and print that number of even numbers on screen 
//  Author :         Pratima Bhagwan Devikar
//  Date :           10/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void PrintEven(int iNo)
{
    
    if(iNo <= 0)
    {
        return;
    }
    
    int iCnt = 1;
    int iEven = 2;

    while(iCnt <= iNo)
    {
        printf("%d ",iEven);
        iEven =iEven+2;
        iCnt++;
    }
    printf("\n");

}
int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}



