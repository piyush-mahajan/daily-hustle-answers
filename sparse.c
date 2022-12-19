// https://www.hackerrank.com/challenges/sparse-arrays/problem
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void matchingString(char **stringList,int n,char**queries,int q)
{
    int result[q],i,j;
    for(i=0;i<=q-1;i++)
    {
        result[i]=0;
    }
    for(i=0;i<=q-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if((strcmp(queries[i],stringList[j])) == 0) result[i] = result[i]+1;
        }
    }
    for(i=0;i<=q-1;i++)
    {
        printf("%d\n",result[i]);
    }
}
int main() {
    int n,q,i;
    char **stringList,**queries;
    scanf("%d",&n);
    stringList = (char **) malloc(n * sizeof(char *));
    for(i=0;i<=n-1;i++)
    {
        stringList[i] = (char *) malloc(n * sizeof(char));
        scanf("%s",stringList[i]);
    }
    scanf("%d",&q);
    queries = (char **) malloc(q * sizeof(char *));
    for(i=0;i<=q-1;i++)
    {
        queries[i] = (char *) malloc(q * sizeof(char));
        scanf("%s",queries[i]);
    }
    matchingString(stringList,n,queries,q);
    return 0;
}