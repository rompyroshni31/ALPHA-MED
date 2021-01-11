#include<stdio.h>
int main{
    int a,b,c,d;
    scanf(%d %d %d %d,&a &b &c &d);
    a=a++;
    b=b--;
    c=c++;
    d=d++;
    printf(%d %d %d %d,a b c d);
    return 0;
}