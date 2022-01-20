#include<stdio.h>
int main()
{
int n,i,a;
a=0;
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
    if(n%i==0)
   {a=1;
       printf("not a prime");
       break;}

}
if(a==0)
 {printf("prime");}
}