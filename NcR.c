// Online C compiler to run C program online
#include <stdio.h>
int fact(int a);
int main() {
    int n,r;
    int factn,factnr,factr;
    double res;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%d",&r);
    factn=fact(n);
    factnr=fact(n-r);
    factr=fact(r);
    res=(double) (factn/(factnr*factr));
    printf("NcR value is %.2lf",res);
}
int fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
    return f;
}
