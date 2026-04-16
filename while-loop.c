/*#include<stdio.h>
void main()
{
    int i=1;
    
    while (i<=10)
    {
        printf("%d\n",i);
        i++;
   }
     }*/

/* #include<stdio.h>
 int main(){
     int i = 1 , sum = 0 ;
     while(i<=10){
         sum = sum + i ;
       i++ ;
}
           printf("%d" , sum);
 }*/


// #include <stdio.h>
// int main(){
//     int num1 , sum = 0;
//     int num2 ;
//     printf("Enter First no. : ");
//     scanf("%d",&num1);

//     printf("Enter second no. : ");
//     scanf("%d",&num2);

//     int i = num1+1 ;
//     while(i<num2){
//         sum = sum+i ;
//         i++ ;

//     }
//       printf("%d\n",sum);
// }    


   
    
    /*#include <stdio.h>
    int main(){
    int a,b ;
    int even=0,odd=0;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    int  i=a;
    while(i<=b){
        if( i%2==0 ){
            even=even+i;
            // printf("\nSum of even number is :%d",even);
    }else{
            odd=odd+i;
            //printf("\nSum of odd number is :%d",odd);
        
        }
           i++;
    }
        printf("\nSum of even number is :%d",even);
        printf("\nSum of odd number is :%d",odd);


    return 0;
    }*/

    //Q35. program to input a number and find sum of digits of the number - Code

    /*#include<stdio.h>
    int main()
    {
        int n=123,sum=0,r;
        while(n>0)
        {
            r=-n%10;
            sum=sum+r;
            n=n/10;
        }
        printf("%d",sum);
        return 0;
    }*/

    //Q36. program to input a number and count number of digits in the number -


    /*#include<stdio.h>
    int main()
    {
        int n=1526,count=0,r;
        while(n>0)
        {
            count++;
            n=n/10;
        }
        printf("%d",count);
        return 0;
    }*/

    //Q37. program to input a number and find whether it is palindrome or not (1221 is a palindrome and 1234 is not a palindrome) - Code

    /*#include<stdio.h>
    int main()
    {
        int n=123,temp,rev=0,r;
        temp=n;
        while(n>0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        printf("reverse number = %d\n",rev);
        if(temp==rev)
        printf("palindrome number");
        else
        printf("not palindrome");
        return 0;
    }*/

    //Q38. program to input a number and print reverse of the number using while loop

    /*#include<stdio.h>
    int main()
    {
        int n=123,temp,rev=0,r;
        temp=n;
        while(n>0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        printf("reverse number = %d",rev);
        return 0;
    }*/

//Q41. program to find factorial of number using for loop with decrement operator

/*#include<stdio.h>
int main()
{
    int i,n=2,fact=1;
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
      printf("%d",fact);
      return 0;
}*/

/*#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;
    double sum = 0.0, fact, term;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Calculate Factorial of i
        fact = 1.0;
        for (j = 1; j <= i; j++) {
            fact *= j;
        }

        // Calculate Term (i^i / i!)
        // pow(i, i) is used for convenience from math.h
        term = pow(i, i) / fact;
        
        // Add term to total sum
        sum += term;
    }

    printf("Sum of the series: %lf\n", sum);

    return 0;
}
*/

/*#include<stdio.h>
void main()
{
    int day=1;
    switch(day)
    {
    case 1:
       printf("monday");
        break;
     case 2:
       printf("tuesday");
        break;
         case 3:
       printf("wednesday");
        break;
    default:
        break;
    }
}*/


/*#include<stdio.h>
int main()
{
    float bal=500,deposit,witddraw;
    int choice;
    while(1){
    printf("press 1 for deposite amt\n press 2 for widthdraw amt\n                                                                                                                                                                                                                                                                                          press 3 for check balance\n press 4 logout\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("enter the deposite amount");
        scanf("%f",&deposit);
        bal+=deposit;
        printf("total deposite amount =%f",deposit);
        break;

        case 2:
        printf("enter the withdraw amount");
        scanf("%f",&witddraw);
        if(bal>witddraw)
        {
            bal=bal-witddraw;
            printf("total withdraw amount =%f",witddraw);
        }
        else{
            printf("invalid amount");
        }
        
        break;
    case 3:
    printf("total balance =%f",bal);
    break;
    case 4:
   printf("thanku for enjoy atm services");
   return 0.0;
   

    default:
       printf("invalid choice");
    }
}
 return 0;
}*/