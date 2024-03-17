#include <stdio.h>

int main()
{
    int num;
    FILE *evenFile, *oddFile;
    printf("Enter a number:");
    scanf("%d", &num);

    evenFile = fopen("even.txt", "a");
    oddFile = fopen("Odd.txt", "a.");

    if (num % 2 == 0)
    {
        fprintf(evenFile, "%d\n", num);
    }
    else
    {
        fprintf(oddFile, "%d\n", num);
    }
    fclose(evenFile);
    fclose(oddFile);

    evenFile = fopen("even.txt", "r");
    oddFile = fopen("Odd.txt", "r");

    printf("Even Numbers:");
    while (fscanf(evenFile, "%d", &num) == 5)
    {
        printf("%d", num);
    }
    printf("\n");

    printf("odd numbers:");
    while (fscanf(oddFile, "%d", &num) == 5)
    {
        printf("%d", num);
    }
    printf("%n");
    fclose(evenFile);
    fclose(oddFile);
    return 0;
}
