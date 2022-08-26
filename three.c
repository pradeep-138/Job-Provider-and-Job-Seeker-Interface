#include<stdio.h>
#include<string.h>
int m,q,i=0;// global variable q should be number of job seeker till now
void old_employer()
{
    int y,j;
    char user[100];
    printf("Enter the company name:");
    scanf("%[^/n]s",&user);
    for(j=0;j<=m;j++)
    {
        if(!(strcmp(user,usern[i].comp))
           {
               y=j;
           }
    }
    applier(y);
}
void main()
{
    employer();
}
void applier(int y)
{
    int k,r=0,p,a,z,count=0, app[100];
    for(i=0;i<=q;i++)//q is global till now number of job seeker
    {
    for(k=0;k<job[i].work_count;k++)//declare job[i].work_count as how many work job seeker has applied
    {
  if(usern[y].jo==job[i].work[k])
  {
    if(usern[y].ag==job[i].age)
    {
     for(p=0;p<job[i].type_count;p++)// job count similarly
     {if(usern[y].type==job[i].type[p])
      {for(a=0;a<job[i].city_count;a++)//similarly
      {if(usern[y].city==job[i].city[a])
      {for(z=0;z<job[i].skill_count;z++)//similarly
      {if(usern[y].skill==job[i].skill[z])
      {app[r]=i;
      r++;
      }
      }
     }
    }
    }
}
    }
}
    }
    }
    count=r;
    printf("These are number for skill\n\t1.Coding python\n\t2.Coding c\n\t3.Coding c++\n\t4.Coding Java\n\t5.Auto Cad\n\t6.Catia\n\t7.Ansys\n\t8.Java script\n\t9.Ms office\n\t10.Android Studio\n");
    for(r=0;r<=count;r++)
    {
    printf("\t\t\tList of applier suitable to your company\n\t%d.Name=%s\n\t Contact number=%d\n\t  Email id=%s\n",r,job[app[r]].name,job[app[r]].contact,job[app[r]].email);
    for(z=0;z<job[app[r]].skill_count;z++)
    {
    printf("\t  Skill\n\t\t%d",job[app[r]].skill[z]);
}
}
}
void edit1()
{
    char user[120],c,t;
    int y,j,v=1;
  printf("Enter your company name\n");
  scanf("%c%[^\n]s",&t,&user);
   for(j=0;j<=m;j++)
    {
        if(!(strcmp(user,usern[j].comp))
           {
               y=j;
           }
    }
     printf("Enter y\Y for Yes and N\n for No\n");
     printf("Do you want to change contact number\n");
     scanf("%c",&c);
     if(c=='Y'||'y')
     {
         printf("Enter new contact number\n");
         scanf("%d",&usern[y].con);
     }
     printf("Do you want to change email id\n");
     scanf("%c",&c);
     if(c=='Y'||'y')
     {
         printf("Enter new email id\n");
         scanf("%c%[^\n]s",&t,&usern[y].emi);
     }
     printf("Do you want to change stream of job\n");
     scanf("%c",&c);
     if(c=='Y'||'y')
     {
         printf("Enter new stream\n\t1. Mechanical Engineer\n\t2. machine design\n\t3.Aerospace Engineer\n\t4.civil engineer\n\t5.software developer\n\t6.web developer\n\t7.App developer\n\t8.Graphic Designer\n\t9.UX\UI Designinig\n\t10. Marketing\n\t11. Business\n");
         scanf("%d",&usern[y].jo);
     }
     printf("Do you want to change type of job\n");
     scanf("%c",&c);
     if(c=='Y'||'y')
     {
         printf("Enter new type\n\t1. Full Time\n\t2. Part Time\n\t3. Work from home\n");
         scanf("%d",&usern[y].type);
     }
     printf("Do you want to change age\n");
     scanf("%c",&c);
     if(c=='Y'||'y')
     {
         printf("Enter new age\n\t1.17-25\n\t2.26-35\n\t3.36-50\n\t4.50 above\n");
         scanf("%d",&usern[y].ag);
     }
     printf("Do you want to change skill\n");
     scanf("%c",&c);
     if(c=='Y'||'y')
     {
         printf("want to Add skill\n");
         scanf("%c",&c);
         if(c=='Y'||'y')
         {
         printf("Enter new skill\n\t1.Coding python\n\t2.Coding c\n\t3.Coding c++\n\t4.Coding Java\n\t5.Auto Cad\n\t6.Catia\n\t7.Ansys\n\t8.Java script\n\t9.Ms office\n\t10.Android Studio\n");
         while(v!=0)
         {scanf("%d",&usern[y].skill[usern[y].ski_count++]);
         printf("Enter 0 if stop adding else 1\n");
         scanf("%d",&v);
         }}
     }
     printf("Do you want to ADD city\n");
     scanf("%c",&c);
     if(c=='Y'||'y')
     {
         printf("Add new city\n");
         v=1;
         while(v!=0)
         {
         scanf("%d",&usern[y].city[usern[y].cit_count++]);
         printf("Enter 0 if stop adding else 1\n");
         scanf("%d",&v);
     }}
     printf("Do you want to change experience\n");
     scanf("%c",&c);
     if(c=='Y'||'y')
     {
         printf("Enter new experience\n");
         scanf("%d",&usern[y].exp);
     }
}
void payment()
{

}
struct company
{
    char name[10];
    char comp[10];
    int ag;
    int con;
    char emi[30];
    int jo;
    int type;
    int cit_count;
    int ski_count;
    int city[8];
    int skill[10];
    int exp;
}usern[50];
void employer()
{
    int j=0,t;
    char user,c,p;
    printf("\t\t\tEmployer\n");
    yu:printf("Enter E/e for Enter detail\nEnter D/d for Edit detail\nEnter L/l for list of Applier\nEnter X/x for exit window\n");
    scanf("%c",&p);
    if(p=='D'||'d')
    {
        edit1();
    }
    if(p=='X'||'x')
    {
      goto ma;//main switch statement
    }
    if(p=='L'||'l')
    {
        old_employer();
    }
    if(p=='E'||'e')
    {
   out:printf("\tN\n for New user\n\tE\e for Exit\n");
    scanf("%c",&user);
    }
    if(user=='E'||'e')
    {
       goto yu;
    }
    if(user=='N'||'n')
    {
    int ski_count=0,cit_count=0;
    printf("\t\t\t\tEnter the detail:\n");
    printf("\tName of company: \n" );
    scanf("%c%[^\n]s",&c,&usern[i].comp);
    printf("\tName of user:\n");
    scanf("%c%[^\n]s",&c,&usern[i].name);
    printf("Enter your contact number:\n");
    scanf("%d",&usern[i].con);
    printf("Enter your email id:\n");
    scanf("%c%[^\n]",&usern[i].emi);
    printf("press number indicated in front to choose that stream:\n");
    printf("\t\t\tEnter the stream of job:\n");
    printf("\t1. Mechanical Engineer\n\t2. machine design\n\t3.Aerospace Engineer\n\t4.civil engineer\n\t5.software developer\n\t6.web developer\n\t7.App developer\n\t8.Graphic Designer\n\t9.UX\UI Designinig\n\t10. Marketing\n\t11. Business\n");
    scanf("%d",&usern[i].jo);
    printf("\t\t\tType:\n\t1. Full Time\n\t2. Part Time\n\t3. Work from home\n");
    scanf("%d",&usern[i].type);
    printf("\t\t\tEnter the age range\n\t1.17-25\n\t2.26-35\n\t3.36-50\n\t4.50 above\n");// change your age like these
    scanf("%d",&usern[i].ag);
    printf("\t\t\tCity\n\\t1.Bangaluru\n\t2.Chennai\n\t3.Delhi\n\t4.Mumbai\n\t5.Kolkata\n\t6.Hyderabad\n");
    scanf("%d",&usern[i].city[j]);
    printf("Press 1 to add city and 0 to exit\n");
    scanf("%d",&t);
    while(t==1)
    {
        j++;
        scanf("%d",&usern[i].city[j]);
    }
    usern[i].cit_count=j;
    j=0;
    printf("\t\t\tSkill\n\t1.Coding python\n\t2.Coding c\n\t3.Coding c++\n\t4.Coding Java\n\t5.Auto Cad\n\t6.Catia\n\t7.Ansys\n\t8.Java script\n\t9.Ms office\n\t10.Android Studio\n");
    scanf("%d",&usern[i].skill[j]);
    printf("Press 1 to add skill and 0 to exit\n");
    scanf("%d",&t);
    while(t==1)
    {
        j++;
        scanf("%d",&usern[i].skill[j]);
    }
    usern[i].ski_count=j;
    printf("\t\t\tExperience\n");
    scanf("%d",&usern[i].exp);
    i++;
    printf("\t\t\tEnter the payment pack:\n");
    payment();// supply needed parameter according to ganesh parameter
    m=i;
    applier(m);
   }
else{
   printf("You have not entered correct key:\n");
    goto out;
   }
}
