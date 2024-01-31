#include <stdio.h>

int main(void) 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // If n is even
    if (n % 2 == 0) 
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}
