#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int seconds;

    // Prompt the user for the timer duration
    printf("Enter the timer duration in seconds: ");
    scanf("%d", &seconds);

    // Notify the user that the timer has started
    printf("Timer set for %d seconds. Waiting...\n", seconds);

    // Wait for the specified duration
    sleep(seconds);

    // Notify when time is up
    printf("Time's up!\n");

    // If KDE Plasma is running, send a desktop notification
    system("notify-send 'Timer' 'Time is up!'");

    // Play a sound (ensure the file exists)
    system("paplay /usr/share/sounds/freedesktop/stereo/alarm-clock-elapsed.oga");

    return 0;
}
