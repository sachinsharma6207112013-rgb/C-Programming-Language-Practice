#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){

        for(int j=1;j<=5;j++)
        if ((j==1 || j==5) && i<=3 || (j==2 || j==4) && i==4 || i==5 && j==3)
        printf("* ");
        else printf("  ");
        printf("  ");

        for(int j=1;j<=5;j++)
        if(j==3 || i==1 || i==5) printf("* ");
        else printf("  ");
        printf("  ");

        for(int j=1;j<=5;j++)
        if(j==1 || j==5 || i==j) printf("* ");
        else printf("  ");
        printf("  ");

        for(int j=1;j<=5;j++)
        if (j==1 && i>=2 || j==5 && i>=2 || i==3 || i==1&&j>=2 && j<=4)
        printf("* ");
        else printf("  ");
        printf("  ");

        for(int j=1;j<=5;j++)
        if((j==3&&i>=3) || i<=3 && (j==i || j+i==6)) printf("* ");
        else printf("  ");

        printf("\n");
    }
}