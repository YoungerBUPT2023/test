#include<stdio.h>
#define STLEN 10
int main()
{
    char words[STLEN];

    fputs("请输入一句话：",stdout);
    while(fgets(words,STLEN,stdin)!=NULL && words[0]!='\n')
    fputs(words,stdout);
    puts("DONE!");
}