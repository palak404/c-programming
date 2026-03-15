//Q1. program to display hello world on the output screen

/*#include<stdio.h>
void main()
{
    char message[100];
    printf("Enter the message = " );
    scanf("%s",&message);

    printf("\nDisplay the message = %s",message);
}*/ 


//Q3. program to input an integer (or number) and display its value

/*#include<stdio.h>
void main()
{
    int a;
    printf("Enter the integer no. = ");
    scanf("%d",&a);

    printf("Display an integer value=%d",a);
}*/ 


//Q4. program to input two numbers or integers and display their values -

/*#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the first integer no. = ");
    scanf("%d",&a);

    printf("Enter the second integer no.= ");
    scanf("%d",&b);

    printf("Display first integer no.=%d",a);
    printf("\nDisplay second integer no.=%d",b);

}*/

//Q5. program to input three numbers and display their values -

/*#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the first integer no. = ");
    scanf("%d",&a);

    printf("Enter the second integer no.= ");
    scanf("%d",&b);

    printf("Enter the third integer no. = ");
    scanf("%d",&c);

    printf("Display first integer no.=%d",a);
    printf("\nDisplay second integer no.=%d",b);
    printf("\nDisplay third integer no.=%d",c);

}*/

//Q6. program to input two numbers and find their sum - C

/*#include<stdio.h>
void main()
{
    int a,b,sum;
    

    printf("Enter the first no. = ");
    scanf("%d",&a);

    printf("Enter the second no. = ");
    scanf("%d",&b);
    

    printf("Display first integer value = %d",a);
    printf("\nDisplay second integer value = %d",b);

    sum = a+b;
printf("\nDisplay sum of two integer no. = %d",sum);

}*/

//Q7. program to input three numbers and find sum of three numbers -

/*#include<stdio.h>
void main()
{
    int a,b,c,sum;

    printf("Enter the first integer no. = ");
    scanf("%d",&a);
    printf("Enter the second no. = ");
    scanf("%d",&b);
    printf("Enter the third no. = ");
    scanf("%d",&c);

    printf("Display the first integer value = %d",a);
    printf("\nDisplay the second integer value = %d",b);
    printf("\nDisplay the third integer value = %d",c);

    sum = a+b+c;
        printf("\nDisplay the sum of two integer numbers = %d",sum);

}*/

//Q8. program to input two numbers and find the difference between them -

/*#include<stdio.h>
void main()
{
    int a,b,difference;

    printf("Enter the first integer no. = ");
    scanf("%d",&a);
    printf("Enter the second integer no. = ");
    scanf("%d",&b);

    printf("Display the first integer value = %d",a);
    printf("\nDisplay the second integer value = %d",b);

    difference = a-b;
    printf("\nDisplay the difference between two integers = %d",difference);
}*/

//Q9. program to input two numbers and find their product -

/*#include<stdio.h>
void main()
{
    int a,b,product;

    printf("Enter the first integer no. = ");
    scanf("%d",&a);
    printf("Enter the second integer no. = ");
    scanf("%d",&b);

        printf("Display the first integer value = %d",a);
        printf("\nDisplay the second integer value = %d",b);


    product = a*b;
    printf("\nDisplay the product between two integers = %d",product);
}*/

//Q10. program to input two numbers and display their quotient (division) -

/*#include<stdio.h>
void main()
{
    int a,b,quotient;

    printf("Enter the first integer no. = ");
    scanf("%d",&a);
    printf("Enter the second integer no. = ");
    scanf("%d",&b);

        printf("Display the first integer value = %d",a);
        printf("\nDisplay the second integer value = %d",b);


    quotient = a/b;
    printf("\nDisplay the product between two integers = %d",quotient);
}*/

//Q11. program to input two numbers and find their remainder (division) -

/*#include<stdio.h>
void main()
{
    int a,b,remainder;

    printf("Enter the first integer no. = ");
    scanf("%d",&a);
    printf("Enter the second integer no. = ");
    scanf("%d",&b);

        printf("Display the first integer value = %d",a);
        printf("\nDisplay the second integer value = %d",b);


    remainder = a%b;
    printf("\nDisplay the product between two integers = %d",remainder);
}*/


//Q12. program to enter a character and display its value -

/*#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character = ");
    scanf("%c",&ch);

    printf("\nDisplay the value of character = %c",ch);
}*/


//Q13. program to input a float value (number with decimal point ) -

/*#include<stdio.h>
void main()
{
    float a;
    printf("Enter a float value = " );
    scanf("%f",&a);

    printf("\nDisplay a float value = %f", a);

}*/

//Q14. program to add two decimal point values -

/*#include<stdio.h>
void main()
{
    float a,b,sum;
    printf("Enter the first float no. = ");
    scanf("%f",&a);
    printf("Enter the second float no. = " );
    scanf("%f",&b);

    printf("\nDisplay the first float value = %f ",a);
    printf("\nDisplay the second float value = %f ",b);

    sum = a+b;
    printf("\nDisplay the sum of two float no. = %f",sum);

}*/

//Q15.program to input two decimal point numbers and display difference between them-

/*#include<stdio.h>
void main()
{
    float a,b,difference;
    printf("Enter the first float no. = ");
    scanf("%f",&a);
    printf("Enter the second float no. = " );
    scanf("%f",&b);

    printf("\nDisplay the first float value = %f ",a);
    printf("\nDisplay the second float value = %f ",b);

    difference = a-b;
    printf("\nDisplay the difference of two float no. = %f",difference);

}*/

//Q16. program to input two float (decimal point) values and find their product -

/*#include<stdio.h>
void main()
{
    float a,b,product;
    printf("Enter the first float no. = ");
    scanf("%f",&a);
    printf("Enter the second float no. = " );
    scanf("%f",&b);

    printf("\nDisplay the first float value = %f ",a);
    printf("\nDisplay the second float value = %f ",b);

    product = a*b;
    printf("\nDisplay the product of two float no. = %f",product);

}*/

//Q17. program to input two float (decimal point ) values and find their quotient-

/*#include<stdio.h>
void main()
{
    float a,b,quotient;
    printf("Enter the first float no. = ");
    scanf("%f",&a);
    printf("Enter the second float no. = " );
    scanf("%f",&b);

    printf("\nDisplay the first float value = %f ",a);
    printf("\nDisplay the second float value = %f ",b);

    quotient = a/b;
    printf("\nDisplay the quotient of two float no. = %f",quotient);

}*/

/*Q18. program to input principal, rate of interest and time and compute simple
interest - si=p*r*t/100*/

/*#include<stdio.h>
void main()
{
    float p,r,si;
     int t;
    printf("Enter the no. of p  = " );
    scanf("%f",&p);
    printf("Enter the no. of r = " );
    scanf("%f",&r);
    printf("Enter the no. of t = " );
    scanf("%d",&t);

    printf("\nDisplay the value of p = %f",p);
    printf("\nDisplay the value of r = %f",r);
    printf("\nDisplay the value of t = %d",t);

    si = p*r*t/100;
    printf("\ncompute the simple intrest = %f",si);
}*/

//Q19. program to input length and breadth of rectangle and find area of rectangle-

/*#include<stdio.h>
void main()
{
    float length,breadth,area;

    printf("Enter the no. of length = ");
    scanf("%f",&length);
    printf("Enter the no. of breadth = ");
    scanf("%f",&breadth);

    printf("\nDisplay the value of length = %f",length );
    printf("\nDisplay the value of breadth = %f",breadth );

    area = length*breadth;
    printf("\nDisplay the value of area for rectangle = %f",area);

}*/

//Q20 . program to input length and breadth of rectangle and compute perimeter of rectangle

/*#include<stdio.h>
void main()
{
    float length,breadth,perimeter;

    printf("Enter the no. of length = ");
    scanf("%f",&length);
    printf("Enter the no. of breadth = ");
    scanf("%f",&breadth);

    printf("\nDisplay the value of length = %f",length );
    printf("\nDisplay the value of breadth = %f",breadth );

    perimeter = 2*(length+breadth);
    printf("\nDisplay the value of perimeter for rectangle = %f",perimeter);

}*/

//Q21 . program to input side of square and compute area of square -

/*#include<stdio.h>
void main()
{
    float a,area;
    printf("Enter the side (a) of square = " );
    scanf("%f",&a);

    printf("\nDisplay the value of a = %f",a);
     area= (a*a);
    printf("\nDisplay the value of area = %f",area);
}*/

//Q22 . program to input side of square and find perimeter of square -

/*#include<stdio.h>
void main()
{
    float a,perimeter;
    printf("Enter the side (a) of square = " );
    scanf("%f",&a);

    printf("\nDisplay the value of a = %f",a);
     perimeter= 4*a;
    printf("\nDisplay the value of area = %f",perimeter);
}*/

//Q23 . program to input base and height of right angled triangle and find area of right angled triangle -

/*#include<stdio.h>
void main()
{
    float base,height,area;

    printf("Enter the base of right angled triangle = " );
    scanf("%f",&base);
    printf("Enter the height of right angled triangle = " );
    scanf("%f",&height);
    printf("\nDisplay the base  of right angled triangle = %f",base);
    printf("\nDisplay the height  of right angled triangle = %f",height);

    area = 0.5*(base*height);
    printf("\nDisplay the area  of right angled triangle = %f",area);

}*/

//Q24 . program to input radius of circle and find area of circle -

/*#include<stdio.h>
void main()
{
    float r,area;
    printf("Enter the radius of circle = " );
    scanf("%f",&r);

    printf("\nDisplay the value of r = %f",r);
     area=(3.14*r*r);
    printf("\nDisplay the value of area = %f",area);
}*/

//Q25 . program to input radius of circle and find circumference of circle -

/*#include<stdio.h>
void main()
{
    float r,circumference;
    printf("Enter the radius of circle = " );
    scanf("%f",&r);

    printf("\nDisplay the value of r = %f",r);
     circumference=(2*3.14*r);
    printf("\nDisplay the value of circumference of circule = %f",circumference);
}*/

//Q26 . program to demons tor , i-- is same as i=i-1 -

/*#include<stdio.h>
void main()
{
 int i=5;
 i=i-1;
 printf("after decerement is =%d",i);
}

*/

//Q28 . program to assign value 10 to a, initializing variable a -

/*#include<stdio.h>
void main()
{
 int a=10;
printf("display a value assign is =%d",a);
}

*/


//Q29 . program to demonstrate (+=) operator, a+=2 is same as a=a+2 -

/*#include<stdio.h>
void main()
{
 int a=24;
 a+=2;
 printf("display after 2 value increment =%d",a);
}*/

//Q30 . program to demonstrate (-=) operator, a-=2 is same as a=a-2 -

/*#include<stdio.h>
void main()
{
 int a=24;
 a-=2;
 printf("display after 2 value decrement =%d",a);
}*/

//Q31 . program to demonstrate (*=) operator, a*=2 is same as a=a*2 -
 
/*#include<stdio.h>
void main()
{
 int a=24;
 a*=2;
 printf("display after 2 value product =%d",a);
}*/

//Q32 . program to demonstrate (/=) operator, a/=2 is same as a=a/2 -

/*#include<stdio.h>
void main()
{
 int a=24;
 a/=2;
 printf("display after 2 value divide =%d",a);
}*/

//Q33 . program to demonstrate (%=) operator, a%=2 is same as a=a%2 -

/*#include<stdio.h>
void main()
{
 int a=24;
 a%=2;
 printf("display after 2 value modolus =%d",a);
}*/

