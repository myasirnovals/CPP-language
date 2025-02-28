//
// Created by myasi on 8/14/2024.
//

#ifndef POINTERS_H
#define POINTERS_H

using namespace std;

struct task {
    task *pNext;
    string description;
};

task *pHead = nullptr;
task *pCurrent = nullptr;

void queue_task(const string &name) {
    task *pTask = new task;

    pTask->description = name;
    pTask->pNext = nullptr;

    if (nullptr == pHead) {
        pHead = pTask;
        pCurrent = pTask;
    } else {
        pCurrent->pNext = pTask;
        pCurrent = pTask;
    }
}

bool remove_head() {
    if (nullptr == pHead) {
        return false;
    }

    task *pTask = pHead;
    pHead = pHead->pNext;

    delete pTask;

    return (pHead != nullptr);
}

void destroy_list() {
    while (remove_head()) {
        destroy_list();
    }
}

task *execute_task(const task *pTask) {
    if (nullptr == pTask) {
        return nullptr;
    }

    cout << "executing " << pTask->description << endl;

    return pTask->pNext;
}

void execute_all() {
    task *pTask = pHead;

    while (pTask != nullptr) {
        pTask = execute_task(pTask);
    }
}

#endif //POINTERS_H
