#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=4;j++)
        if (j==1 || i+j==5 || i==4 && j==3 || i==5 && j==4){
            printf("* ");
        }
        else{
            printf("  ");
        }
        printf("\n");
    }
}