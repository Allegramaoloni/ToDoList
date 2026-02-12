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
void TaskList::removeTask(std::string titolo) {
    for (auto itr = listaTask.begin(); itr != listaTask.end(); ++itr) {
        if (titolo == itr->getTitolo()) {
            listaTask.erase(itr);
        }
    }
}

    void TaskList::markCompleted(std::string titolo) {
        for (auto &task: listaTask) {
            if (task.getTitolo() == titolo) {
                task.setmarkCompleted();
                return;
            }
        }
        std::cout << "Task non trovata" << std::endl;
    }

void TaskList::showList() {
    for ( auto& task : listaTask) {
        std::cout << "[" << (task.getIsCompleted() ? "x" : " ") << "] "
                  << task.getTitolo() << std::endl;
    }

}
std::string TaskList::getTitolo(){
    return getTitolo();
}

#include <fstream>

void TaskList::saveToFile(const std::string& filename) {
    std::ofstream file(filename);

    if (!file) {
        std::cerr << "Errore apertura file in scrittura\n";
        return;
    }

    for (const Task& task : listaTask) {
        file << task.getTitolo() << ";"
             << task.getIsCompleted() << ";"
             << task.getPriority() << "\n";
    }

    file.close();
}

