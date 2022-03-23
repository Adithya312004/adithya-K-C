#include<stdio.h>
int main()
{
struct student
{
int std_id;
char name[20];
float lang1_marks;
float lang2_marks;
float sc_marks;
float mat_marks;
float comp_marks;
float avg;
};
struct student s[20];
int i,n;
printf("enter the number of records ;");
scanf("%d",&n);
printf("enter %d student details...\n",n);
for(i=0;i<n;i++)
{
printf("enter student id: ");
scanf("%d",&s[i].std_id);
printf("enter student name: ");
scanf("%s",&s[i].name[20]);
printf("enter student lang1 marks: ");
scanf("%f",&s[i].lang1_marks);
printf("enter student lang2 marks: ");
scanf("%f",&s[i].lang2_marks);
printf("enter student science marks: ");
scanf("%f",&s[i].sc_marks);
printf("enter student math marks: ");
scanf("%f",&s[i].mat_marks);
printf("enter student computer marks: ");
scanf("%f",&s[i].comp_marks);
}
for(i=0;i<n;i++)
{
s[i].avg=(s[i].lang1_marks+s[i].lang2_marks+s[i].sc_marks+s[i].mat_marks+s[i].comp_marks)/5.0;
}
printf("students scoring above the average marks...\n");
printf("\n\nID\tName\taverage\n\n");
for(i=0;i<n;i++)
{
if(s[i].avg>=35.0)
printf("%d\t%s\t%f\n",s[i].std_id,s[i].name,s[i].avg);
}
return 0;
}






























