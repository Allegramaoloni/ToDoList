//
// Created by Allegra Maoloni on 16/09/25.
//
#include <iostream>
#ifndef TODOLIST_TASK_H
#define TODOLIST_TASK_H
class Task{
private:
    std::string titolo;
    bool isCompleted;
    int priority;
public:
    Task( std::string titolo,bool isCompleted, int priority) : titolo(titolo), isCompleted(false), priority(priority){}
    std::string getTitolo();
    bool getIsCompleted();
    void setmarkCompleted();
    int getPriority();
};
#endif //TODOLIST_TASK_H
