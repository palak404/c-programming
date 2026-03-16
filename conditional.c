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

/*#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the first number : " );
    scanf("%d",&a);
    printf("Enter the second number : " );
    scanf("%d",&b);
    printf("Enter the third number : " );
    scanf("%d",&c);

   if(a>b && a>c)
    {
        printf("a is greatest  ");
    }
    else if (b>a && b>c)
    {
        printf("b is greatest  " );
    }
    else if (c>a && c>b)
    {
    printf("c is greatest  " );

    }
    
}*/

//Q4. program to input three numbers and find smallest of three numbers using if-else statement

/*#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the first number : " );
    scanf("%d",&a);
    printf("Enter the second number : " );
    scanf("%d",&b);
    printf("Enter the third number : " );
    scanf("%d",&c);

   if(a<b && a<c)
    {
        printf("a is smallest  ");
    }
    else if (b<a && b<c)
    {
        printf("b is smallest  " );
    }
    else if (c<a && c<b)
    {
    printf("c is smallest  " );

    }
    
}*/

/*Q5. program to demonstrate if-else statement and 
(check whether marks are between 80 and 90) marks>80 && marks<90*/

/*#include<stdio.h>
void main()
{
    float marks;
    printf("Enter the marks : " );
    scanf("%f",&marks);
    if(marks>80 && marks<90)
    {
        printf("Marks are between 80 to 90 " );
    }
    else
    {
    printf("Marks are not between 80 to 90 " );

    }
    
}*/

/*Q6. program to demonstrate if-else statement program to demonstrate if or (check whether marks are
 equal to either 80 or 90)*/

 /*#include<stdio.h>
 void main()
 {
    float marks;
    printf("Enter the marks : " );
    scanf("%f",&marks);
    if(marks==80 || marks==90)
    {
        printf("marks are equal to either 80 or 90 " );
    }
    else{
        printf("marks are not equal to either 80 or 90 " );
    }
 }*/

 /*Q7. program to input a character and check whether it is equal to a or b using
         if statement example of OR( || ) operator . */


/*#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character : " );
    scanf("%c",&ch);
    if (ch=='a' || ch=='b')
    {
        printf("character is equal to a or b " );
    }
    else{
        printf("character is not equal to a or b " );
    }
}*/

// Q9. program to compute grade of a student based on marks using if else statement -

 /*  #include<stdio.h>
   void main()
   {
    int marks;
    printf("Enter the marks : " );
    scanf("%d",&marks);
    if(marks >= 60 && marks <= 90)
    {
    printf("A Grade");
    }
   else if(marks>=50 && marks<=60)
   {
    printf("B Grade");
   }
   else if(marks>=40 && marks<=50)
   {
    printf("C Grade");
   }
   else if(marks>=33 && marks>=40)
   {
    printf("D Grade");
   }
   else if(marks>=33 && marks<=1)
   {
    printf("Fail");
   }
}

*/

//Q10. program to check whether number entered is odd or even using if-else statement-

/*#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("The number is even ");
    }
    else{
        printf("The number is odd ");
    }
}*/

/*Q11. program to input two numbers a and b and check whether a is divisible by b or not 
using if-else statement.*/

/*#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the first number ");
    scanf("%d",&a);
 printf("Enter the seconf number ");
 scanf("%d",&b);
 if(a%b==0)
 {
    printf("a is divisible by b");
 }
 else
 {
    printf("a is not divisible by b");
 }
}*/

//Q12. program to check whether user has entered vowel or not using if-else statement-

/*#include<stdio.h>
void main()
{
    char vovel;
    printf("Enter any character : ");
    scanf("%c",&vovel);
    if(vovel=='a' || vovel=='e' || vovel=='i' || vovel =='o' || vovel=='u')
    {
        printf("charecter is an vovel ");
    }
    else{
        printf("character is not an vovel");
    }
}*/

/*Q13. program to calculate discount on a price,if price is above 1000 then
discount is 10% otherwise 5 % using if-else statement - Code*/

/*#include<stdio.h>
void main()
{
    float price,Dis,t;
    printf("Enter price : ");
    scanf("%f",&price);
    if(price>1000)
    {
        Dis=price*10/100;
        printf("Total Discount = %f",Dis);
        t= price - Dis;
        printf("Total payable payment = %f",t); 
}
else{
    Dis =  price*5/100;
    printf("Total Discount is=%f",Dis);
    t=price-Dis;
    printf("Total payable amount is =%f",t);
}

}*/


/*Q16. calculate da,hra based on basic example of if-else statement (if+ basic<=2500,hra=da=0,
if basic>=2500&&basic <4000,hra=20%,da=15% if basic>=4000&&<8000,hra=25%,da=20%,if basic>8000,
hra=30%,da=25%) .*/

#include<stdio.h>
void main()
{
    float salary,hra,da,t;
    printf("Enter the salary " : );
        scanf("%f",&salary);
        if(salary<=2500)
        {
            hra=0;
            da=0;
            printf("total salary =%f",salary);
        }
        else if(salary>=2500 && salary<4000)
        {
            hra=salary*20/100;
            da =salary* 15/100;
            printf("total hra is = %f",hra);
            printf("total da is = %f",da);
            t=salary+hra+da;
            printf("Total salary is =%f",t);
        }
        else if()

}





    






    



    
