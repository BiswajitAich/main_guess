/*This c coding done by BISWAJIT AICH. 
DATE->29.DEC.2022.
CALCULATOR just for fun thing*/

#include <stdio.h>
int main() {
    int y=1,x,i;
    float a, b, p1=1.0;
    double p2=1.0;
    char s;
    printf ("Enter to get result of the following operations...\n\n");
    printf("The operators are :\n\"+\",\"-\",\"*\",\"/\",\"^(for power)\",\"!(for factorial)\"\n\n");
    while(1){
    printf ("\nEnter operator to start operation::\t");
    scanf ("%c",&s);
    switch(s)
    {
    case'+':
      printf ("Enter 1st value: ");
      scanf ("%f",&a);
      printf("Enter 2nd value: ");
      scanf("%f",&b);
      printf ("summation is:%.2f",a+b);
      break;
    case'-':
      printf ("Enter 1st value: ");
      scanf ("%f",&a);
      printf("Enter 2nd value: ");
      scanf("%f",&b);
      printf ("subtraction is:%.2f",a-b);
      break;
    case'/':
      printf ("Enter 1st value: ");
      scanf ("%f",&a);
      printf("Enter 2nd value: ");
      scanf("%f",&b);
      printf ("division is:%.2f",a/b);
      break;
    case'*':
      printf ("Enter 1st value: ");
      scanf ("%f",&a);
      printf("Enter 2nd value: ");
      scanf("%f",&b);
      printf ("multiplication is:%.2f",a*b);
      break;
    case'^':
     {printf ("Enter value of base: ");
     scanf ("%f",&a);
     printf("Enter value of power: ");
     scanf("%f",&b);
     if(b>0)
      {while(b!=0)
        {p1=p1*a;
         b--;}
         printf ("Result is: %f",p1);
      } 
     else if (b<0)
       {while(b!=0)
        {p2=p2*(1.0/a);
         b++;}
         printf ("Result is:%.4f",p2);
      }
     else 
       printf ("sorry");
       break;
      }
    case'!':
      printf ("Enter value for factorial:");
      scanf ("%d",&x);
      for(i=1;i<=x;i++)
      {
          y=y*i;
      }
      printf ("factorial result: %d",y);
      break;
    default:
      printf ("TRY AGAIN");
      break;
      }}
      return 0;
    }
