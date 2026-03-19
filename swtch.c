/*#include<stdio.h>
void main()
{
    int a,b;
    char ch;
    printf("press + sum \n press - subtract \n press * multiply \n press / devide\n press % modulus\n enter the user choice");
    scanf("%c",&ch);
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    switch (ch)
    {
    case '+':
       printf("sum of a and b is =%d",a+b);
        break;
    case '-':
       printf("subtract of a and b is =%d",a-b);
        break;
        case '*':
       printf("multiply of a and b is =%d",a*b);
        break;
        case '/':
       printf("devide of a and b is =%d",a/b);
        break;
        case '%':
       printf("modalus of a and b is =%d",a%b);
        break;
    default:
        break;
    }
}*/
//Q2 even or odd
/*#include<stdio.h>
void main()
{
    int choice,a;
     printf("press 1 even \n press 2 odd \n Enter the user choice\n");
    scanf("%d",&choice);
    printf("Enter the number : ");
    scanf("%d",&a);
    switch (choice)
    {
    case 1:
      if(a % 2==0)
      printf("The number is even");
      break;
    case 2 :

    if(a % 2 != 0)
    printf("The number is odd");
    break;

    default:
    printf("wrong choice");
}
}*/

/*#include<stdio.h>
void main()
{
    int choice;
    float length,breadth,result;

     printf("\nchoose a calculation:\n");
    printf("1. Calculate area\n");
    printf("2. calculate perimeter\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d",&choice);

   printf("Enter breadth of the rectangle : ");
    scanf("%f",&breadth);
     printf("Enter length of the rectangle : ");
    scanf("%f",&length);
    
   
    switch(choice)
    {
        case 1:
        result=length*breadth;
        printf("the area of the rectangle is =%f", result);
        break;
        case 2:
        result = 2*(length+breadth);
        printf("the perimeter of the rectangle is = %f",result);
        break;
        default:
        printf("wrong choice. Enter 1 or 2.\n");

    }
}*/

//Qn1. check whether a is greater than or equal to 10 or less than 10 using if-else

/*#include<stdio.h>
void main()
{
    int choice,a;
     printf("press 1 greater \n press 2 less \n Enter the user choice\n");
    scanf("%d",&choice);
    printf("\nEnter the first numbers : ");
    scanf("%d",&a);
    
    switch (choice)
    {
    case 1:
      if(a >= 10)
      printf("\nThe number is greater");
      break;
    case 2 :

    if(a<=10)
    printf("\nThe number is less");
    break;

    default:
    printf("wrong choice");
    }
}*/

//Q14. program to demonstrate switch-case statement example 1, displaying day of the week-

#include<stdio.h>
void main()
{
    int choice =5;
    switch(choice)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thrusay");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("wrong choice");
        
    }
}
