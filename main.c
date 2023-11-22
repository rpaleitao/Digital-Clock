#include <stdio.h>
#include <windows.h>

int main(){
    int h, m, s;
    //miliseconds increment
    int t = 1000; 

    printf("Set time: ");
    scanf("%d%d%d", &h, &m, &s);

    if(h > 12 || h < 1 || m > 60 || m < 0 || s > 60 || s < 0){
        printf("Error, please set a valid time!!");
        exit(0);
    }

    while(1){
        s++;
        if(s > 59){
            m++;
            s = 0;
        }
        if(m > 59){
            h++;
            m = 0;
        }
        if(h > 12){
            h = 1;
        }

        printf("\n Digital Clock: ");
        //00:00:00
        printf("\n %02d : %02d : %02d", h, m, s);
        //slows down the loop to match the correct time
        Sleep(t);
        //Clear the screen
        system("cls");
    }

    return 0;
}
