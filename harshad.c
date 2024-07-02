
#include <stdio.h>

int Divisible(int b,int s){
    return (b%s==0?s:-1);}

int main() {
    int a1,b=0,s=0,a;
    scanf("%d",&a1);
    a=a1;
    while(a){
        b=a%10;
        s=s+b;
        a=a/10;
    }
   printf("%d",Divisible(a1,s));


    return 0;
}
