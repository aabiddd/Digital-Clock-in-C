#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main() {
    int hr, min, sec;
    int delay = 1000;

    printf("Enter initial Time:\n");
    printf("Hour: ");
    scanf("%d", &hr);
    printf("Minute: ");
    scanf("%d", &min);
    printf("Second: ");
    scanf("%d", &sec);

    if (hr > 12 || min > 60 || sec > 60) {
        printf("Invalid Time Entered!\n");
        exit(0);
    }

    while (1) {
        sec++;
        if (sec > 59) {
            min++;
            sec = 0;
        }
        if (min > 59) {
            hr++;
            min = 0;
        }
        if (hr > 11) {
            hr = 0;
        }

        printf("\nCurrent Time: \n");
        printf("%02d:%02d:%02d", hr, min, sec); 
        Sleep(delay);
        system("cls");
    }
    return 0;        
}
