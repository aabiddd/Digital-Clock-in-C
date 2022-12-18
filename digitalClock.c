#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int hour, minute, second;
    int delay = 1000;
    printf("Set Time: \n");
    scanf("%i%i%i", &hour, &minute, &second);
    if (hour > 12 || minute > 60 || second > 60)
    {
        printf("ERROR!! \n");
        exit(0);
    }
    while(1)
    {
        second++;
        if (second > 59)
        {
            minute++;
            second = 0;
        }
        if (minute > 59)
        {
            hour++;
            minute = 0;
        }
        if (hour > 11)
        {
            hour = 0;
        }
        printf("\n Clock: ");
        printf("\n %02i:%02i:%02i", hour, minute, second);
        Sleep(delay);
        system("cls");
    }

    printf("Hello word");
}