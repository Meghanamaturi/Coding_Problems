#include<stdio.h>
#include<math.h>
void main(){
    int a,n,i,count=0,x,y,temp,val,sum=0;
    scanf("%d",&n);
    val=temp=n;
  while(n!=0)
  {
        x=n%10;
        n=n/10;
        count++;
    }
    printf("%d\n",count);
    while(temp!=0)
    {
        y=temp%10;
        printf("y:%d",y);
        a=pow(y,count);
        printf("power:%d\n",a);
        sum+=a;
        printf("sum:%d\n",sum);
        temp=temp/10;
    }
   // printf("%d\n",sum);
    if(val==sum){
        printf("armstrong");    
    }
    else{
        printf("not an armstrong");
    }

}
