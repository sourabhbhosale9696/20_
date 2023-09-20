//que no:5 
#include<stdio.h>
int main()
{
    int a;
    printf("enter any number:");
    scanf("%d",&a);
    switch (a)
    {
    case (1):
       printf("\nSunday");
        break;
        case (2):
       printf("\nMonday");
        break;
        case (3):
       printf("\nTuesday");
        break;
        case (4):
       printf("\nWensday");
        break;
        case (5):
       printf("\nThresday");
        break;
        case (6):
       printf("\nFriday");
        break;
         case (7):
       printf("\nSaterday");
        break;
    
    
    default:
    printf("You enterd a wrong number:");
        break;
    }

}