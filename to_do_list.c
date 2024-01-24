#include <stdio.h>
#include <stdlib.h>

/** Task completion struct*/
typedef struct{
    char task[150];
    int tasks_complete;
}my_tasks;

void addTask(my_tasks *tasks, int *task_count, const char *taskNew)
{
    /**For simplicity, lets limit the task count to 10*/
    if (*task_count < 10)
    {
        sprintf(tasks[*task_count].task, "%s", taskNew);
        /**initialize tasks completed to 0*/
        tasks[*task_count].tasks_complete = 0;
        (*task_count)++;
        printf("Successfully added task\n");        
    }
    else{
        printf("Couldn't add task.\n");
        printf("List full");
    }
}
void taskDisplay(const my_tasks *tasks, int task_count){
    int i;
    
    printf("Available tasks: \n");
    for (i = 0; i < task_count; i++){
        printf("Task %d. %s [%s]\n", i + 1, tasks[i].task, tasks[i].tasks_complete ? "Complete" : "Incomplete");
    }
}
int main(){
    my_tasks tasks[10];
    int task_count = 0;
    
    addTask(tasks, &task_count, "Call Francis on Monday");
    addTask(tasks, &task_count, "Call the Lecturer Today");
    addTask(tasks, &task_count, "Call Naina on Sunday");
    taskDisplay(tasks, task_count);
    
    return (0);
}
