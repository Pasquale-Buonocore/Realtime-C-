#include <queue>
#include <vector>
#include <iostream>
#include <functional>

struct Task {
    int priority;
    std::function<void()> func;

    // Comparator to prioritize higher priority tasks
    bool operator<(const Task& other) const {
        return priority < other.priority;
    }
};

void task_a() {std::cout << "Running task a" << std::endl;}
void task_b() {std::cout << "Running task b" << std::endl;}
void task_c() {std::cout << "Running task c" << std::endl;}

std::priority_queue<Task> task_queue;

void scheduler() {
    while (!task_queue.empty()) {
        Task t = task_queue.top();
        task_queue.pop();
        t.func();
    }
}

int main() {
    task_queue.push({1, task_a});
    task_queue.push({3, task_c});
    task_queue.push({2, task_b});
    scheduler();
    return 0;
}