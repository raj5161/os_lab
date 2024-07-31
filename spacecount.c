#include <stdio.h>
int main(){
int sc=0;
char ch;
FILE* fp;
fp=fopen("spacecount.txt","r");
if (fp== NULL) {
        printf("The file is not opened. The program will "
               "now exit. \n");
                     }
else {
        printf("The file is created Successfully. \n");
    }
while((ch=fgetc(fp))!=EOF){

if(ch=='i'){
sc=sc+1;}
}
fclose(fp);
printf("the number of spaces is: %d \n",sc);

return 0;
}

