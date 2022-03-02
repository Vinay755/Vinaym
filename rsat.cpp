#include<stdio.h>
//#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;
int cal(unsigned int x,unsigned int y, unsigned int n ) {
    unsigned long int k=1;
    int j;
    for(j=0;j<y;j++) k= (k*x)%n;
    return (unsigned int) k;
}
int main(){

    char msg[100];
    unsigned int pt[100],ct[100], n, e;

   printf("Enter input text \t");
    scanf("%s",msg);

    for(int i=0;i<strlen(msg);i++)pt[i]=msg[i];

    n=253;
    e=13;
    int d=17;
    printf("\nThe cipher text is\n");
    for(int i=0;i<strlen(msg);i++)ct[i]=cal(pt[i],e,n);
    for(int i=0;i<strlen(msg);i++)printf("%d",ct[i]);
    printf("\nThe Plain text is\n");
    unsigned int pt1[100];

    for(int i=0;i<strlen(msg);i++)pt1[i]=cal(ct[i],d,n);

    for(int i=0;i<strlen(msg);i++)printf("%c",pt1[i]);


return 0;}
