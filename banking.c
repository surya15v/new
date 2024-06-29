// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a=1000,i,d,w;
   printf("enter 1 for Check Balance \nenter 2 for Deposit Money\nenter 3 for Withdraw Money\nenter 4 for Exit\n");
   while(1){
       
   printf("enter your number: ");
   scanf("%d",&i);
   switch(i){
       case 1:
       printf("your balance %d \n",a);
       break;
       case 2:
       printf("desposit your money: ");
       scanf("%d",&d);
       a=a+d;
       printf("desposit sucessfully \n your balance: %d\n",a);
       break;
       case 3:
       printf("enter the  money to withdraw: ");
       scanf("%d",&w);
       if (w<a){
           a=a-w;
           printf("withdraw sucessfully \n your balance: %d\n",a);
           
       }
       else{
           printf("you have insuffiecent balance\n");
       }
       break;
       case 4:
       printf("exited\n");
       return 0;
       break;
       
   }
}
}

