#include <stdio.h>

struct time{
    int hours;
    int minutes;
    int seconds;
}clock;

struct time split_time(long long int totalSeconds){
    clock.hours=totalSeconds/3600;
    clock.hours%=24;
    totalSeconds%=3600;
    clock.minutes=totalSeconds/60;
    totalSeconds%=60;
    clock.seconds=totalSeconds;

    return clock;
}


int main()
{
    long long int totalSeconds;
    printf("Enter totalSeconds (from midnight) : ");
    scanf("%lld",&totalSeconds);
    //convert it to hh:mm:ss and print it in this form
    clock=split_time(totalSeconds);
    printf("\n%02d:%02d:%02d",clock.hours,clock.minutes,clock.seconds);
    return 0;
}

