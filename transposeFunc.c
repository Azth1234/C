// Online C compiler to run C program online
#include <stdio.h>
void transpose(int a[3][3]);
int main() {
    int a[3][3],i,j;
    printf("enter the elements of 3x3 Matrix: ");\
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Original Matrix:\n");\
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    transpose(a);
    
}
void transpose(int a[3][3]){
    int b[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            b[i][j]=a[j][i];
        }
    }
    printf("\nTransported Matrix:\n");\
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}
