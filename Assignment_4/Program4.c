//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program4.c
//  Description :    Used to accept number from user and return summation of all its non-factors                                                                                                                
//  Author :         Pratima Bhagwan Devikar
//  Date :           14/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        if((iNo % iCnt) != 0 )
        {
            iSum = iSum + iCnt;
        }

    }
    return iSum;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);


    iRet =SumNonFact(iValue);

    printf("Summation of all its non-factors is :%d",iRet);

    return 0;
}
