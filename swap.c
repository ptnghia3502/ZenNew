#include <stdio.h>

int main()
{
    printf("Nhap 2 so a va b: \n");
    int a,b;
    scanf("%d%d", &a, &b);
    printf("Cac so a, b la: a = %d, b = %d\n", a, b);
    int c = a;
    a = b;
    b = c;
    printf("Sau khi swap: a = %d, b = %d", a, b);
    return 0;
}