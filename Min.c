void main()
{
int a[100],min,n,i;
clrscr();
printf("Enetr the number of element in array:");
scanf("%d",&n);
printf("Enter any %d number:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("Maximum element in an array is=%d",min);
getch();
}
