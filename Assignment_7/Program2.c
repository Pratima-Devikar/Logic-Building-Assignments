///////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program2.c
//  Description :    Accept amount in US dollar and return its corresponding value in Indian Currency 
//  Author :         Pratima Bhagwan Devikar
//  Date :           16/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int DollarToINR(int iNo)
{
    int iRup = 70;

    return iNo * iRup;
}

int main()
{
    int iValue = 0,iRet= 0;
    
    printf("Enter Number of USD:\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}

