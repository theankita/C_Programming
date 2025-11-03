#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    int iCnt = 0;
    iCnt = iNo%2;
    if (iCnt == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
    printf("Given Number Is Even %d", iValue);
    }
    else
    {
    printf("Given Number Is Odd %d", iValue);
    }

    return 0;
}