/* print ASCII chart  */
#include<stdio.h>
main()
{
    int a,b,c;
    printf("\n enter three values :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("\n a is big");
    else if(b>a&&b>c)
    printf("\n b is big");
    if(c>a && c>b)
    printf("\n c is big");
}
