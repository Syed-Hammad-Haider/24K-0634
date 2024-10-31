#include <stdio.h>

int main()
{
    int lower_bound, upper_bound, prime_flag;

    printf("Enter the starting number: ");
    scanf("%d", &lower_bound);
    printf("Enter the ending number: ");
    scanf("%d", &upper_bound);

    for (int current_num = lower_bound; current_num <= upper_bound; current_num++)
    {
        if (current_num < 2)
            continue;
        prime_flag = 1;
        for (int divisor = 2; divisor * divisor <= current_num; divisor++)
        {
            if (current_num % divisor == 0)
            {
                prime_flag = 0;
                break;
            }
        }
        if (prime_flag)
        {
            printf("%d ", current_num);
        }
    }
    printf("\n");
    return 0;
}
