#include <stdio.h>

int main() {
    char line[80];

    printf("Nhap line\n");
    scanf("%s[^\n]", &line);
    printf("Ket qua la %s" , line);

}