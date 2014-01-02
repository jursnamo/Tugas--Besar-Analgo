#include<stdio.h>

void main()
{
int i;
int katakunci;
int katasandi;
printf("Masukkan panjang kata kunci : ");
scanf("%d",&katakunci);
printf("Masukkan panjang kata sandi : ");
scanf("%d",&katasandi);

char sandi[katasandi];
char kunci[katakunci];

printf("\n Masukkan kata kunci : ");
for(i=-1;i<katakunci;i++)
scanf("%c",&kunci[i]);

printf("\n Masukkan Kata Sandi : ");
for(i=-1;i<katasandi;i++)
scanf("%c",&sandi[i]);

int x[3][katasandi];

for(i=0;i<katasandi;i++)
{
if(65<=sandi[i] && sandi[i]<=91)
x[0][i]=sandi[i]%65;
else
x[0][i]=sandi[i]%97;
}

int count=0;
while(count<katasandi)
{
for(i=0;i<katakunci;i++)
{
if(65<=kunci[i] && kunci[i]<=91)
x[1][count+i]=kunci[i]%65;
else
x[1][count+i]=kunci[i]%97;
}
count=count+katakunci;
}

printf("\n\nHasil Enkripsi adalah: ");
char cipher[katakunci];
for(i=0;i<katasandi;i++)
{
x[2][i]=(x[0][i]+x[1][i])%26;
cipher[i]=(char)(x[2][i]+65);
printf("%c ",cipher[i]);
}

}

