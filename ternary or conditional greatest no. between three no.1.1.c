#include<stdio.h>
main()
{
    int x,y,z,r;
    printf("enter three no.");
    scanf("%d%d%d",&x,&y,&z);
    r=(x>y&&x>z)?x:(y>z)?y:z;
    printf("%d is greatest",r);
}
