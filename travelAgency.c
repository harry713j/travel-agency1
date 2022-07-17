#include <stdio.h>
#include <stdlib.h>
struct Details
{
    char Name[50];
    char DLn[30];
    char Route[30];
    int kms;
};
int main()
{
    int n, i = 0;
    printf("Enter the number of drivers : ");
    scanf("%d", &n);
    struct Details *Driver;
    Driver = (struct Details *)malloc(sizeof(struct Details*) + n * sizeof(char));
    while (i < n)
    {
        printf("Driver%d please enter your details : \n\n", (i + 1));
        printf("Enter your Name : \n");
        scanf("%s", &Driver[i].Name);
        printf("Enter your Driving license number : \n");
        scanf("%s", &Driver[i].DLn);
        printf("Enter your Route : \n");
        scanf("%s", &Driver[i].Route);
        getchar();
        printf("Enter How much distance you travelled : \n");
        scanf("%d", &Driver[i].kms);
        i++;
    }
    i = 0;
    while (i < n)
    {
        printf("Driver-%d Details : \n", (i + 1));
        printf("Name : %s\n", Driver[i].Name);
        printf("Driving License No. : %s\n", Driver[i].DLn);
        printf("Route : %s\n", Driver[i].Route);
        printf("Distance Travelled : %dkm\n", Driver[i].kms);
        i++;
    }
    free(Driver);
    return 0;
}