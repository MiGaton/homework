#include<stdio.h>



typedef struct list 
    {
        void *address; //адрес структуры
        size_t size;
        char comment[64];
        struct list *next;// адрес на след структуру
    } list;


void* findMaxBlock(list *head)
{
    if(head)
    {
        int res=0, max_size=0;
        for(list *ptr=head; ptr ; ptr=ptr->next)
            {
                if ((ptr->size)>max_size)
                {
                    max_size=ptr->size;
                    res=ptr->address;// или res=ptr;
                }
                    
            }
        return res;
    }
    return 0;
}


size_t totalMemoryUsage(list *head)
{
    if(head)
    {
        int res=0;
        for(list *ptr=head; ptr ; ptr=ptr->next)
            res+=ptr->size;
        return res;
    }
    return 0;
    
}