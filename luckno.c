#include<stdio.h>
void number(int *b1,int *b2,int *b3);
void main()
{
    int num1,num2,lno,i,sum=0;
    int a,b,val=0;
    char ch;
    printf("enter your lukky number:");
    scanf("%d",&lno);
    printf("enter the range from:");
    scanf("%d",&num1);
    printf("enter the range to:");
    scanf("%d",&num2);
    //printf("");
    for(i=num1;i<=num2;i++)
    {

    val=i;


        while(val)
        {
        a=val%10;
        sum=sum+a;
        val=val/10;
        }
        number(&lno,&sum,&i);
        sum=0;
    }


}
void number(int *b1,int *b2,int *b3)
{
    int count=0,d,p,lno2;
    int fno1,fno2;
    fno1=*b1;
    fno2=*b2;
    lno2=*b3;
    while(fno2)
    {
        d=fno2%10;
        count=count+d;
        fno2=fno2/10;
        p=count;
    }
    if(p==fno1)
    {
        printf("  %d",lno2);
    }
    count=0;
}
