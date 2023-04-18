#include <stdio.h>

// Struct to represent a process
typedef struct process {
    int id;
    int arrival_time;
    int burst_time;
    int remaining_time;
    int priority;
} process;

// Function to swap two processes
void swap(process* a, process* b) {
    process temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform Fixed Priority Preemptive Scheduling
void fpps(process proc[], int n) {
    int time = 0;
    int complete = 0;

    printf("\nFixed Priority Preemptive Scheduling:\n");
    printf("Process ID\tArrival Time\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n");

    // Loop until all processes are complete
    while (complete != n) {
        int min_priority_index = n;
        int min_priority = 10000000;

        // Find the process with the highest priority
        for (int i = 0; i < n; i++) {
            if (proc[i].arrival_time <= time && proc[i].priority < min_priority && proc[i].remaining_time > 0) {
                min_priority_index = i;
                min_priority = proc[i].priority;
            }
        }

        // Decrement the remaining time of the selected process
        proc[min_priority_index].remaining_time--;

        // If the process is complete, calculate waiting and turnaround time
        if (proc[min_priority_index].remaining_time == 0) {
            complete++;
            int waiting_time = time + 1 - proc[min_priority_index].burst_time - proc[min_priority_index].arrival_time;
            int turnaround_time = time + 1 - proc[min_priority_index].arrival_time;
            printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", proc[min_priority_index].id,
                   proc[min_priority_index].arrival_time, proc[min_priority_index].burst_time,
                   proc[min_priority_index].priority, waiting_time, turnaround_time);
        }

        time++;
    }
}

// Function to perform Shortest Remaining Time First (SRTF) scheduling
void srtf(process proc[], int n) {
    int time = 0;
    int complete = 0;
    int min_burst_time_index = 0;

    printf("\nShortest Remaining Time First (SRTF) Scheduling:\n");
    printf("Process ID\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");

    // Loop until all processes are complete
    while (complete != n) {
        min_burst_time_index = n;
        int min_remaining_time = 10000000;

        // Find the process with the shortest remaining time
        for (int i = 0; i < n; i++) {
            if (proc[i].arrival_time <= time && proc[i].remaining_time < min_remaining_time && proc[i].remaining_time > 0) {
                min_burst_time_index = i;
                min_remaining_time = proc[i].remaining_time;
            }
        }

        // Decrement the remaining time of the selected process
        proc[min_burst_time_index].remaining_time--;
        min_remaining_time--;

        // If the process is complete, calculate waiting and turnaround time
        if (proc[min_burst_time_index].remaining_time == 0) {
            complete++;
            int waiting_time = time + 1 - proc[min_burst_time_index].burst_time - proc[min_burst_time_index].arrival_time;
            int turnaround_time = time- proc[min_burst_time_index].arrival_time;
printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", proc[min_burst_time_index].id,
proc[min_burst_time_index].arrival_time, proc[min_burst_time_index].burst_time,
waiting_time, turnaround_time);
}  time++;
}
}
int main() {
int n;
printf("Enter the number of processes: ");
scanf("%d", &n);

process proc[n];

// Input process data
for (int i = 0; i < n; i++) {
    printf("\nEnter details for Process %d:\n", i + 1);
    proc[i].id = i + 1;
    printf("Arrival Time: ");
    scanf("%d", &proc[i].arrival_time);
    printf("Burst Time: ");
    scanf("%d", &proc[i].burst_time);
    proc[i].remaining_time = proc[i].burst_time;
    printf("Priority: ");
    scanf("%d", &proc[i].priority);
}

// Sort processes based on arrival time
for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
        if (proc[i].arrival_time > proc[j].arrival_time) {
            swap(&proc[i], &proc[j]);
        }
    }
}

// Perform Fixed Priority Preemptive Scheduling
fpps(proc, n);

// Perform Shortest Remaining Time First (SRTF) Scheduling
srtf(proc, n);

return 0;
}
