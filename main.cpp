#include <iostream>
#include "Task.h"
#include "TaskList.h"

int main() {
    TaskList lista;
    bool stop = false;
    int option;

    do {
        lista.showList();
        std::cout << "Scegliere un opzione tra le seguenti" << std::endl;
        std::cout << "1) Aggiungere una nuova Task " << std::endl;
        std::cout << "2) Segnare una task come fatta" << std::endl;
        std::cout << "3) Rimuovere una task" << std::endl;
        std::cout << "0) esci" << std::endl;
        std::cin >> option;
        std::cin.ignore();

        std::string titolo, fileName;
        int priority, newPriority;
        switch (option) {
            case 0:
                stop = true;
                std::cout << "Arrivederci" << std::endl;
                break;
            case 1:
                std::cout << "Scrivere il nome della task: ";
                std::getline(std::cin, titolo);
                std::cout << "Scrivere la priorità: ";
                std::cin >> priority;
                lista.addTask(titolo, false, priority);
                break;
            case 2:
                std::cout << " Quale attività ha portato a termine? ";
                std::getline(std::cin, titolo);
                lista.markCompleted(titolo);
                break;
            case 3:
                std::cout << "Scrivere il nome della Task da rimuovere: ";
                std::getline(std::cin, titolo);
                lista.removeTask(titolo);
                break;
            default:
                std::cout << "Opzione non valida!" << std::endl;
                break;




        }
    } while (!stop);
}





