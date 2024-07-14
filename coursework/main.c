
#include "temp_api.h"


int main (int argc, char* argv[])
{   
    ListSensor* top=NULL; 
    char* file_name;
    int tmp_m;

    
    for (int i=0; i<argc; i++)
    {      
        if (argc<2)
        {
            printf(" \n");
            printf("--------------------------------------------\n");
            printf("This program analyzes the data from the temperature sensor\n");
            printf("press -h for help\n");
            printf("---------------------------------------------\n");
            printf(" \n");
        }
        char* str=argv[i];
        if (str[0]=='-')
        {
            switch (str[1])
            {
            case 'h' :
                printf(" \n");
                printf("--------------------------------------------\n");
                printf("-h help.\n");
                printf("-f file_name for load.\n");
                printf("-m statistic for XX month.\n");
                printf("---------------------------------------------\n");
                printf(" \n");

                break;
            case 'f' :
                if(argv[i+1]&&!(argv[i+2]))
                {
                    top=Load_DataListSensor (top, file_name=argv[i+1] );
                    if(top)
                    {
                        Print_AllStatistic(top);
                        Free_ListSensor(top);
                        top=NULL;
                    }
                }
                break;
            case 'm' :
                tmp_m=atoi(argv[i+1]);
                if(tmp_m>0 && tmp_m<13)
                {
                  
                    top=Load_DataListSensor (top, file_name=argv[i-1]);
                    if(top)
                    {
                        Print_StatisticMonth(top, tmp_m); 
                        Free_ListSensor (top);
                        top=NULL;
                    }
                }
                else 
            
                {
                    printf("\n");
                    printf("--------------------------------------------\n");
                    printf("Select file: -f (file name) -m (month number)\n");
                    printf("--------------------------------------------\n");
                    printf(" \n");
                }
                
                break;
                
            }
        }
    }
    return 0;
}