#include<stdio.h>
#include<time.h>

int main()
{
  time_t now = time(NULL);
//   printf("%ld\n",now);
  char *string_now = ctime(&now);
  printf("%s\n",string_now);
    return 0;

}