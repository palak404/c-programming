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

