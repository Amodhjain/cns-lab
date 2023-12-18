#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
char plain[20],cipher[20];
int i,key,length=strlen(plain),result;
printf("enter the plain text:\n");
scanf("%s",plain);
printf("enter the key:\n");
scanf("%d",&key);
printf("the plain text is:%s\n",plain);
printf("encrypted text:");
for(i=0;i<length;i++)
{
	cipher[i]=plain[i]+key;
	if(isupper(plain[i]) && (cipher[i]>'Z'))
	cipher[i]=cipher[i]-26;
	if(islower(plain[i]) && (cipher[i]>'z'))
	cipher[i]=cipher[i]-26;
	printf("%c",cipher[i]);
}
printf("\n");
printf("After descryption:");
for(i=0;i<=length;i++)
{
	plain[i]=cipher[i]-key;
	if(isupper(cipher[i]) && (plain[i]<'A'))
	plain[i]=plain[i]+26;
	if(isupper(cipher[i]) && (plain[i]<'a'))
	plain[i]=plain[i]+26;
	printf("%c",plain[i]);
}
}

