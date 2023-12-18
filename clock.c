
/*
 * Clock related functions
 */
#include <stdio.h>
#include "clock.h"
#include "consts.h"
#include "inout.h"

/*
 * Print the current time
 */


void display_time(void)
{
    char buf[BUF_SIZE];
    time_t the_time = time(NULL);
    char *t = ctime(&the_time);
    
    sprintf(buf, "\n\nCurrent Time and Date is %s\n\n", t);
    print_string(buf);
}


/* 
 * Dummy Function -- time always taken from system
 */
void set_time(time_t new_time)
{
}

int add(int a,int b)
{
return a+b;
}

#include <stdio.h>

void printArray() {
    int localArray[] = {1, 2, 3, 4, 5}; // 局部数组声明并初始化

    // 打印数组中的每个元素
    for (int i = 0; i < sizeof(localArray) / sizeof(localArray[0]); i++) {
        printf("%d ", localArray[i]);
    }

    printf("\n");
}




