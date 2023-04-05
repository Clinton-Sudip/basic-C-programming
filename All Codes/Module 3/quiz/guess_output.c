#include <stdio.h>

int main()
{
    int i = 0,k,a=0,j,b=0,l;
    while (i < 3) {
        i++;
    }
    printf("%d\n",i);
    for (j = 0;j < 5; j++)
    {
        a++;
        continue;
    }
    printf("%d %d\n",j,a);
    for (k = 0;k < 5; k++)
    {
        continue;
        b++;
    }
    printf("%d %d\n",k,b);
    l = 0;
    while (l = 0) {
        printf("Hello\n");
    }
   return 0;
}