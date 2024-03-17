#include<stdio.h>

void main(int argc,char **argv)
{
    FILE *fp1,*fp2;
    char ch;
    int pos;
    if ((fp1 = fopen (argv[1],"r"))==NULL)

{

printf("\nfile cannot be opened");
return ;

} 

else
{
    printf("\nfile opened for copy \n");

}
fp2 = fopen(argv[2],"w");
fseek(fp1, OL , SEEK_END);
pos =ftell(fp1);
fseek(fp1, OL , SEEK_SET);
while (pos--)
{
    ch= fgetc(fp1);
    fputc(ch,fp2);
}

fcloseall();


}
