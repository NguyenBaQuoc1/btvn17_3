#include <stdio.h>

int main(){
    char line[80]; //line[80] gom 1 mang luu tru 80 ki tu

    printf("Nhap line\n");
    scanf("%s[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]" , &line);
    printf("%s" , line);

    
}