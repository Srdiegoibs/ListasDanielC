/* 3) Fazer um programa para calcular o número de dias decorridos entre duas datas
(considerar também a ocorrência de anos bissextos e o número correto de dias de cada
mês). */
#include <stdio.h>

typedef struct _date
{
    int day;
    int month;
    int year;
} date;

void initializeDate(date *ptr, int day, int month, int year)
{
    ptr->day = day;
    ptr->month = month;
    ptr->year = year;
}

int isLeapYear(int year)
{
    return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}

int countLeapYears(int year)
{
    return (year / 4) - (year / 100) + (year / 400);
}

unsigned long long dateToSeconds(date d)
{
    unsigned long long total = 0LL;

    total += (d.year - 1) * 31536000LL;
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int month = 0; month < d.month; month++)
        total += months[month - 1] * 86400LL;

    total += (d.day - 1) * 86400LL;

    int extraDays = countLeapYears(d.year - 1);
    total += extraDays * 86400LL;

    if (isLeapYear(d.year) && (d.month - 1) >= 2)
        total += 86400LL;

    return total;
}

unsigned long long calculateDifferenceInSeconds(date d1, date d2)
{
    unsigned long long secondsD1 = dateToSeconds(d1);
    unsigned long long secondsD2 = dateToSeconds(d2);

    if (secondsD1 > secondsD2)
        return secondsD1 - secondsD2;
    else
        return secondsD2 - secondsD1;
}

unsigned long long calculateDifferenceInDays(date d1, date d2)
{
    unsigned long long seconds = calculateDifferenceInSeconds(d1, d2);
    return seconds / 86400LL;
}

int main()
{
    date d1, d2;
    initializeDate(&d1, 22, 2, 1993);
    initializeDate(&d2, 22, 4, 2022);

    printf("%llu\n", calculateDifferenceInDays(d1, d2));

    return 0;
}