//Q2. program to input integer array from user and then display it using for loop


/*#include<stdio.h>
int main()
{
    int aa[5],i;
    printf("Enter the array value : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&aa[i]);
    }
    printf("Display the value of array\n ");
    for(i=0;i<5;i++)
    {
        printf("%d\n",aa[i]);
    }
    return 0;
}/*

/*Q3. program to input integer array of size 5 using while loop and then display
the integer array using while loop -*/

/*#include<stdio.h>
int main()
{
    int aa[5], i;
    printf("Enter the array value :");
    i = 0;
    while(i<5)
    {
        scanf("%d\n",&aa[i]);
        i++;
    }
    printf("Display the array value ");
    int j = 0;
    while(j<5)
    {
        printf("%d\n",aa[j]);
        j++;
    }
    return 0;
}*/

/*Q4. program to input an integer array of size 5 from the user and calculate
total of the integer array using for loop -*/

/*#include<stdio.h>
int main()
{
   int aa[5],i;
   int sum=0;
   printf("Enter the array value " );
   for(i=0;i<5;i++)
   {
       scanf("%d",&aa[i]);
   }

  for(i=0;i<5;i++)
  {
     sum = sum+aa[i];
 
  }
  printf(" a n=%d",sum);

   return 0;
}*/

//Q5program to input an integer array of marks in 5 subjects and calculate percentage

/*#include<stdio.h>
int main()
{
    int aa[5],i;
    int sum=0;
    float p;
    printf("Enter the array value " );
   for(i=0;i<5;i++)
   {
       scanf("%d",&aa[i]);
   
       sum = sum+aa[i];
   }
p=(sum*5.0)/100;
  printf("persentage=%f\n",p);

  return 0;

}*/


//Q6. program to input a character array from the user and find its length using for loop - 

/*#include<stdio.h>
int  main()
{
    char aa[100]={'a','e','i','o','u','u','t'};
    int i;
    int len = 0;
   
     for(i=0;i<7;i++)
     {
        len++;
     }
       printf("Length of the character array = %d\n",len);

       return 0;
}
*/


//Q6. program to input a character array from the user and find its length using for loop-


/*#include<stdio.h>
int  main()
{
    char aa[100];
    int len = 0,i,size;
    printf("enter the array size");
    scanf("%d",&size);
    printf("Enter charecters : ");
     for(i=0;i<size;i++)
     {
        scanf(" %s",&aa[i]);

     }
       
   
     for(i=0;i<size;i++)
     {
        len++;
     }
     printf("total character length is = %d",len);

       return 0;
}*/

//Q7. program to input a character array or string from user and find its length using while loop

/*#include<stdio.h>
int main()
{
     char aa[100];
    int len = 0,i,j,size;
    printf("enter the array size : ");
    scanf("%d",&size);
    printf("Enter character array : ");
    i=0;
    while(i<5)
    {
     scanf("%s",&aa[i]);
     i++;
    }
    
  
       j=0;
    while(j<size)
    {
        len++;
        j++;
        
    }
    
    printf("Total character array length = %d",len);
     return 0;
}*/



//Q8. program to input a float array from user and display it using for loop

/*#include<stdio.h>
int main()
{
    float aa[5];
    int i;
    printf("Enter the array value : ");
    for(i=0;i<5;i++)
    {
        scanf("%f",&aa[i]);
    }
    printf("Display the value of array\n ");
    for(i=0;i<5;i++)
    {
        printf("2f\n",aa[i]);
    }
    return 0;
}*/


//Q11. program to input a string and find number of vowels,consonants,digits and other characters -

/*#include<stdio.h>
int main()
{
    char aa[500];
}*/

//Q12. program to initialize single dimensional integer array and display the array using for loop

/*#include<stdio.h>
int main()
{
    int arr[5] = {10,20,30,40,50};
    int i;

    printf("Display the array values :\n ");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}*/

//Q13. program to initialize single dimensional char array and display the array using for loop


/*#include<stdio.h>
int main()
{
    char arr[] = {'a', 'e', 'i', 'o', 'u'};
    int i;

    printf("Display the array character  values :\n ");
    for(i=0;i<5;i++)
    {
        printf("%c\n",arr[i]);
    }
    return 0;
}*/

//Q14. program to initialize single dimensional float array and display the array using for loop

/*#include<stdio.h>
int main()
{
    float arr[5] = {10.5,20.3,30.4,40.5,50};
    int i;

    printf("Display the array values :\n ");
    for(i=0;i<5;i++)
    {
        printf("%f\n",arr[i]);
    }
    return 0;
}*/

//Q15. program to find maximum and minimum number in an integer array

/*include<stdio.h>
int main()
{
    int arr[] = {12,45,7,23,89,34};
    int n=6;
    int i;

    int max=arr[0];
    int min=arr[0];

    for(i=1;i<n;i++)
    {
        if (arr[i] > max) {
            max=arr[i];

        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum value = %d\n",max);
    printf("Minimum value =%d\n",min);

    return 0;
}*/

