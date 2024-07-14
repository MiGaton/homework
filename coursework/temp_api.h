#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define SIZE_BUF 6
#define YEAR 2021
#define N_MONTH 12
#define N_YEAR 1
#define SIZE_FILENAME 255




enum IndexArrBuf{year, month, day, hour, min, temp};
enum LimitTest{
    year_min=2000,
    year_max=3000,
    month_max=12,
    month_min=1,
    day_max=31,
    day_min=1,
    hour_max=23,
    hour_min=0,
    min_max=59,
    min_min=0,
    temp_min=-99,
    temp_max=99,
};

typedef struct ListSensor{
    unsigned int year;
    unsigned int month;
    unsigned int day;
    unsigned int hour;
    unsigned int min;
    int t;
    struct ListSensor* next;
} ListSensor;


float Average_TempMonth();
int Min_TempMonth();
int Max_TempMonth ();
float Average_TempYear();
int Min_TempYear();
int Max_TempYear ();
void ArrClean();
int TestArr();
ListSensor* Add_ListSensor ();
ListSensor* Read_ListSensor ();
ListSensor* Load_DataListSensor ();
void Print_AllStatistic();
void Print_StatisticMonth();
void Free_ListSensor ();