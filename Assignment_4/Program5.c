//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :      Program5.c
//  Description :    Used to accept number from user and return differnce between summation  of all its 
//                   factors and non-factors                                                                                                                
//  Author :         Pratima Bhagwan Devikar
//  Date :           14/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    
    int iCnt = 0;
    int iFact = 0;
    int iNFact = 0;
    

    if(iNo < 0)
    {
        iNo =- iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2);iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            iFact = iFact + iCnt;
        }
        
    }
    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        if((iNo % iCnt) != 0 )
        {
            iNFact = iNFact + iCnt;
        }
        
    }
    
    return iFact - iNFact;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet =FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}
