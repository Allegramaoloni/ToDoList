//
// Created by Allegra Maoloni on 14/01/26.
//
#include "Task.h"
 std::string Task::getTitolo()  {
    return titolo;
}
bool Task::getIsCompleted() {
    return isCompleted;
}
void Task::setmarkCompleted() {
    isCompleted = true;
}
int Task::getPriority() {
    return priority;
}