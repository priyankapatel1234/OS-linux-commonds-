#include<stdio.h>
 int  main()
{
int n,BT[20],WT[20],TT[20],AT[20],avgwt=0,avgtt=0,i,j;
 printf("enter no of process\n");
 scanf("%d",&n);

printf("\n enter process brust time\n");
 
  for(i=0;i<n;i++)
{
 printf("process[%d]:",i+1);
scanf("%d",&BT[i]);
}


  for(i=0;i<n;i++)
{
 printf("arival time[%d]:",i+1);
scanf("%d",&AT[i]);
}

WT[0]=0;

for(i=0;i<n;i++)
{
WT[i]=0;
for(j=0;j<i;j++)
{
WT[i]=WT[i]+BT[j];

}
}

printf("\n processes time");
for(i=0;i<n;i++)
{
 TT[i]=BT[i]+WT[i];
 avgwt=avgwt+WT[i];
 avgtt=avgtt+TT[i];
 printf("\n process[%d]\t\t%d\t\t%d\t\t%d",i+1,BT[i],WT[i],TT[i]);
}
avgwt=avgwt/i;
avgtt=avgtt/i;
printf("\n avg waiting time:%d",avgwt);
printf("\n avg turnaround time %d\n",avgtt);
return 0;
}


