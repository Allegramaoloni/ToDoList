//
// Created by Allegra Maoloni on 15/01/26.
//
#include <gtest/gtest.h>
#include "Task.h"

TEST(TaskTest, InitialState) {
Task t("Compiti", false, 1);
// Verifichiamo i valori iniziali
EXPECT_EQ(t.getTitolo(), "Compiti");
EXPECT_FALSE(t.getIsCompleted()); // Verifica che sia false
EXPECT_EQ(t.getPriority(), 1);
}
TEST(TaskTest, MarkAsCompleted) {
Task t("Esercizio C++", false, 2);

t.setmarkCompleted();

// Verifico che lo stato sia cambiato
EXPECT_TRUE(t.getIsCompleted());
}

TEST(TaskTest, PriorityCheck) {
Task t("Bassa priorità", false, 10);
EXPECT_EQ(t.getPriority(), 10);
}