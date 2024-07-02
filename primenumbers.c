// Online C compiler to run C program online
#include <stdio.h>

int main() {
    for (int a=2;a<=100;a++){
        int y,c=0;
    for (int i=2;i<a;i++){
        if (a%i!=0){
            c=c+0;
        }
        else{
            c=c+1;
        }
        
    }
    if (c==0){
       printf("%d\n",a);
    }
    }
 

    return 0;
}
