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
        void addTask( std::string titolo, bool isCompleted, int priority){
            listaTask.push_back(Task( titolo, isCompleted,priority));
        }
        void removeTask(std::string titolo){
for(auto itr=listaTask.begin();itr!=listaTask.end();++itr){
    if(titolo==itr->getTitolo()){
        listaTask.erase(itr);
    }
}
        }
void markCompleted(std::string titolo){
            for(auto& task: listaTask){
                if(task.getTitolo()==titolo){
                    task.setmarkCompleted();
                    return;
                }
            }
            std::cout<<"Task non trovata"<<std::endl;
        }
    void showList() {
        for ( auto& task : listaTask) {
            std::cout << "[" << (task.getIsCompleted() ? "x" : " ") << "] "
                      << task.getTitolo() << std::endl;
        }

    }
    std::string getTitolo(){
            return getTitolo();
        }

};
#endif //TODOLIST_TASKLIST_H
