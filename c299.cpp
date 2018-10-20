#include <iostream>



int main(int argc, char** argv)
{
	int n,m[1000],T;
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++)
	{
		if(i!=n-1)
		{
			scanf("%d ",&m[i]);
		}
		else
		{
			scanf("%d",&m[i]);
		}
	}
	for(int j=0;j<=n-1;j++)
	{
		for(int k=j;k<=n-1;k++)
		{
			if(m[k]<m[j])
			{
				T=m[k];
                m[k]=m[j];
                m[j]=T;
			}
		}
	}
	for(int o=0;o<=n-2;o++)
	{
		if(m[o]+1!=m[o+1])
		{
			printf("%d %d no",m[0],m[n-1]);
			break;
		}
		else
		{
			if(o==n-2)
			{
				printf("%d %d yes",m[0],m[n-1]);
				break;
			}
		}
	}
	return 0;
}