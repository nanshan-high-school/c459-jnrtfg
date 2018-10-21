#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char** argv) 
{
	char word[10];
	int N,b,store[10],pos,TestN,ans,looklike;
	scanf("%d",&b);
	scanf("%s",word);
	looklike=strtol(word,NULL,10);
	N=strtol(word,NULL,b);
	TestN=looklike;
	for(int i=1;i<=10;i++)
	{
		if(TestN/10>0)
		{
			pos++;
			TestN=TestN/10;
		}
		else
		{
			break;
		}
	}
	TestN=looklike;
	pos++;
	for(int i=pos;i>=1;i--)
	{
		TestN=TestN*10;
		for(int j=i;j>=1;j--)
		{
			TestN=TestN/10;
		}
		TestN=TestN%10;
		store[i]=TestN;
		TestN=looklike;
	}
	for(int i=1;i<=pos;i++)
	{
		ans=ans+pow(store[i],pos);
	}
	if(ans==N)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	return 0;
}
