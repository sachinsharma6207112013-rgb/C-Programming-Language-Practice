#include<stdio.h>
#include<windows.h>
int main(){
    for (int i=1;i<=8;i++){
        for (int j=1;j<=9;j++){
            if((i==2&&j==2|| i==2 && j==3 ||i==2&&j==7||i==2&&j==8)||(i==3 &&j==1 || i==3 &&j==4 || i==3 &&j==6 || i==3 &&j==9)||( i==4&&j==1 || i==4&&j==5||i==4&&j==9)||(i==5&&j==2||i==5&&j==8)||(i==6&&j==3||i==6&&j==7)||(i==7&&j==4||i==7&&j==6)||(i==8&&j==5)){
                printf("* ");
            }else{
                printf("  ");
            }
        }printf("\n");
        }
        
    return 0;
}