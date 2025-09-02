// Online C compiler to run C program online
#include <stdio.h>
int fibo(int n);
int main() {
    int n,facto;
    printf("enter the number: ");\
    scanf("%d",&n);
    printf("Fibonacci series\n");
    for(int i=1;i<=n;i++){
        printf("%d\n",fibo(i));
    }
}
int fibo(int n){
    if (n==1){
        return 0;
    }
    else if (n==2){
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
