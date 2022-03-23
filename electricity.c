#include<stdio.h>
int main()
{
char name[20];
float units,charge,total;
printf("enter the name");
gets(name);
printf("enter number of units");
scanf("%f",&units);
if(units>=1 && units<=200)
{
charge=units*0.8;
}
else if(units>200 && units<=300)
{
charge=(200*0.8)+((units-200)*0.9);
}
else if(units>300)
{
charge=(200*0.8)+(100*0.9)+((units-300)*1);
}
total=charge+100;
if(total>400)
{
total=total+(total*0.15);
}
printf("electricity bill\n");
printf("username%s",name);
printf("no of units=%2f",units);
printf("charge=%2f",total);
return 0;
}
