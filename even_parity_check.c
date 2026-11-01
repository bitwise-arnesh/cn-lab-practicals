
#include <stdio.h>

int main()
{
    int n, temp, digit, count = 0, parity;

    
    printf("Enter binary data: ");
    scanf("%d", &n);

    temp = n;

    
    while (temp > 0)
    {
        digit = temp % 10;

        if (digit == 1)
            count++;

        temp = temp / 10;
    }

    
    parity = count % 2;
    
    printf("Parity bit %d\n",parity);

    printf("Encoded data: %d%d\n", n, parity);

    return 0;
}
