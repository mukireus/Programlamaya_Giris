//MUHAMMET ÖMER
//LANGUAGE : C

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int main(){
    int a,b,c,d;
    srand(time(NULL));
    for(a=1;a<=100;a++){
    	b=rand()%10;
        c=rand()%10;
        printf("%d*%d= ",b,c);
        scanf("%d",&d);
		if (d==b*c)
		{
		    printf("aferin, dogru... \n");
		}
		else
		{
			printf("bilemedin...");
			break;
		}
	}
    getch();
}
