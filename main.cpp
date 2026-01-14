#include <iostream>
#include "Task.h"
#include "TaskList.h"

int main() {
    TaskList lista;
    bool stop = false;
    int option;


    lista.addTask("Andare a fare la spesa", false, 2);
    lista.addTask("Andare a correre", true, 1);
    lista.addTask("Fare il pranzo", false, 6);

    do {
        lista.showList();
        std::cout << "Scegliere un opzione tra le seguenti" << std::endl;
        std::cout << "1) Aggiungere una nuova Task " << std::endl;
        std::cout << "2) Segnare una task come fatta" << std::endl;
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
                std::cout << "Please enter the priority of the todo: ";
                std::cin >> priority;
                lista.addTask(titolo, false, priority);
                break;
            case 2:
                std::cout << " Quale attività ha portato a termine? ";
                lista.markCompleted(titolo);


        }
    } while (!stop);
}





