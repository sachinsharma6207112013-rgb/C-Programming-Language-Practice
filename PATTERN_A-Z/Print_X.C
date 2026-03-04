#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++)
        if (j==1 || j==5 || i+j==6 && j<=3 || i==j && j>=3){
            printf("* ");
        }
        else{
            printf("  ");
        }
        printf("\n");
    }
}