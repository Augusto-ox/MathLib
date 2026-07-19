#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <stdexcept>
#include <iostream>

/**
 * @brief Clase para operaciones con matrices
 * 
 * Esta clase implementa operaciones básicas con matrices:
 * - Suma
 * - Multiplicación
 * - Acceso a elementos
 * - Impresión
 */
class Matrix {
private:
    std::vector<std::vector<double>> data;  // Datos de la matriz
    int rows, cols;                          // Dimensiones

public:
    /**
     * @brief Constructor de la matriz
     * @param r Número de filas
     * @param c Número de columnas
     */
    Matrix(int r, int c);

    /**
     * @brief Obtener un elemento de la matriz
     * @param r Fila
     * @param c Columna
     * @return Valor en la posición (r,c)
     * @throws std::out_of_range si el índice está fuera de rango
     */
    double get(int r, int c) const;

    /**
     * @brief Establecer un elemento de la matriz
     * @param r Fila
     * @param c Columna
     * @param value Valor a establecer
     * @throws std::out_of_range si el índice está fuera de rango
     */
    void set(int r, int c, double value);

    /**
     * @brief Suma de matrices
     * @param other Matriz a sumar
     * @return Matriz resultante
     * @throws std::invalid_argument si las dimensiones no coinciden
     */
    Matrix add(const Matrix& other) const;

    /**
     * @brief Multiplicación de matrices
     * @param other Matriz a multiplicar
     * @return Matriz resultante
     * @throws std::invalid_argument si las dimensiones son incompatibles
     */
    Matrix multiply(const Matrix& other) const;

    /**
     * @brief Imprimir la matriz en consola
     */
    void print() const;

    /**
     * @brief Obtener número de filas
     */
    int getRows() const { return rows; }

    /**
     * @brief Obtener número de columnas
     */
    int getCols() const { return cols; }
};

#endif // MATRIX_H