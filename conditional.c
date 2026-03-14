//Qn1. check whether a is greater than or equal to 10 or less than 10 using if-else

/*#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number : " );
    scanf("%d",&a);
    if(a>=10)
    {
        printf("a is greatest and equal  then 10 ");
    }
    else {
        printf("a is less then 10 " );
    }
}*/

//Q2. check whether a is less than or equal to 10 or greater than 10 -

/*#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number : " );
    scanf("%d",&a);
    if(a>10)
    {
        printf("a is greatest then 10 ");
    }
    else {
        printf("a is less then 10 " );
    }
}*/

//Q3. program to input three numbers and find largest of three numbers using if-else statement


#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the first number : " );
    scanf("%d",&a);
    printf("Enter the second number : " );
    scanf("%d",&b);
    printf("Enter the third number : " );
    scanf("%d",&b);
    if(a>b && a>c)
    {
        printf("a is greatest");
    }
    if(b>a && b>c)
    {
        printf("b is greatest");
 
    }
    if(c>a && c>b)
    {
        printf("c is greatest");
    }
    

        
    

}



