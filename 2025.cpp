#include <stdio.h>
#include <string.h>
int main ()
{

	char a,b,n,i,j;
	char ch[200],ch1[200];
	while (scanf ("%s",ch)!=EOF)
	{
		strcpy (ch1,ch);
		int len=strlen(ch);
		for (i=0;i<len;i++)
		for (j=0;j<len-i;j++)
		{
			if (ch[j]<ch[j+1])
			{ n=ch[j];ch[j]=ch[j+1];ch[j+1]=n;}
		}
		for (i=0;i<len;i++)
		{
			printf("%c",ch1[i]);
			if (ch1[i]==ch[0])
				printf("(max)");
		}
		printf("\n");

	}
			
	return 0;
}