# MathLib - Librería Matemática en C++

## 📋 Descripción

**MathLib** es una librería modular en C++ que implementa operaciones matemáticas avanzadas para matrices. Diseñada siguiendo principios de Programación Orientada a Objetos y buenas prácticas de ingeniería de software.

## ✨ Características

- ✅ Operaciones con matrices (suma, multiplicación)
- ✅ Manejo de excepciones para errores comunes
- ✅ Código modular y reutilizable
- ✅ Documentación con comentarios Doxygen
- ✅ Sistema de construcción con CMake

## 📦 Requisitos

- Compilador C++17 o superior (g++, clang, MSVC)
- CMake 3.10 o superior

## 🚀 Instalación

### Compilación con CMake

```bash
# Clonar el repositorio
git clone https://github.com/tu-usuario/MathLib.git
cd MathLib

# Crear carpeta de build
mkdir build && cd build

# Configurar y compilar
cmake ..
cmake --build .

# Ejecutar pruebas
./test_matrix

# Compilar la librería
g++ -c -std=c++17 -Iinclude src/Matrix.cpp -o Matrix.o
ar rcs libMathLib.a Matrix.o

# Compilar y ejecutar pruebas
g++ -std=c++17 -Iinclude test/test_matrix.cpp -o test_matrix -L. -lMathLib
./test_matrix
#include "Matrix.h"

int main() {
    // Crear matrices 2x2
    Matrix A(2, 2);
    A.set(0, 0, 1.0);
    A.set(0, 1, 2.0);
    A.set(1, 0, 3.0);
    A.set(1, 1, 4.0);

    Matrix B(2, 2);
    B.set(0, 0, 5.0);
    B.set(0, 1, 6.0);
    B.set(1, 0, 7.0);
    B.set(1, 1, 8.0);

    // Suma
    Matrix C = A.add(B);
    C.print();

    // Multiplicación
    Matrix D = A.multiply(B);
    D.print();

    return 0;
}
Contribuciones
Las contribuciones son bienvenidas. Por favor, sigue los pasos:

Fork del repositorio

Crear una rama (git checkout -b feature/nueva-funcionalidad)

Commit de cambios (git commit -m 'Agregar nueva funcionalidad')

Push a la rama (git push origin feature/nueva-funcionalidad)

Crear un Pull Request

📄 Licencia
Este proyecto está bajo la Licencia MIT - ver el archivo LICENSE para más detalles.

👤 Autor
Augusto 
GitHub: @Augusto-ox