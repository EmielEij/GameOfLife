#include "gameOflife/matrix.h"
#include <gtest/gtest.h>


TEST(testMatrix,constructor)
{
 Matrix *matrix = new Matrix(5);
 ASSERT_EQ(5,matrix->GetCount());
}

TEST(testMatrix,constructorWrong)
{
    Matrix *matrix = new Matrix(5);
    ASSERT_EQ(6,matrix->GetCount());
}
