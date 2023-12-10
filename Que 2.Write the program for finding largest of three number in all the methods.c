#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter numbers:");
    scanf("\n%d %d %d",&a,&b,&c);
    
    // GREATEST OF 3 USING TERNARY OPERATOR
    max = (a>b) ? ( (a>c) ? a : c ) : ( (b>c) ? b : c );
    printf("Greatest of tree numbers using ternary operator: %d\n",max);
    
    // GREATEST OF 3 NUMBERS USING IF ELSE
    if (a>b && a>c)
    {
      max = a;
    }
    else if (b>a && b>c)
    {
      max = b;
    }
    else
    {
      max = c;
    }
    printf("Greatest of tree numbers using if else: %d\n",max);

    // GREATEST OF 3 NUMBERS USING NESTED IF
    if (a>b)
    {
        if (a>c)
        {
        max = a;
        }
        else
        {
        max = c;
        }
    }
    else
    {
        if (b>c)
        {
        max = b;
        }
        else
        {
        max = c;
        }
    }
    printf("Greatest of tree numbers using nested if: %d\n",max);
}