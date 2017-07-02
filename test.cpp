#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	int n1,n2,n3;
	string name1,name2,name3;
	printf("enter the first string");
	getline(cin,name1);
	printf("enter the second string");
	getline(cin,name2);
	printf("enter the third string");
	getline(cin,name3);
    n1=sizeof(name1);
    n2=sizeof(name2);
    n3=sizeof(name3);
    int n;
    n=n1+n2+n3;
    char* p[n];
    p=name1;
    p=strcat(p,name2);
    p=strcat(p,name3);
    printf("%s",p);
    return 0;
}
