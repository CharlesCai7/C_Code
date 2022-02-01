#include<stdio.h>             /*预处理指令，编译器写代码前做准备工作"stdio.h means  standard input&output header(头文)"*/
#include <stdlib.h>
#define COL 4
#define ROW 3

void copyptrtuple(int(*a)[COL],int(*b)[COL]) //对于二维数组中一维数组的复制函数
{
    for (int i = 0; i < COL;i++)
        *(*b+i)= *(*a+i);
}

void copyptr(int* a, int n,int* target) //一维数组的复制函数
{
    for (int i = 0; i < n;i++)
    {
        *(target + i) = *(a + i);
    }
}

void addptr(int* a, int* b,int* target) //一维数组的求和函数
{
    for (int i = 0; i < COL;i++)
    {
        *(target + i) = *(a + i)+*(b+i);
    }
}

void copy2D(int (*a)[COL],int (*b)[COL]) //二维数组的复制函数
{
    for (int i = 0; i < ROW;i++)
    {
        copyptrtuple(a+i,b+i);
    }
}

int main(void)                /*"int"为返回数据类型，“void”为所需参数类型"void means none var is needed"*/
{
    int arr1[ROW][COL] = {};
    /* int arr2[COL] = {1, 0, 4, 6};
    int target[COL] = {0}; */

    for (int j = 0; j < ROW;j++)                //打印二维数组的loop
    {
        for (int i = 0; i < COL; i++)
        {
            printf("Enter numbers to form the tuple:");
            scanf("%d",*(arr1+j)+i);
            printf("Keep going!\n");
        }
        /* printf("%-5d ", *(*(target + j)+i));
        printf("\n"); */
        printf("Well done bro!\n");
    }

    for (int j = 0; j < ROW;j++)                //打印二维数组的loop
    {
        for (int i = 0; i < COL; i++)
            printf("%-5d ", *(*(arr1 + j)+i));
        printf("\n");
        
    }

    /* for (int i = 0; i < COL;i++)                 //打印一维数组的循环
        printf("%-5d ",*(target+i)); */

    return 0;
}
