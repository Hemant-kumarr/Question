#include<stdio.h>
#include<time.h>
#include<unistd.h>

int main(){
    int h = 0 , m = 0 , s =0;
     while(1)
     {   
        system("cls");
        printf("%.2d : %.2d : %.2d",h ,m , s);
        sleep(1);
        s++;
       
        if(s==60)
        {
            s = 0;
            m++;
        }
        if(m==60)
        {
            m=0;
            h++;
        }

     }
    return 0;
}