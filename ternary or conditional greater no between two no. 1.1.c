#include<stdio.h>
main()
{
    int x,y,r;
    printf("enter two no.");
    scanf("%d%d",&x,&y);
    r=(x>y)?x:y;
    printf("%d is greater",r);
}
