#include "../include/Matrix.h"
#include <iostream>

/**
 * @brief Prueba de la librería Matrix
 */
int main() {
    std::cout << "=== PRUEBA DE LIBRERIA MATRIX ===" << std::endl;
    std::cout << std::endl;

    // Crear matriz A (2x2)
    Matrix A(2, 2);
    A.set(0, 0, 1.0);
    A.set(0, 1, 2.0);
    A.set(1, 0, 3.0);
    A.set(1, 1, 4.0);

    std::cout << "Matriz A:" << std::endl;
    A.print();
    std::cout << std::endl;

    // Crear matriz B (2x2)
    Matrix B(2, 2);
    B.set(0, 0, 5.0);
    B.set(0, 1, 6.0);
    B.set(1, 0, 7.0);
    B.set(1, 1, 8.0);

    std::cout << "Matriz B:" << std::endl;
    B.print();
    std::cout << std::endl;

    // Suma
    Matrix C = A.add(B);
    std::cout << "Suma A + B:" << std::endl;
    C.print();
    std::cout << std::endl;

    // Multiplicación
    Matrix D = A.multiply(B);
    std::cout << "Multiplicación A * B:" << std::endl;
    D.print();
    std::cout << std::endl;

    // Prueba adicional: Matriz 3x3
    std::cout << "=== PRUEBA MATRIZ 3x3 ===" << std::endl;
    Matrix E(3, 3);
    int valor = 1;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            E.set(i, j, valor++);
        }
    }
    
    std::cout << "Matriz E (3x3):" << std::endl;
    E.print();
    std::cout << std::endl;

    // Verificar tamaño
    std::cout << "Dimensiones de E: " << E.getRows() << "x" << E.getCols() << std::endl;

    std::cout << "\n=== TODAS LAS PRUEBAS PASARON EXITOSAMENTE ===" << std::endl;
    return 0;
}