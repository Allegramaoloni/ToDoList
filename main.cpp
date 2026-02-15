#include <iostream>
#include "TaskList.h"
#include "TaskListException.h"

int main() {
    TaskList lista;

    // Carico prima il file, così la lista ha già i task
    lista.loadFromFile("/Users/allegramaoloni/Desktop/TODOLIST/tasks.txt");

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
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::string titolo;
        int priority;

        try {
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
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    lista.addTask(titolo, false, priority);
                    break;
                case 2:
                    std::cout << "Quale attività ha portato a termine? ";
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
        } catch (const TaskListException &e) {
            std::cerr << "Errore: " << e.what() << std::endl;
        }

    } while (!stop);

    //  Salvo alla fine
    lista.saveToFile("/Users/allegramaoloni/Desktop/TODOLIST/tasks.txt");
}




