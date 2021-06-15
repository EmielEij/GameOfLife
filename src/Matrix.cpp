#include "gameOflife/matrix.h"

Matrix::Matrix(int A_number)
{
    this->number = A_number;
}

void Matrix::add(int A_number)
{
 this->number = this->number+A_number;
}

int Matrix::GetCount()
{
    return this->number;
}