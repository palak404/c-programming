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

/*#include<stdio.h>
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
}*/

//Q15. program to demonstrate switch-case example 2,displaying month of the year-

/*#include<stdio.h>
void main()
{
    int choice =8;
    switch(choice)
    {
        case 1:
        printf("january");
        break;
        case 2:
        printf("Feburary");
        break;
        case 3:
        printf("March");
        break;
        case 4:
        printf("April");
        break;
        case 5:
        printf("May");
        break;
        case 6:
        printf("June");
        break;
        case 7:
        printf("July");
        break;
        case 8:
        printf("August");
        break;
        case 9:
        printf("September");
        break;
        case 10:
        printf("Octover");
        break;
        case 11:
        printf("November");
        break;
        case 12:
        printf("December");
        break;
        default :
        printf("wrong choice");
        
    }
}*/

//Q4. program to input three numbers and find smallest of three numbers using switch statement-



/*#include<stdio.h>
void main()
{

    int a,b,c,choice;
    printf("press 1 find the three greater \n press  2 find the three less\n enter the user choice");
     scanf("%d",&choice);
    printf("enter the three integer data");
    scanf("%d%d%d",&a,&b,&c);
   switch (choice)
   {
   case 1:
      if(a>b && a>c)
      printf("a is greater then b and c");
      else if(b>a && b>c)
      printf("b is greater then a and c");
      else if(c>a && c>b)
      printf("c is greater then a and c");
      else 
      printf("invalid input");
    break;
    case 2:
    if(a<b && a<c)
      printf("a is less then b and c");
      else if(b<a && b<c)
      printf("b is less then a and c");
      else if(c<a && c<b)
      printf("c is less then a and c");
      else 
      printf("invalid input");
      break;
   
   default:
   printf("Does not match your choice");
    break;
   }
}*/

/*Q5. program to demonstrate switch statement and (check whether marks are
     between 80 and 90) marks>80 && marks<90*/

     /*#include<stdio.h>
     void main()
     {
        int choice;
        printf("press 1 marks are between 80 & 90  \n press 2 marks are not between 80 & 90 \n Enter the user choice:");
        scanf("%d",&choice);
        float marks;
        printf("Enter the marks : ");
        scanf("%f",&marks);
        switch(choice)
        {
            case 1:
            if(marks>=80 && marks<=90)
            printf("marks are between 80 and 90");
            else
             printf("marks are not between 80 and 90");
            break;
            case 2:
            if(marks<80 || marks>90)
            printf("marks are not between 80 and 90");
            else
            printf("Actually,marks are between 80 and 90");
            break;
            default:
            printf("not matched");
        }
     }*/

//Q7. program to input a character and check whether it is equal to a or b using switch statement example of OR( || ) operator .
   
/*#include<stdio.h>
void main()
{
    char ch;
    char choice;                                                wrong answer
     printf("enter the user choice ");
     scanf("%c",&choice);
  
     switch (choice)
     {
     case 'a':
       printf("enter the character ");
     scanf("%c",&ch);
        if(ch=='a' || ch=='b')
        printf("character are equal to a and b");
        else
        printf("character is not equal to a and b");
        break;
    
     default:
     printf("does not esixt user choice");
        break;
     }
}*/


//Q20. program to convert fahrenheit temp to celsius and vice versa using switch statement-

/*#include<stdio.h>
void main()
{
    int choice;
    float temp,convertedTemp;
    printf("Temperature conversion :/n");
    printf("Fahrenheit to celsius :/n");
    printf("Celsius to fahrenheit :/n");
    printf("Enter your choice (1 or 2):\n ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter temperature in Fahrenheit\n: ");
        scanf("%d",&temp);
        convertedTemp = (temp-32)*5/9;
        printf("%f  Fahrenheit is %f Celsius\n",temp,convertedTemp);
        break;

        case 2:
        printf("Enter temperature in Celsius\n: ");
        scanf("%d",&temp);
        convertedTemp = (temp*9/5)+32;
        printf("%f  Celsius is %f Fahrenheit\n",temp,convertedTemp);
        break;
        
        default:
        printf("Invalid choice");
    }
}*/

//21. program to input a character and check whether it is a vowel or not using switch statement-code

/*#include<stdio.h>
void main()
{
    int choice;
    printf("Enter user choice:");
    scanf("%d",&choice);
    char ch;
    printf("Enter any character:\n");
    scanf("%c",&ch);
    

    switch(choice)
    {                                                                         wrong
        case 1:
        if(ch=='a' || ch == 'e' || ch=='i' || ch == 'o' || ch == 'u')
        printf(%c is vovel\n",ch);
        else
        printf("%c is not vovel\n",ch);

 
        default:
        printf("Invalid entry\n");
    }
        }*/