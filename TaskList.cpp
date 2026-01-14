//
// Created by Allegra Maoloni on 14/01/26.
//
#include "TaskList.h"
void TaskList::addTask( std::string titolo, bool isCompleted, int priority){
    Task nuovaTask(titolo, isCompleted, priority);
    // Cerchiamo il primo task che ha una priorità maggiore di quello nuovo
    auto it = std::find_if(listaTask.begin(), listaTask.end(), [priority]( Task t) {
        return t.getPriority() > priority;
    });

    // Lo inseriamo esattamente in quel punto
    listaTask.insert(it, nuovaTask);
}