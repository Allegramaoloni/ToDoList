//
// Created by Allegra Maoloni on 16/09/25.
//
#include "Task.h"
#include <iostream>
#include <vector>
#ifndef TODOLIST_TASKLIST_H
#define TODOLIST_TASKLIST_H
class TaskList{
private:
    std::vector<Task>listaTask;
public:
        void addTask( std::string titolo, bool isCompleted, int priority);
        void removeTask(std::string titolo);

void markCompleted(std::string titolo);
    void showList();
    std::string getTitolo();

};
#endif //TODOLIST_TASKLIST_H
