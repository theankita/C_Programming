#include <stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iCnt = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            iCnt = iCnt * i;
        }
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is: %d\n", iRet);

    return 0;
}
