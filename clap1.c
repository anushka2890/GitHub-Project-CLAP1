#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    int result;
    scanf("%d %d %d",&a,&b,&c);
    printf("MATHEMATICAL OPERATORS: \n");
    printf("value of a= %d and value of b= %d",a,b);
    printf("addition: %d \n",a+b);
    printf("subtraction: %d \n",a-b);
    printf("multiplication: %d \n",a*b);
    printf("division: %.2d \n",a/b);
    printf("remainder: %d \n",a%b);
    printf("RELATIONAL OPERATORS: \n");
    if (a>b)
    {
        printf("a is greater than b");
    }
    else if (a<b)
    {
        printf("a is less than b");
    }
    else if (a==b)
    {
        printf("a is equal to b");
    }
    printf("LOGICAL OPERATORS: \n");
    result= (a==b) && (c>b) && (a<c);
    printf("(a==b) && (c>b) is %d \n",result);
    result=(a==b) || (c<b);
    printf("(a==b) || (c<b) is %d \n",result);
    result= !(a!=b);
    printf("!(a!=b) is %d \n",result);
    result= !(a==b);
    printf("!(a==b) is %d \n",result);
    printf("BITWISE OPERATOR: \n");
    printf("a&b= %d \n", a&b );
    printf("a|b= %d \n", a|b );
    printf("a^b= %d \n", a^b );
    printf("complement: %d \n", ~a );
    printf("right shift: %d \n", a>>5 );
    printf("left shift: %d \n", b<<5 );
    printf("Size of int= %lu bytes \n", sizeof(a));
    return 0;
  
}