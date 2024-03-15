#include"header.h"

int c=6;
extern StartBatch prev_startBatch[10];
void finalSchedule() {
    read_Batch_Schedule();
    for (int i = 0; i < c; i++) {
        printf("Start date: %d %d %d\n",prev_startBatch[i].startDate.dd,prev_startBatch[i].startDate.mm,prev_startBatch[i].startDate.yy);
        printf("End date: %d %d %d\n",prev_startBatch[i].endDate.dd,prev_startBatch[i].endDate.mm,prev_startBatch[i].endDate.yy);
        printf("*******************\n");
    }
    
}