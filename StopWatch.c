#include<stdio.h>

int main(){
    int h = 0 , m = 0 , s =0;
    for(int i = 0 ; i<=12 ; i++)
    {
        for(int j = 0 ;j<=60 ; j++)
        {   
            for(int k =1; k<=60 ; k++)
            {     system("cls");
                printf("%d : %d : %d\n", h , m , s);
                if(k<60)
                {
                    s = s+1;
                }
                if(k==60)
                {
                    s=0;
                    m = m+1;
                }
                if(m==59)
                {
                    m=0;
                    h = h+1;
                }
               
            }
        }
    }

    return 0;
}