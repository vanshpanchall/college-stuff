#include<stdio.h>
#include<stdlib.h>
struct threreNum
{
int n1, n2, n3;	
};
int main()
{
int n;
struct threeNumnum;
FILE* fptr;
if ((fptr=fopen("C:\\program.bin","wb"))==NULL)
{
	printf("Error! opening file");
	exit(1);
}
for (n=1; n<5;n++)
{
	num.n1=n;
	num.n2=5*n;
	num.n3=5*n+1;
	fwrite(&num,sizeof(struct threeNum),1,fptr);
}
fclose(fptr);
return 0;
}
