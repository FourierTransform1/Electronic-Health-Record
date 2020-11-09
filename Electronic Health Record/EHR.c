#include <stdio.h>
#include <stdlib.h>

int task1();
int task2();
int task3();

int main()
{
    //printf("\nTASK 1!\n\n");
    //task1();
    //printf("\nTASK 2!\n\n");
    //task2();
    printf("\nTASK 3!\n\n");
    task3();

    return 0;
}



int task1()
{

    int size;
    int columns = 1;
    int row = 1;

    printf("Please insert size of multiplication table\n");
    scanf("%d",&size);
    printf("%d\n",size);
    printf("x !\t");


    do
    {
        printf("%d\t",columns);
        columns++;
    }
    while(columns<=size);

    printf("\n");
    columns = 0;

    do
    {
        printf("%c\t",'-');
        columns++;
    }
    while(columns<=size);

    printf("\n");
    columns = 0;

    do
    {
        printf("%d %c\t",row,'!');


        for(int n = 1; n<=size; n++)
        {
            printf("%d\t",row*n);
        }
        row++;
        printf("\n");
    }
    while(row<=size);
}



int task2()
{
    float x;
    float n = 1;
    float ex = 1;
    float term = 1;
    float breakingPoint = 0.0000001;
    float absoluteV = 1;

    printf("input x value:\n");
    scanf("%f", &x);
    printf("term= %.1f\t %.7f\n",n,ex);

    do
    {
        term = term*x/n;
        ex+=term;
        printf("term= %.1f\t %.7f\n",n+1,ex);
        absoluteV = term;

        if(absoluteV<0)
        {
            absoluteV*=(-1);
        }
        n++;
    }
    while(absoluteV >0.0000001);
    return 0;
}



int task3()
{

    int stat = 0;
    int statusRegister [16];
    int flag = 0;


        printf("enter issue number:");
        scanf("%d",&flag);


    while((flag<8)&& (flag>=0))
    {
        stat += (1<<flag);
        printf("\nenter issue number:");
        scanf("%d",&flag);

    }


        printf("\n\nSTATUS REGISTER!\n");

    for(int i = 7; i >= 0; i--)
    {
        flag = (stat>>i)&1;
        printf("%d",flag);
        statusRegister[i]=flag;
    }
        printf("\n\n");



    if(stat==00000000)
            printf("[Status:1] EVERYTHING IS WORKING NORMALLY\n\n");


    if(statusRegister[4]==1)
        printf("[Status:2] Fuel level is TOO LOW\n");



    if(statusRegister[2]==1&&statusRegister[5]==1)
        printf("[Status:3] It's SNOWING outside and the Engine temperature TOO HIGH\n");



    if(statusRegister[0]==1||statusRegister[1]==1)
        printf("[Status:4] Breakpads are worn out and the Break-fluid level is too LOW\n");


}




