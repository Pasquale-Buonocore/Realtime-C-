/*
In general, a multitasking scheduler runs, possibly indefinitely, in a loop and uses a scheduling algorithm to identify and call ready tasks.
Here, ready is the state of needing to be called. The scheduler's ready-check usually involves timing and possibly event or alarm conditions.

In this way, a multitasking scheduler distirbutes software functionality among various modules and time slices.
*/

#include <array>
#include <iostream>
#include <algorithm>

void task_a() {std::cout << "Running task a" << std::endl;}
void task_b() {std::cout << "Running task b" << std::endl;}
void task_c() {std::cout << "Running task c" << std::endl;}

typedef void(*function_type) ();
typedef std::array<function_type, 3U> task_list_type;

const task_list_type task_list{ {task_a, task_b, task_c} };

void scheduler(){
    for(;;){
        std::for_each(task_list.begin(),
                      task_list.end(),
                      [](const function_type& func)
                      {
                          func();
                      });
    }
};

/*
std::for_each is an algorithm provided by the C++ Standard Library, defined in the <algorithm> header.
Its purpose is to apply a given function to each element in a range of elements.

How It Works
1. std::for_each iterates over the range from task_list.begin() to task_list.end().
2. For each element in the range, it applies the lambda function provided as the third parameter.
3. The lambda function [](const function_type& func) { func(); } takes a function pointer and invokes it.

*/

int main(){
    scheduler();
    return 0;
};