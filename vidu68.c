#include <stdio.h>

int main (){
    int i ; 
    float x ;
    char c ;

    printf("Khai bao i , x , c\n");
    scanf("%3d %5f %c" , &i , &x , &c);
    printf("ket qua la %d %.2f %c" , i , x ,c );
    return 0 ;
}