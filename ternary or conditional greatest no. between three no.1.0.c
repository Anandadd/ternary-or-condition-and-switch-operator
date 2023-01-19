#include<stdio.h>
main()
{
    int x,y,z;
    printf("enter three no.");
    scanf("%d%d%d",&x,&y,&z);
    (x>y&&x>z)?printf("%d is greatest",x):((y>z)?printf("%d is greatest",y):printf("%d is greatest",z));
}
