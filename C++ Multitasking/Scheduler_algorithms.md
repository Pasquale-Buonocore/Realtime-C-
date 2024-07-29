Which are the main algorithms to setup a scheduler?

1. Round-Robin Scheduling
Round-robin scheduling is simple and fair, where each task gets executed in a cyclic order.

2. Priority Scheduling
In priority scheduling, each task is assigned a priority, and the scheduler always runs the highest-priority task that is ready to run.

3. Time-Slice (Round-Robin with Time Quanta)
In time-slice scheduling, each task is given a fixed amount of time to run. If it does not finish within this time, it is preempted and the next task is scheduled.

4. Earliest Deadline First (EDF)
This is a dynamic scheduling algorithm used in real-time systems, where tasks with the earliest deadline are given priority.

5. Multilevel Queue Scheduling
Tasks are divided into different queues based on their priority or type, and each queue can have its own scheduling algorithm.

6. Shortest Job Next (SJN) / Shortest Job First (SJF)
In this approach, the scheduler selects the task that has the smallest execution time. This can be preemptive or non-preemptive.

7. Weighted Round-Robin Scheduling
A variation of round-robin where each task has a weight, and tasks are scheduled based on their weights.
