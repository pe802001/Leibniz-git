#include<stdio.h>
#include<stdlib.h>
double Leibniz(int);
double power(double,int);
int main(void)
{
    int n;
    printf("求Leibniz(n)=??,n=",n,Leibniz(n));
    scanf("%d",&n);
    printf("Leibniz(%d)=%f",n,Leibniz(n));
    system("pause");
    return 0;    
    }
    
double Leibniz(int n)
{             
     int k;
     double sum=0;
     for(k=1;k<=n;k++)
        {
          sum=sum+power(-1.0,k-1)/(2*k-1);           
        }
    return 4*sum;               
}

double power(double base,int n)
{
       int i;
       double power=1;
       for(i=1;i<=n;i++)
       power*=base;
       return power;
}
