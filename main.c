simple calculator
by lemuna junior
on feb,2022
mit licence
C89complier
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variables declaration
    char name[100]
    int n1,n2,sum,diff,product;
    float quot;
    printf("simple calculator\n");
    //capture input
    gets(name);
    printf("Enter two integers:");
    scanf("%d%d",&n1,n2);
    //computations
    sum = n1 + n2;
    diff = n1 - n2;
    product = n1 * n2;
    quot = (float)n1/n2
    //outputs
    printf("Hey %$, here is your results:\n",name);
    printf("%d +  %d = %d\n",n1,n2,sum);
    printf("%d - %d = %d\n",n1,n2,diff);
    printf("%d * %d = %d\n",n1,n2,product);
    printf("%d \ %d = %f\n",n1,n2,quot);
    return 0;
}
