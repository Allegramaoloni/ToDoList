//
// Created by Allegra Maoloni on 16/01/26.
//

#ifndef TODOLIST_TASKLISTEXCEPTION_H
#define TODOLIST_TASKLISTEXCEPTION_H

#include <stdexcept>
#include <string>
class TaskListException : public std::runtime_error{
public:
    explicit TaskListException(const std::string& what) : std::runtime_error(what) {}

};
#endif //TODOLIST_TASKLISTEXCEPTION_H
