#include<stdio.h>
struct student
{
    char name[30];
    int rollno,m1,m2,m3,total;
};

int main()
{
   struct student s[100],temp;
   int n,i,pass;
   printf("Enter the number of students:\t");
   scanf("%d",&n);
   printf("Enter the details of the student \n");
   printf("----------------------------------------------------------------------------------------------------------");
   /Inputing data of the student/
   for(i=0;i<n;i++)
   {
        printf("\nEnter the name of the student (second name only) %d:\t",i+1);
        scanf(" ");
        gets(s[i].name);
        printf("\nEnter the roll number of the student %d:\t",i+1);
        scanf("%d",&s[i].rollno);
        printf("\nEnter the mark1 student %d:\t",i+1);
        scanf("%d",&s[i].m1);
        printf("\nEnter the mark2 student %d:\t",i+1);
        scanf("%d",&s[i].m2);
        printf("\nEnter the mark3 student %d:\t",i+1);
        scanf("%d",&s[i].m3);
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
   }
   /Ranking the names of students/
   for(pass=0;pass<n;pass++)
   {
        for(i=0;i<n-1-pass;i++)
        {
            if(s[i].total<s[i+1].total)
            {
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
        }
   }
   printf("\n---------------------------------------------------------------------------------------------------------------------");

   for(i=0;i<n;i++)
   {
       printf("\n|\t%d\t|\t|\t%s\t\t\t\t|\t|\t%d\t\t|\t|\t%d\t|",i+1,s[i].name,s[i].rollno,s[i].total);
       printf("\n---------------------------------------------------------------------------------------------------------------------");
   }

  printf(jmijmji);
return 0;
}