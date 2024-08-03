#include<stdio.h>
int system();
int a=0,b=0;
void display()
{   
    system("cls");
    float m = a*100/(a+b);
    float  n = b*100/(a+b);
    printf("------Result------\n");
    printf("1. Aish  %.2f per.(%d)\n",m,a);
    printf("1. Bhavika  %.2f per.(%d)", n,b);
}
int main(){
    int ch=0;
    while(ch!=3)
    {   printf("-----WHO IS BEST SISTER PLEASE VOTE HARE-----\n");
        printf("1. Aish\n2. Bhavika\n3. view reuslt\n");
        scanf("%d",&ch);
        if(ch==1)  a++;
        if(ch==2)  b++;
        if(ch==3)    
        {
          display();
        }
        else printf("****invalid input****\n");
    }
    return 0;
}