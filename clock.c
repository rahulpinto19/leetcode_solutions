#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<unistd.h>
int main()
{
    system("cls");
    double i;
    int h,m,s;
//    textbackground(GREEN);
  //  printf("enter the current time");
//    scanf("%d %d %d",&h,&m,&s);
    h=6;
    m=46;
    s=50;
    start:
    for(h;h<24;h++)
    {
        for(m;m<60;m++)
        {
            for(s;s<60;s++)
            {
            system("cls");
            printf("%02d:%02d:%02d\n",h,m,s);
            sleep(1);
            }
            s=0;
        }
        m=0;
    }
    h=0;
    goto start;
    //getch();
}