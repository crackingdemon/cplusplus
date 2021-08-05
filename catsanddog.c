#include <stdio.h>
int main()
{
  int t,i,d,c,l;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
    scanf("%d%d%d",&c,&d,&l);
    if(l%4==0)
    {
      if(c<=2*d)
      {
        if(l>=4*d && l<=(c+d)*4)
        {
          printf("yes\n");
        }
        else
        {
          printf("no");
        }
      }
      else if(c>2*d)
      {
        if(l>=(d+c-2*d) && l<=4*(c+d))
        {
          printf("yes\n");
        }
        else
        {
          printf("no\n");
        }
      }
    }
    else
    {
      printf("no\n");
    }
  }
  return 0;
}