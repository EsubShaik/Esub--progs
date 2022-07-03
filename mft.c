#include<stdio.h>
main()
{
 int ms,bs,nob,ef,n,mp[10],tif=0;
 int i,p=0;
 printf("enter total memory:");
 scanf("%d",&ms);
 printf("enter memory size:");
 scanf("%d",&bs);
 nob=ms/bs;
 ef=ms-nob*bs;
 printf("enter total processes:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("enter total memory for process %d:",i+1);
 scanf("%d",&mp[i]);
 }
 printf("\nno of blocks available %d",nob);
 printf("\n\nprocess\tmemory required\t\tallocated\tinternal fragmentation");
 for(i=0;i<n&&p<nob;i++)
 {
 printf("\n%d\t\t%d",i+1,mp[i]);
 if(mp[i]>bs)
 printf("\t\tno\t");
 else
 {
 printf("\t\tyes\t%d",bs-mp[i]);
 tif=tif+bs-mp[i];
 p++;
 }
 }
 if(i<n)
 printf("\nremaining processes cannot be accomodated");
 printf("\ntotal internal fragmentation %d",tif);
 printf("\ntotal external fragmentation %d\n",ef);
}
