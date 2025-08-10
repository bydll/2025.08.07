#include<stdio.h>
int main(){
    int a=1,b=1,temp;
    int n,i;
    printf("输入月份");
    scanf("%d",&n);
    for (i = 3; i <= n; i++)
    {
        temp=b;
        b=a+b;
        a=temp;
    }
    printf("%d",b);
    return 0;
}