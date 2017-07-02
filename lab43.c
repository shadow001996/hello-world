#include<stdio.h>
int main()
{
	char title[50];
	struct student{
		char name[50];
		int roll;
		int gpa;
	}e;
	long int recsize;
	recsize=sizeof(e);
	printf("enter the name of the file you want to create: ");
	gets(title);
	FILE* fp;
	fp=fopen(title,"wb+");
	if(fp==NULL)
	{
		printf("file cannot be opened");
		exit(1);
	}
	char another;
	another='y';
	while(another=='y')
	{
		printf("enter the name,roll and gpa of the student: ");
		scanf("%s %d %d",&e.name,&e.roll,&e.gpa);
		fwrite(&e,recsize,1,fp);
		printf("y/n");
		another=getche();
			fflush(stdin);
	}
	rewind(fp);
	while(fread(&e,recsize,1,fp)==1)
	printf("\n %s %d %d",e.name,e.roll,e.gpa);
	rewind(fp);
	char stname[50];

		printf("\n enter the name of the student whose details are to be edited: ");
		scanf("%s",&stname);
		while(fread(&e,recsize,1,fp)==1)
		{
			if(strcmp(e.name,stname)==0)
			{
				printf("enter new details: \n");
				scanf("%s %d %d",&e.name,&e.roll,&e.gpa);
				fseek(fp,-recsize,SEEK_CUR);
				fwrite(&e,recsize,1,fp);
				break;
				
				
			}
		}
		printf("modified list is: ");
		
		rewind(fp);
	while(fread(&e,recsize,1,fp)==1)
	printf("\n %s %d %d",e.name,e.roll,e.gpa);
	
	fclose(fp);
	
	return 0;
}
