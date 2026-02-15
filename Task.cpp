//
// Created by Allegra Maoloni on 14/01/26.
//
#include "Task.h"
 std::string Task::getTitolo()  const{
    return titolo;
}
bool Task::getIsCompleted() const{
    return isCompleted;
}
void Task::setmarkCompleted() {
    isCompleted = true;
}
int Task::getPriority()const {
    return priority;
}