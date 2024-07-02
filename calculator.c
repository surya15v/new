// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    int a;
    int a1,b1;
    printf("Enter 0 for exit\nEnter 1 for addition\nEnter 2 for substration\nEnter 3 for division\nEnter 4 for multipilication\n");
    printf("Enter 5 for power\nEnter 6 for squareroot\nEnter 7 for cuberoot\nEnter 8 for ceil\nEnter 9 for expotential\nEnter 10 for floor\n");
    
    
    while(1){
        printf("enter the number:\n");
        scanf("%d",&a);
        switch(a){
            case 1:
            printf("addition: \n");
           printf("enter a number1: \n");
           scanf("%d",&a1);
            printf("enter a number2: \n");
            scanf("%d",&b1);
            printf("addition is : %d\n",a1+b1);
            break;
            case 2:
            int a2,b2;
            printf("subtraction");
           printf("enter a number1: \n");
           scanf("%d",&a2);
            printf("enter a number2: \n");
            scanf("%d",&b2);
            printf("subtraction is : %d\n",a2-b2);
            break;
            case 3:
            printf("division");
           printf("enter a number1: \n");
           scanf("%d",&a1);
            printf("enter a number2: \n");
            scanf("%d",&b1);
            printf("division is : %d\n",a1/b1);
            break;
            case 4:
  printf("multiplication");
           printf("enter a number1: \n");
           scanf("%d",&a1);
            printf("enter a number2: \n");
            scanf("%d",&b1);
            printf("multiplication is : %d\n",a1*b1);
            break;
            case 5:
 printf("power");
           printf("enter a number1: \n");
           scanf("%d",&a1);
            printf("enter a number2: \n");
            scanf("%d",&b1);
            printf("power is : %d\n",pow(a1,b1));
            break;
            case 6:
           printf("enter a number: \n");
           scanf("%d",&a1);
            printf("square root is : %d\n",sqrt(a1));
            break;
            case 7:
           printf("enter a number: \n");
           scanf("%d",&a1);
            printf("cube root is : %d\n",cbrt(a1));
            break;
            case 8:
            
           printf("enter a number: \n");
           scanf("%d",&a1);
            printf("ceil is : %d\n",ceil(a1));
            break;
            case 9:
            printf("enter a number: \n");
           scanf("%d",&a1);
            printf("expotential is : %d\n",exp(a1));
            break;
            case 10:
            printf("enter a number: \n");
           scanf("%d",&a1);
            printf("floor is : %d\n",floor(a1));
            break;
            case 0:
            return 0;
            break;
        }
    }

    return 0;
}
