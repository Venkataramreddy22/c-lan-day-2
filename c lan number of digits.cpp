/* print ASCII chart  */
#include<stdio.h>
main()
{
    int n;
    printf("\n enter a digit");
    scanf("%d",&n);
    if(n>0 && n<10);
    printf("\n one digit");
    if(n<100)
    printf("\n two digits");
    else if(n<1000)
    printf("\n three digits");
    else
    printf("\n 4 or more digits");
}
