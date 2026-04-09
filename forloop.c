//Q1. program to demonstrate for statement to display numbers from 0 to 9

/*#include<stdio.h>
void main()
{
    int i;
    for(i=0; i<=9; i++)
    {
        printf("%d\n", i);
    }
}*/

//Q2. program to demonstrate for statement to display numbers from 0 to 10

/*#include<stdio.h>
void main()
{
    int i;
    for(i=0; i<=10; i++)
    {
        printf("%d\n", i);
    }
}*/


//Q3. program to display numbers from 9 to 0 (in reverse order) using for statement-

/*#include<stdio.h>
void main()
{
    int i;
    for(i=9; i>=0; i--)
    {
        printf("%d\n", i);
    }
}*/

//Q4. program to display numbers from 10 to 0 (in reverse order) using for statement

/*#include<stdio.h>
void main()
{
    int i;
    for(i=10; i>=0; i--)
    {
        printf("%d\n", i);
    }
}*/


//Q5. program to display numbers 0 to 10 with a gap of 2 between the numbers using for statement-

/*#include<stdio.h>
void main()
{
    int i;
    for(i=0; i<=10; i += 2)
    {
        printf("%d\n",i);
    }
    
}*/

//Q6. program to display numbers 0 to 50 with a gap of 5 between the numbers using for statement

/*#include<stdio.h>
void main()
{
    int i;
    for(i=0; i<=50; i += 5)
    {
        printf("%d\n",i);
    }
}*/

//Q7. program to display numbers 50 to 1 (in reverse order) with a gap of 5 between the numbers using for statement


/*#include<stdio.h>
void main()
{
    int i;
    for(i=50; i>=1; i -= 5)
    {
        printf("%d\n",i);
    }
}*/


//Q8. program to find sum of numbers from 1 to 10 using for statement -
 
/*#include<stdio.h>
void main()
{
    int i;
    int sum=0;
    for(i=1; i<=10; i++)
    {
       sum=sum+i;
    }
   printf("%d\n",sum);
}*/

//Q9. program to find sum of even numbers from 1 to 10 using for statement

/*#include<stdio.h>
void main()
{
    int i;
    int sum=0;
    for(i=1; i<=10; i++)
    {
        if(i%2==0)
    
    {
       sum=sum+i;
    }
  
}
 printf("%d\n",sum);
}*/

//Q10. program to find sum of odd numbers from 1 to 10 using for statement -

/*#include<stdio.h>
void main()
{
    int i;
    int sum=0;
    for(i=1; i<=10; i++)
    {
        if(i%2!=0)
    
    {
       sum=sum+i;
    }
  
}
 printf("%d\n",sum);
}*/

//Q11. program to find sum of even and odd numbers from 1 to 10 statement -

/*#include<stdio.h>
void main()
{
    int i;
    int sumEven=0;
    int sumOdd=0;
    for(i=1; i<=10; i++)
    {
        if(i%2==0 )
    
    {
       sumEven=sumEven+i;
    }
    else{
        sumOdd = sumOdd+1;
    }
  
}
 printf("sum of even numbers : %d\n",sumEven);
 printf("sum of odd numbers : %d\n",sumOdd);
}*/

//Q12. program to input two numbers a and b and display numbers between them using for statement - Code

/*#include<stdio.h>
void main()
{
    int a,b,i;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    
    for(i=a+1; i<b; i++)
    {
        printf("%d",i);
    }
}*/

//Q13. program to input two numbers a and b and find sum of numbers between them using for statement -


/*#include<stdio.h>
void main()
{
    int sum=0;
    int a,b,i;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    sum = sum+1;
    for(i=a; i<b; i++)
    {
            sum = sum+1;
    }
        printf("The sum is : %d\n",sum);
    
}*/

//Q14. program to find factorial of a number using for statement - Code
 /*#include<stdio.h>
 void main()
 {
    int i, n=5, fact = 1;
    for(i=n; i>=1; i--)
    {
        fact = fact*i;
    }
    printf("factorial = %d",fact);
 }*/

 //Q15. program to find whether number entered is prime or not using for statement-

 /*#include<stdio.h>
 void main()
 {
    int i,n,f=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("It is a prime numer");
    }
    else{
        printf("It is not a prime number ");
    }
 }*/

 //Q16. program to print first 1 to 10 terms of fibonicci series using for statement -

 /*#include<stdio.h>
 void main()
 {
    int a=0,b=1,c;
    printf(" %d \n %d \n ",a,b);
    for(int i=2;i<=10;i++)
    {
        c=a+b;
        printf(" %d ",c);
        a=b;
        b=c;
    }
 }*/


 //18. program to print table of a number entered by the user using for

/*#include<stdio.h>
void main()
{
    int i,num;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d",&num);

    printf("Multiplication Table of %d :  \n", num);
    for(i=1; i<=10;i++)
    {
        printf("%d * %d = %d\n",num, i, num * i );
    }
}*/

//Q17. program to print pattern of stars using for statement (example of nested for loop) - Code


/*#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" * ");
        }
        printf(" \n ");
    }
}*/

/*#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
        printf(" %d ", j);
    } 
    printf(" \n ");
}
}*/

/*#include<stdio.h>
void main()
{
    int i,j;                                                              
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" * ",j);
        }
        printf(" \n ");
    }
}*/

//Q----------------------

/*#include<stdio.h>
void main()
{
    int i,j;                                                              
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf(" * ",j);
        }
        printf(" \n ");
    }
}*/

//Q--------------------------------------

/*#include<stdio.h>
void main()
{
    int i,j,k;
      for(i=1; i<=5; i++)
      {
        for(j=1; j<5-i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf(" * ");
        }
        printf(" \n ");
      }
}*/

//Q------------------------------------------

/*#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1; i<=5; i++)
    {
        for(j=5; j>=5; j--)
        {
            printf(" ");
        }
        for(k=1; k<=(i*2-1); k++)
        {
            printf(" * ");
        }
        printf(" \n ");
    }
}*/



//Q30 Shopping Discount

/*#include<stdio.h>
void main()
{
    int purchase,discount,total;
    printf("Enter the amount of purchase : ");
    scanf("%d", &purchase);
    if(purchase>=5000)
    {
    discount = purchase*20/100;
    printf("Total Discount is = %d",discount);
    total = purchase - discount;
    printf("\nTotal amount = %d",total);
    }
    else if(purchase>=2000)
    {
        discount = purchase*10/100;
        printf("\nTotal Discount is = %d",discount);
        total = purchase - discount;
        printf("\nTotal discount is = %d",total);
    }
    else{
        printf("\n no discount");
    }
}*/

//Qcheck  salary bonus

/*#include<stdio.h>
void main()
{
    float salary,Dis,bonus;
    printf("Enter the salary : ");
    scanf("%f",&salary);
    if(salary>=50000)
    {
        Dis = salary*20/100;
        printf("Total Dis = %f",Dis);
        bonus = salary - Dis ;
        printf("\nTotal bonus amount = %f",bonus);
    }
    else if(salary>=30000)
    {
        Dis = salary*10/100;
        printf("\nTotal Dis = %f",Dis);
        bonus = salary - Dis;
        printf("\nTotal bonus =%f",bonus);
    }
    else 
    {
        Dis = salary*5/100;
        printf("\nTotal Dis = %f",Dis);
        bonus = salary - Dis;
        printf("\nTotal bonus =%f",bonus);
    }
}*/

//Q

