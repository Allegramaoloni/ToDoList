//
// Created by Allegra Maoloni on 16/01/26.
//
#include <gtest/gtest.h>
#include "TaskListException.h"

class TaskListExceptionTest : public ::testing::Test {
};

TEST_F(TaskListExceptionTest, Constructor) {
    TaskListException e("Errore");
    EXPECT_EQ(std::string(e.what()), "Errore");
}