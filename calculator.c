//que no:13
#include<stdio.h>
int main()
{
    int a,b,n;
    printf("enter any number like(11,22,33,44):");
    scanf("%d",&a);
   
    int Aofcircle,Aofrect,Aoftringle,Aofsquare;
    switch (a)
    {
    case (11):
    if (  Aofcircle=(2*3.14*a*a))
    {
          printf("\nArea of circle is :"&Aofcircle,Aofcircle);
    }
     break;
  
     
       
        case (22):
        Aofrect=a*b;
 printf("Area of rectangle is :"&Aofrect,Aofrect); 
        break;
        case (33):
        Aoftringle=
      
 printf("Area of tringle is :"&Aofrect,Aofrect); 
        break;
        case (44):
        printf("Area of tringle is :"&Aofsquare,Aofsquare); 
        break;
       
    
    
    default:
    printf("You enterd a wrong number:");
        break;
    }

}