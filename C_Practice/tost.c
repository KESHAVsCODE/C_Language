#include<limits.h>
main()
{
    printf("%30u");
    printf("\n%-30s %101u %25lld - %lld\n\n", "long long int or signed long long int", sizeof(long long int),LONG_LONG_MIN,LONG_LONG_MAX);
    getch();
}
