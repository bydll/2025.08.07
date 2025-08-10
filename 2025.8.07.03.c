#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int num;
    char name[20];
    char gender[5];
    int age;
}stu[]={{202501,"zhangsan","F",18},{202502,"lisi","M",21},{202503,"wangwu","M",19},{202504,"zhaosi","F",22},{202505,"qianqi","M",21}};
int main(){
    int id;
    printf("输入学号");
    scanf("%d",&id);
    int i;
    for (i = 0; i < 5; i++)
    {
        if (stu[i].num=id)
        {
            printf("name=%s,gender=%s,age=%d",stu[i].name,stu[i].gender,stu[i].age);
            break;
        }
        else printf("None");
    }
    
    return 0;
}
