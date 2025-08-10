#include <math.h>
#include <stdio.h>
int main(){
    float A,B,C;
    float x1,x2;
    float n;
    printf("输入ABC的值");
    scanf("%f %f %f",&A,&B,&C);
    n=B*B-4*A*C;
    if (A==0)
    {
        printf("不存在");
    }
    if(n>=0){
        x1=(-B+sqrt(n))/(2*A);
        x2=(-B-sqrt(n))/(2*A);
        printf("x1=%f,x2=%f",x1,x2);

    }
    else{
        printf("无根");
    }
    return 0;
}