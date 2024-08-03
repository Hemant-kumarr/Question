#include<stdio.h>
#include<time.h>
#include<unistd.h>

int main(){
    int h  , m  , s ;
    printf("Enter time where you want to satrt timer:-\n");
     printf("Enter the hour:-");
     scanf("%d",&h);
      printf("Enter the min..:-");
     scanf("%d",&m);
      printf("Enter the sec..:-");
     scanf("%d",&s);
while(1)
{
     system("cls");
    printf("%.2d : %.2d : %.2d",h ,m , s);  
    if(s==0 && m==0 && h==0)   break;
     s--; 
    sleep(1); 
    if(m>0  && s==0)
        {
            s=60;
            m--;
        }
    if( h> 0 && m==0)
        {
            m=60;
            h--;
        }    
}       
 return 0;

}
   
