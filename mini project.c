#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAX 1000
int size;
FILE *jp,*ep,*pp;
struct jsee
{
	char name[30];
	char gender;
	char contact[12];
	char email[100];
	char edu3[100];
	int skill[20];
	int work[20];
	int type[6];
	int city[10];
	int rec;
	int work_count;
	int skill_count;
	int type_count;
	int city_count;

}job[MAX];
 struct company
{
    char name[10];
    char comp[10];
    char con[12];
    char emi[30];
    int jo;
    int type;
    int city;
    int skill;
    char am[4];
    char pack;
    char mod;

}usern[MAX];

int m,i;
int w,o;
void hm()
{
    system("cls");
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t############     Job Agency Management System Project in C     ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printf("\n\t\t\t----------------------------------------------------------------------------");
}

void applier(int y)
{
	hm();
	int j,k,l,n,p,prt=0;
    for(j=0;j<size;j++)
    {
    	for(k=0;k<job[j].skill_count;k++)
    	{
    		if(job[j].skill[k]==usern[y].skill)
    		{
    			for(l=0;l<job[j].work_count;l++)
    			{
    				if(job[j].work[l]==usern[y].jo)
    				{
    					for(p=0;p<job[j].type_count;p++)
    					{
    						if(job[j].type[p]==usern[y].type)
    						{
    							for(n=0;n<job[j].city_count;n++)
    							{
    								if(job[j].city[n]==usern[y].city)
    								{
    									prt=1;
    									break;
									}
								}
								break;
							}
						}
						break;
					}
				}
				break;
			}
		}
		if(prt==1)
		{
		  printf("\n\t\t\tName                Gender      Contact             Email           College\n");
		  printf("\t\t\t------------------- -------- ------------- ------------------- ---------------\n");
		  printf("\t\t\t%-20s%6c%15s%18s%17s\n",job[j].name,job[j].gender,job[j].contact,job[j].email,job[j].edu3);
		  prt=0;
		}
	}
	getch();
	return;
}
void old_employer()
{
	hm();
	char nm[50];
 int datafound=0,i;
printf("\n\t\t\tEnter company name:");
scanf("%*d");
gets(nm);
for(i=0;i<m;i++)
{
if(strcmp(usern[i].comp,nm)==0)
{
datafound=1;
break;
}
}
   if(datafound==1)
   {
    	applier(i);
    	getch();
	}
	else
	{
		printf("\n\t\t\tData not found");
		getch();
	}
    return;
}
void edit1()
{
	hm();
    char user[120],c,t;
    int y,j,df;
  printf("\n\t\t\tEnter your company name:");
  scanf("%*c%[^\n]s",&user);
   for(j=0;j<m;j++)
    {
        if(!(strcmp(user,usern[j].comp)))
           {
           	   df=1;
               y=j;
           }
    }
    if(df==1){

     printf("\n\t\t\tEnter y/Y for Yes and N/n for No");
     printf("\n\t\t\tDo you want to change contact number");
     scanf("%*c%c",&c);
     if(c=='Y'||c=='y')
     {
         printf("\n\t\t\tEnter new contact number");
         scanf("%*c%[^\n]",usern[y].con);
     }
     printf("\n\t\t\tDo you want to change email id");
     scanf("%*c%c",&c);
     if(c=='Y'||c=='y')
     {
         printf("\n\t\t\tEnter new email id");
         scanf("%c%[^\n]s",&t,&usern[y].emi);
     }
     printf("\n\t\t\tDo you want to change stream of job");
     scanf("%*c%c",&c);
     if(c=='Y'||c=='y')
     {
         printf("\n\t\t\tSet your job preferences:\n\n\t\t\t1.mechanical engineer\n\t\t\t2.machine design engineer\n\t\t\t3.aerospaced engineer\n\t\t\t4.civil engineer\n\t\t\t5.software developer\n\t\t\t6.web deveplor\n\t\t\t7.App developer\n\t\t\t8.Graphic Designer\n\t\t\t9.UX /UI designer\n\t\t\t10.Marketing manager\n\t\t\t11.Businesss development\n\nEnter 0 to end adding preferences\n");
         scanf("\t\t\t%d",&usern[y].jo);
     }
     printf("\n\t\t\tDo you want to change type of job");
     scanf("%*c%c",&c);
     if(c=='Y'||c=='y')
     {
         printf("\n\t\t\tEnter new type\n\t\t\t1. Full Time\n\t\t\t2. Part Time\n\t\t\t3. Work from home\n");
         scanf("\t\t\t%d",&usern[y].type);
     }
     printf("\n\t\t\tDo you want to change skill");
     scanf("%*c%c",&c);
     if(c=='Y'||c=='y')
     {
         printf("\n\t\t\tEnter new skill\n\t\t\t1.Coding python\n\t\t\t2.Coding c\n\t\t\t3.Coding c++\n\t\t\t4.Coding Java\n\t\t\t5.Auto Cad\n\t\t\t6.Catia\n\t\t\t7.Ansys\n\t\t\t8.Java script\n\t\t\t9.Ms office\n\t\t\t10.Android Studio\n");
         scanf("\t\t\t%d",&usern[y].skill);
     }
     printf("\n\t\t\tDo you want to change city");
     scanf("%*c%c",&c);
     if(c=='Y'||c=='y')
     {

	 printf("\n\t\t\tEnter new city\n\t\t\t1.Bangaluru\n\t\t\t2.Chennai\n\t\t\t3.delhi\n\t\t\t4.mumbai\n\t\t\t5.kolkata\n\t\t\t6.hyderabad\n\t\t\tEnter 0 to end adding city\n");
	 scanf("%d",usern[y].city);
     }
     printf("Data edited Sucessfully");
     getch();
     return;
 }
 else
 printf("\n\t\t\tData not found");
 getch();
 return;
}
void payment()
{
    hm();
	int n,a,b,c;
	printf("\n\t\t\tWelcome to payment");
	printf("\t\t\tEnter the Amount :");
	scanf("%*c%[^\n]s",&usern[i].am);
	printf("\n\t\t\tPackage \n\t\t\t1.Basic\n\t\t\tFor 10 days of ad : Rs. 1000/-\n\t\t\t2.Medium\n\t\t\tFor 20 days of ad : Rs. 2000/-\n\t\t\t3.Advanced\n\t\t\tFor ad till recruitment : Rs. 5000/-\n\t\t\tEnter the Package :");
	scanf("%*c%c",&usern[i].pack);
	printf("\n\t\t\tEnter Payment mode :\n");
	printf("\t\t\t1.Credit Card\n\t\t\t2.Debit Card\n\t\t\t3.By Cash\n\t\t\tEnter the mode :");
	scanf("%*c%c",&usern[i].mod);
	if(usern[i].mod=='1'||usern[i].mod=='2')
    {
	printf("\n\t\t\tEnter the card number :");
	scanf("%d",&a);
	printf("\n\t\t\tEnter the expire month and year :");
	scanf("%d",&b);
	printf("\n\t\t\tEnter CVV :");
	scanf("%d",&c);
    }
	printf("\n\t\t\tPAYMENT DONE\n");
	getch();
}
void employer()
{
    int j=0,t,p;
    char user,c,ch;
    yu:hm();
    printf("\n\t\t\tEmployer\n");
    printf("\n\t\t\tSelect the option:\n\n\t\t\t1.Enter data\n\t\t\t2.Edit data\n\t\t\t3.display applier list\n\t\t\t0.Exit\n");
    scanf("\t\t\t%d",&p);
    switch(p)
    {
    	case 1:{out:i=m;
    printf("\t\t\t\tEnter the detail\n");
    printf("\n\t\t\tName of company:" );
    scanf("%*c%[^\n]s",&usern[i].comp);
    printf("\n\t\t\tName of user:");
    scanf("%*c%[^\n]s",&usern[i].name);
    printf("\n\t\t\tEnter your contact number:");
    scanf("%*c%[^\n]",usern[i].con);
    printf("\n\t\t\tEnter your email id:");
    scanf("%*c%[^\n]",&usern[i].emi);
    printf("\n\t\t\tpress number indicated in front to choose that stream:\n");
    printf("\t\t\tEnter the stream of job:\n");
    printf("\n\t\t\tset your job preferences:\n\n\t\t\t1.mechanical engineer\n\t\t\t2.machine design engineer\n\t\t\t3.aerospaced engineer\n\t\t\t4.civil engineer\n\t\t\t5.software developer\n\t\t\t6.web deveplor\n\t\t\t7.App developer\n\t\t\t8.Graphic Designer\n\t\t\t9.UX /UI designer\n\t\t\t10.Marketing manager\n\t\t\t11.Businesss development\n");
    scanf("\t\t\t%d",&usern[i].jo);
    printf("\n\t\t\tType:\n\t\t\t1. Full Time\n\t\t\t2. Part Time\n\t\t\t3. Work from home\n");
    scanf("\t\t\t%d",&usern[i].type);
    printf("\n\t\t\tCity\n\t\t\t1.Bangaluru\n\t\t\t2.Chennai\n\t\t\t3.Delhi\n\t\t\t4.Mumbai\n\t\t\t5.Kolkata\n\t\t\t6.Hyderabad\n");
    scanf("\t\t\t%d",&usern[i].city);
    printf("\n\t\t\tSkill\n\t\t\t1.Coding python\n\t\t\t2.Coding c\n\t\t\t3.Coding c++\n\t\t\t4.Coding Java\n\t\t\t5.Auto Cad\n\t\t\t6.Catia\n\t\t\t7.Ansys\n\t\t\t8.Java script\n\t\t\t9.Ms office\n\t\t\t10.Android Studio\n");
    scanf("\t\t\t%d",&usern[i].skill);
    payment();
    applier(i);
    m=i+1;
    printf("\n\t\t\tAdd another data:(y/n)");
	scanf("%*d");
	scanf("%c",&ch);
	if(ch=='y'||ch=='Y')
	{
		i++;
		hm();
	    goto out;
	}
	else{
			break;}
	}
	case 2 :{
		edit1();
		break;
	}
	case 3 :{
		old_employer();
		break;
	}
	case 0 :{
		return;
		break;
	}
	default : printf("\n\t\t\tYou have not entered correct key\n");
	}
	goto yu;

}
void edit2()
{
	hm();
    char user[120],c,t;
    int y,j,df;
  printf("\n\t\t\tEnter your job seeker name:");
  scanf("%*c%[^\n]s",&user);
   for(j=0;j<size;j++)
    {
        if(!(strcmp(user,job[j].name)))
           {
           	   df=1;
               y=j;
           }
    }
    if(df==1){

     printf("\n\t\t\tEnter y/Y for Yes and N/n for No\n");
     printf("\n\t\t\tDo you want to change contact number");
     scanf("%*c%c",&c);
     if(c=='Y'||c=='y')
     {
         printf("\n\t\t\tEnter new contact number");
         scanf("%*c%[^\n]s",job[y].contact);
     }
     printf("\n\t\t\tDo you want to change email id");
     scanf("%*c%c",&c);
     if(c=='Y'||c=='y')
     {
         printf("\n\t\t\tEnter new email id:");
         scanf("%*c%[^\n]s",&job[y].email);
     }
     printf("\n\t\t\tDo you want to change stream of job");
     scanf("%*c%c",&c);
     if(c=='Y'||c=='y')
     {
         printf("\n\t\t\tset your job preferences:\n\n\t\t\t1.mechanical engineer\n\t\t\t2.machine design engineer\n\t\t\t3.aerospaced engineer\n\t\t\t4.civil engineer\n\t\t\t5.software developer\n\t\t\t6.web deveplor\n\t\t\t7.App developer\n\t\t\t8.Graphic Designer\n\t\t\t9.UX /UI designer\n\t\t\t10.Marketing manager\n\t\t\t11.Businesss development\n\nEnter 0 to end adding preferences\n");
         j=0;
		 scanf("\t\t\t%d",&job[y].work[j]);
         j++;
		 while(job[y].work[j-1]!=0)
			   {
				scanf("\t\t\t%d",&job[y].work[j]);
				j++;
			   }
		job[y].skill_count=j;
     }
     printf("\n\t\t\tDo you want to change type of job");
     scanf("%*c%c",&c);
     if(c=='Y'||c=='y')
     {
         printf("\n\t\t\tEnter new type\n\t\t\t1. Full Time\n\t\t\t2. Part Time\n\t\t\t3. Work from home\n");
         j=0;
		 scanf("\t\t\t%d",&job[y].type[j]);
         j++;
		 while(job[y].type[j-1]!=0)
			   {
				scanf("\t\t\t%d",&job[y].type[j]);
				j++;
			   }
		job[y].type_count=j;
     }
     printf("\n\t\t\tDo you want to change skill");
     scanf("%*c%c",&c);
     if(c=='Y'||c=='y')
     {
         printf("\n\t\t\tEnter new skill\n\t\t\t1.Coding python\n\t\t\t2.Coding c\n\t\t\t3.Coding c++\n\t\t\t4.Coding Java\n\t\t\t5.Auto Cad\n\t\t\t6.Catia\n\t\t\t7.Ansys\n\t\t\t8.Java script\n\t\t\t9.Ms office\n\t\t\t10.Android Studio\n");
         j=0;
		 scanf("\t\t\t%d",&job[y].skill[j]);
         j++;
		 while(job[y].skill[j-1]!=0)
			   {
				scanf("\t\t\t%d",&job[y].skill[j]);
				j++;
			   }
		job[y].skill_count=j;
     }
     printf("\n\t\t\tDo you want to change city");
     scanf("%*c%c",&c);
     if(c=='Y'||c=='y')
     {
     	printf("\n\t\t\tEnter new set of cities\n\t\t\t1.Bangaluru\n\t\t\t2.Chennai\n\t\t\t3.delhi\n\t\t\t4.mumbai\n\t\t\t5.kolkata\n\t\t\t6.hyderabad\n\t\t\tEnter 0 to end adding city\n");
     	j=0;
		 scanf("\t\t\t%d",&job[y].city[j]);
         j++;
		 while(job[y].city[j-1]!=0)
			   {
				scanf("\t\t\t%d",&job[y].city[j]);
				j++;
			   }
		job[y].city_count=j;
	}
 }
 else
 printf("\n\t\t\tData not found");
}

void jos()
{
	int n,j;
	char ch;
	mark:printf("\n\t\t\tWelcome to job seeker");
	hm();
	printf("\n\n\t\t\tSelect the option:\n\n\t\t\t1.Enter data\n\t\t\t2.Edit data\n\t\t\t3.Remove data\n\t\t\t4.Put to recurited list\n\t\t\t0.Exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1 : {

			i=size;
			mark1:
			hm();
			printf("\n\t\t\tName:");
			scanf("%*d");
			gets(job[i].name);
			printf("\n\t\t\tgender:M/F");
			scanf("%*c%c",&job[i].gender);
			printf("\n\t\t\tcontact No:");
			scanf("%*c%[^\n]s",job[i].contact);
			printf("\n\t\t\temail:");
			scanf("%*d");
			gets(job[i].email);
			printf("\n\t\t\tName of college:");
			gets(job[i].edu3);
			printf("\n\n\t\t\tSelect yourskills:\n\n\t\t\t1.coding python\n\t\t\t2.coding c\n\t\t\t3.coding c++\n\t\t\t4.coding java\n\t\t\t5.Autocad\n\t\t\t6.catia\n\t\t\t7.ansys\n\t\t\t8.Java script\n\t\t\t9.Ms office\n\t\t\t10.Android stutio\n\n\t\t\tEnter 0 to end adding skills\n ");
		     j=0;
		   	scanf("%d",&job[i].skill[j]);
        	j++;
			while(job[i].skill[j-1]!=0)
			{
				scanf("\t\t\t%d",&job[i].skill[j]);
				j++;
			}
			job[i].skill_count=j;
			printf("\n\n\t\tSet your job preferences:\n\n\t\t\t1.mechanical engineer\n\t\t\t2.machine design engineer\n\t\t\t3.aerospaced engineer\n\t\t\t4.civil engineer\n\t\t\t5.software developer\n\t\t\t6.web deveplor\n\t\t\t7.App developer\n\t\t\t8.Graphic Designer\n\t\t\t9.UX /UI designer\n\t\t\t10.Marketing manager\n\t\t\t11.Businesss development\n\n\t\t\tEnter 0 to end adding preferences\n");
		    j=0;
		    scanf("%d",&job[i].work[j]);
        	j++;
			while(job[i].work[j-1]!=0)
			{
				scanf("\t\t\t%d",&job[i].work[j]);
				j++;
			}
			job[i].work_count=j;
			printf("\n\n\t\t\tChoose your preference type of work:\n\n\t\t\t1.full time\n\t\t\t2.part time\n\t\t\t3.work from home\n\n\t\t\tEnter 0 to end adding type\n");
			j=0;
		    scanf("%d",&job[i].type[j]);
        	j++;
			while(job[i].type[j-1]!=0)
			{
				scanf("\t\t\t%d",&job[i].type[j]);
				j++;
			}
			job[i].type_count=j;
			printf("\n\n\t\t\tinterested cities to work:\n\n\t\t\t1.Bangaluru\n\t\t\t2.Chennai\n\t\t\t3.delhi\n\t\t\t4.mumbai\n\t\t\t5.kolkata\n\t\t\t6.hyderabad\n\t\t\tEnter 0 to end adding city\n");
		    j=0;
		    scanf("%d",&job[i].city[j]);
        	j++;
			while(job[i].city[j-1]!=0)
			{
				scanf("\t\t\t%d",&job[i].city[j]);
				j++;
			}
			job[i].city_count=j;
			job[i].rec=0;
			size=i+1;
			printf("\n\t\t\tAdd another data:(y/n)");
			scanf("%*d");
			scanf("%c",&ch);
			if(ch=='y'||ch=='Y')
		    	{
		    		hm();
				goto mark1;
			}
			else{
			break;}
		}
		case 2 : {
			edit2();
			break;
		}
		case 3 : {
		    hm();
		    char nm[50];
		    int datafound=0,i;
			printf("\n\t\t\tEnter job seeker name:");
			scanf("%*d");
			gets(nm);
			for(i=0;i<size;i++)
			{
			if(strcmp(job[i].name,nm)==0)
			{
			datafound=1;
            break;
            }
            }
            if(datafound==1)
            {
            	for(j=i;j<size;j++)
            	{
            		job[j]=job[j+1];

				}
				printf("\n\t\t\tData has been sucessfully deleted ");
				scanf("%*c");

			}
			else
			{
				printf("\n\t\t\tData not found");
				scanf("%*c");
			}
			break;
		}
		case 4 :{hm();
			char nm[50];
		    int datafound=0,i;
			printf("\n\t\t\tEnter Job seeker name:");
			scanf("%*d");
			gets(nm);
			for(i=0;i<size;i++)
			{
			if(strcmp(job[i].name,nm)==0)
			{
			datafound=1;
            break;
            }
            }
            if(datafound==1)
            {
            	job[i].rec=1;
            	printf("\n\t\t\tadded to recrucited list sucessfully");
            	scanf("%*c");
			}
			else{
			printf("\n\t\t\tData not found");
			scanf("%*c");
		}
			break;
		}
		case 0 :{
			return ;
		}
		default : printf("\n\t\t\tYou have not entered correct key\n");
	}
	goto mark;
}
void jol()
{
	hm();
	printf("\n\t\t\tWelcome to job listing");
char nm[50],*tem1,*tem2,*tem3;
 int datafound=0,i,j,k,l,n,p,prt,q;
printf("\n\t\t\tEnter emplyee name:");
scanf("%*d");
gets(nm);
for(i=0;i<size;i++)
{
if(strcmp(job[i].name,nm)==0)
{
datafound=1;
break;
}
}
if(datafound==1)
{
	for(j=0;j<m;j++)
	{
		for(k=0;k<job[i].skill_count;k++)
		{
			if(job[i].skill[k]==usern[j].skill)
			{
				for(l=0;l<job[i].work_count;l++)
				{
					if(job[i].work[l]==usern[j].jo)
					{
						for(n=0;n<job[i].type_count;n++)
						{
							if(job[i].type[n]==usern[j].type)
							{
								for(p=0;p<job[i].city_count;p++)
								{
									if(job[i].city[p]==usern[j].city)
									{
										prt=1;
										break;
									}
								}
								break;
							}
						}
						break;
					}
				}
			break;
			}
		}
		if(prt==1)
		{
			switch(usern[j].jo)
			{
				case 1 : {tem1="mechanical engineer";
				          break;}
				case 2 :{
					tem1="machine design";
					break;
				}
				case 3 :{
					tem1="aerospace engineer";
					break;
				}
				case 4 :{
					tem1="civil engineer";
					break;
				}
				case 5 :{
					tem1="software developer";
					break;
				}
				case 6 :{
					tem1="web developer";
					break;
				}
				case 7 :{
					tem1="app developer";
					break;
				}
				case 8 :{
					tem1="graphic design";
					break;
				}
				case 9 :{
					tem1="Ux/Ui design";
					break;
				}
				case 10 :{
					tem1="Marketing manger";
					break;
				}
				case 11 :{
					tem1="business development";
					break;
				}
			}
				switch(usern[j].type)
			{
				case 1 : {tem2="full time";
				          break;}
				case 2 :{
					tem2="part time";
					break;
				}
				case 3 :{
					tem2="work from home";
					break;
				}

			}
				switch(usern[j].city)
			{
				case 1 : {tem3="Bangaluru";
				          break;}
				case 2 :{
					tem3="Chennai";
					break;
				}
				case 3 :{
					tem3="Delhi";
					break;
				}
				case 4 :{
					tem3="Mumbai";
					break;
				}
				case 5 :{
					tem3="Kolkata";
					break;
				}
				case 6 :{
					tem3="Hyderabad";
					break;
				}

			}
			printf("\n\t\t\tcompany name:%s\n\t\t\tContact no:%s\n\t\t\tEmail id:%s\n\t\t\tWork:%s\n\t\t\tType:%s\n\t\t\tCity:%s\n",usern[j].comp,usern[j].con,usern[j].emi,tem1,tem2,tem3);
			prt=0;
		}
	}
	getch();
 }
 else{
 	printf("\n\t\t\tData not found ");
 	scanf("%*c");
 }
 return;
}
void user()
{
	int n;
	userg:hm();
	printf("\n\t\t\tChoose the option\n\t\t\t1.Employer\n\t\t\t2.Job seeker\n\t\t\t3.Job listing\n\t\t\t0.Exit\n\t\t\tEnter the type of User :");
	scanf("%d",&n);
	switch(n)
	{
		case 1 :
			{
				employer();
				break;
			}
		case 2 :
			{
				jos();
				break;
			}
		case 3 :
			{
				jol();
				break;
			}
		case 0 :{
			return;
		}
		default : {
			printf("\t\t\tYou have entered wrong Choice");
			break;
		}
	}
	goto userg;
}
void welcomeMessage()
{
    hm();
    printf("\n\n\n\n\n");
    printf("\n\t\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t\t        =                  WELCOME                  =");
    printf("\n\t\t\t\t        =                    TO                     =");
    printf("\n\t\t\t\t        =                 Job Agency                =");
    printf("\n\t\t\t\t        =                 MANAGEMENT                =");
    printf("\n\t\t\t\t        =                   SYSTEM                  =");
    printf("\n\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n\t\t\t\t Enter any key to continue.....");
    getch();
}
void load()
{
	int j,l;
	jp=fopen("job.txt","r");
	if(jp!=NULL)
	{
		i=0;
		while(!feof(jp))
		{
			fscanf(jp,"%s %c %s\n%s %s",job[i].name,&job[i].gender,&job[i].contact,job[i].email,job[i].edu3);
			 j=0;
		   	fscanf(jp,"\n%d",&job[i].skill[j]);
        	j++;
			while(job[i].skill[j-1]!=0)
			{
				fscanf(jp," %d",&job[i].skill[j]);
				j++;
			}
			job[i].skill_count=j;
			j=0;
		    fscanf(jp,"\n%d",&job[i].work[j]);
        	j++;
			while(job[i].work[j-1]!=0)
			{
				fscanf(jp," %d",&job[i].work[j]);
				j++;
			}
			job[i].work_count=j;
			j=0;
		    fscanf(jp,"\n%d",&job[i].type[j]);
        	j++;
			while(job[i].type[j-1]!=0)
			{
				fscanf(jp," %d",&job[i].type[j]);
				j++;
			}
			job[i].type_count=j;
			j=0;
		    fscanf(jp,"\n%d",&job[i].city[j]);
        	j++;
			while(job[i].city[j-1]!=0)
			{
				fscanf(jp," %d",&job[i].city[j]);
				j++;
			}
			job[i].city_count=j;
			fscanf(jp,"\n%d\n",&job[i].rec);
			size=i+1;
			i++;
		}
		fclose(jp);
	}
	else
	w=0;

	ep=fopen("employer.txt","r");
	if(ep!=NULL)
	{
		i=0;
		while(!feof(ep))
		{
			fscanf(ep,"%s %s %s %s %d %d %d %d\n",usern[i].comp,usern[i].name,usern[i].con,usern[i].emi,&usern[i].jo,&usern[i].skill,&usern[i].type,&usern[i].city);
			m=i+1;
			i++;
		}
		fclose(jp);

	}
	else
	o=0;
    pp=fopen("pay.txt","r");
	if(pp!=NULL)
    {
    i=0;
	while(!feof(pp))
	{
		fscanf(pp,"%4s\n%c %c\n",usern[i].am,&usern[i].pack,&usern[i].mod);

	    i++;
	}
	fclose(pp);
    }
}
void upload()
{
	int j;
	char temp;
	jp=fopen("job.txt","w");
	{
		i=0;
		while(i<size)
		{
			fprintf(jp,"%s %c %s\n%s %s",job[i].name,job[i].gender,job[i].contact,job[i].email,job[i].edu3);
			 j=0;
		   	fprintf(jp,"\n%d",job[i].skill[j]);
        	j++;
			while(j<job[i].skill_count)
			{
				fprintf(jp," %d",job[i].skill[j]);
				j++;
			}
			j=0;
		    fprintf(jp,"\n%d",job[i].work[j]);
        	j++;
			while(j<job[i].work_count)
			{
				fprintf(jp," %d",job[i].work[j]);
				j++;
			}
			j=0;
		    fprintf(jp,"\n%d",job[i].type[j]);
        	j++;
			while(j<job[i].type_count)
			{
				fprintf(jp," %d",job[i].type[j]);
				j++;
			}
			j=0;
		    fprintf(jp,"\n%d",job[i].city[j]);
        	j++;
			while(j<job[i].city_count)
			{
				fprintf(jp," %d",job[i].city[j]);
				j++;
			}
			fprintf(jp,"\n%d\n",job[i].rec);
			i++;
		}
		fclose(jp);
	}
	ep=fopen("employer.txt","w");
	{
		i=0;
		while(i<m)
		{
			fprintf(ep,"%s %s %s %s %d %d %d %d\n",usern[i].comp,usern[i].name,usern[i].con,usern[i].emi,usern[i].jo,usern[i].skill,usern[i].type,usern[i].city);
			i++;
		}
		fclose(ep);
	}
	pp=fopen("pay.txt","w");
	i=0;
	while(i<m)
	{
		temp=usern[i].pack;
		printf("%c",usern[i].pack);
		fprintf(pp,"%s\n%c %c\n",usern[i].am,temp,usern[i].mod);
	    i++;
	}
	fclose(pp);
	return;

}
void login()
{
	hm();
	int L=0,n,j,l;
	char a[30], b[30],*tem1,*tem2;
	printf("\n\n\n\t\t\t------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\t\tLogin Screen");
	printf("\n\n\t\t\t------------------------------------------------------------------------------------------------");
	do
	{
		printf("\n\t\t\t\tEnter Username and Password");

		printf("\n\t\t\t\tUsername:");
		scanf("%*c%[^\n]s" ,a);

		printf("\n\t\t\t\tPassword:");
		scanf("%*c%[^\n]s" ,b);
		if((strcmp(a,"xyz")==0)&& (strcmp(b,"xyz")==0))
		{
			printf("\n\t\t\t\tLogged Into System.");
			break;
		}
		else
		{

			printf("\t\t\t\tLogin Failed Enter Again Username & Password Again\n\n");
			L++;
		}
	}while(L<=3);
	if(L>3){
		hm();
		printf("\t\t\t\tSorry,Unknown User.");
		return;
	}

		hm();
		printf("\n\n\n\t\t\t------------------------------------------------------------------------------------------------\n");
	    printf("\t\t\t\t\tJob Seeker Details");
	    printf("\n\n\t\t\t------------------------------------------------------------------------------------------------");
		i=0;
		printf("\n\t\t\tName                Gender      Contact             Email           College     Recruited\n");
		printf("\t\t\t------------------- -------- ------------- ------------------- ---------------- --------------\n");

		while(i<size)
		{
			switch(job[i].rec)
			{
				case 1 : {tem1="YES";
				          break;}
				case 0 :{
					tem1="NO";
					break;
				}
			}

		  printf("\t\t\t%-20s%6c%15s%18s%17s%8s\n",job[i].name,job[i].gender,job[i].contact,job[i].email,job[i].edu3,tem1);
			i++;
		}
		printf("\t\t\tEnter any key....");
		getch();
		hm();
		printf("\n\n\n\t\t\t------------------------------------------------------------------------------------------------\n");
	    printf("\t\t\t\t\tEmployer Details");
	    printf("\n\n\t\t\t------------------------------------------------------------------------------------------------");
		printf("\n\t\t\tCompany Name               Employer          Contact              Email\n");
		printf("\t\t\t--------------------- ---------------- ----------------- -----------------\n");
		for(j=0;j<m;j++)
		{

			printf("\t\t\t%-20s%15s%15s%18s\n",usern[j].comp,usern[j].name,usern[j].con,usern[j].emi);
		}
		printf("\t\t\tEnter any key....");
		getch();
		hm();
	    printf("\n\n\n\t\t\t------------------------------------------------------------------------------------------------\n");
	    printf("\t\t\t\t\tPayment Details");
	    printf("\n\n\t\t\t------------------------------------------------------------------------------------------------");
		printf("\n\t\t\tCompany Name               Employer          Package              Mode of Pay Amt\n");
		printf("\t\t\t--------------------- ---------------- ----------------- ---------------------- ----------\n");
		for(j=0;j<m;j++)
		{
			switch((usern[j].pack))
			{
				case '1' : {tem1="BASIC";
				          break;}
				case '2' :{
					tem1="MEDIUM";
					break;
				}
				case '3' :{
					tem1="ADVANCED";
					break;
				}
			}
			switch((usern[j].mod))
			{
				case '1' : {tem2="Credit card";
				          break;}
				case '2' :{
					tem2="Debit card";
					break;
				}
				case '3' :{
					tem2="By Cash";
					break;
				}
			}
			l=strlen(usern[j].am);
			usern[j].am[l-2]='\0';
		   printf("\t\t\t%-20s%15s%18s%26s %4s\n",usern[j].comp,usern[j].name,tem1,tem2,usern[j].am);
		}
		printf("\t\t\tEnter any key....");
		getch();

}
void main()
{
	int n,e;
	welcomeMessage();
	load();
	mai:hm();
	printf("\n\t\t\tChoose Option:\n\t\t\t1.Admin\n\t\t\t2.User\n\t\t\t0.Exit\n\t\t\tEnter :");
	scanf("\t\t\t%d",&n);
	switch(n)
	{
		case 1 :{
			login();
			break;
		}
		case 2 :{
			user();
			break;
		}
		case 0 :{upload();
			e=1;
			break;
		}
		default : {
			printf("\t\t\tYou have entered wrong choice");
			break;
		}

	}
	if(e!=1)
	goto mai;

}

