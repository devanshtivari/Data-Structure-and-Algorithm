#include<stdio.h>
#include<conio.h>
#include<windows.h>

void gotoxy(int x, int y) {
static HANDLE h = NULL;
if(!h) h = GetStdHandle(STD_OUTPUT_HANDLE);
COORD c = { x, y };
SetConsoleCursorPosition(h,c);
}

int main()
{
    printf("Enter number of inputs : ");
    int times;
    scanf("%d",&times);
    int arr[times];
    printf("Enter names-\n");
    for(int i=0 ; i <times ; i++){
        scanf("%c",&arr[i]);
    }
    int init_x=60;int init_y=2;int final_x = 93;int final_y=times*2+1+init_y;
    gotoxy(init_x,init_y);
    printf("%c",218);int i=0;
    for(int  y=init_y+1 ; y <final_y ; y++){
        gotoxy(init_x,y);
        printf("%c",179);
        if(y%2 == 0){
            gotoxy(init_x+2,y);
            printf("-> %d",arr[i]);
            i++;
        }
    }
    gotoxy(init_x,final_y);
    printf("%c",192);
    for(int x=init_x+1;x<final_x ; x++){
        gotoxy(x,final_y);
        printf("%c",196);
    }
    gotoxy(final_x,final_y);
    printf("%c",217);
    for(int y=final_y-1;y>init_y;y--){
        gotoxy(final_x,y);
        printf("%c",179);
    }
    gotoxy(final_x,init_y);
    printf("%c",191);
    for(int x=final_x-1;x>init_x;x--){
        gotoxy(x,init_y);
        printf("%c",196);
    }
}
