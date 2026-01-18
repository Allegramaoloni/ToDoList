//
// Created by Allegra Maoloni on 15/01/26.
//
#include <gtest/gtest.h>
#include "TaskList.h"

// Test per l'aggiunta e l'ordinamento automatico per priorità
TEST(TaskListTest, AddTaskSorting) {
    TaskList myList;

    // Aggiungiamo task in ordine sparso di priorità
    myList.addTask("Correre", false, 5);
    myList.addTask("Studiare", false, 1);
    myList.addTask("Spesa", false, 10);
}

// Test per la rimozione di una task
TEST(TaskListTest, RemoveTask) {
    TaskList myList;
    myList.addTask("Task da eliminare", false, 1);
    myList.removeTask("Task da eliminare");
}

// Test per segnare come completata
TEST(TaskListTest, MarkAsCompleted) {
    TaskList myList;
    myList.addTask("Studiare", false, 1);
    myList.markCompleted("Studiare");

}