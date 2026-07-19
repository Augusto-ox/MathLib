#include "Matrix.h"
#include <iostream>
#include <iomanip>

/**
 * @brief Constructor
 */
Matrix::Matrix(int r, int c) : rows(r), cols(c) {
    data.resize(rows, std::vector<double>(cols, 0.0));
}

/**
 * @brief Obtener elemento
 */
double Matrix::get(int r, int c) const {
    if (r >= rows || c >= cols || r < 0 || c < 0) {
        throw std::out_of_range("Índice fuera de rango");
    }
    return data[r][c];
}

/**
 * @brief Establecer elemento
 */
void Matrix::set(int r, int c, double value) {
    if (r >= rows || c >= cols || r < 0 || c < 0) {
        throw std::out_of_range("Índice fuera de rango");
    }
    data[r][c] = value;
}

/**
 * @brief Suma de matrices
 */
Matrix Matrix::add(const Matrix& other) const {
    if (rows != other.rows || cols != other.cols) {
        throw std::invalid_argument("Las matrices deben tener el mismo tamaño");
    }

    Matrix result(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result.set(i, j, get(i, j) + other.get(i, j));
        }
    }
    return result;
}

/**
 * @brief Multiplicación de matrices
 */
Matrix Matrix::multiply(const Matrix& other) const {
    if (cols != other.rows) {
        throw std::invalid_argument("Dimensiones incompatibles para multiplicación");
    }

    Matrix result(rows, other.cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < other.cols; ++j) {
            double sum = 0.0;
            for (int k = 0; k < cols; ++k) {
                sum += get(i, k) * other.get(k, j);
            }
            result.set(i, j, sum);
        }
    }
    return result;
}

/**
 * @brief Imprimir matriz
 */
void Matrix::print() const {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << std::setw(8) << std::fixed << std::setprecision(2) << data[i][j];
        }
        std::cout << std::endl;
    }
}