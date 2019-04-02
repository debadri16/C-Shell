#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main(){
int x,i;
char p[100],e[100];
strcat(p,"");
strcat(e,"exit");
while(1){
printf("> ");
char *cmd[100];
gets(p);
if(strcmp(p, e)==0)
 break;
cmd[0]=p;

cmd[1] = (char *)0;


system(p);
}
return(0);
}
