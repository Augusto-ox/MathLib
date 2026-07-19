cmake_minimum_required(VERSION 3.10)
project(MathLib VERSION 1.0.0)

# Configurar C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Opciones de compilación
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -O2")

# Archivos de la librería
set(SOURCES
    src/Matrix.cpp
)

set(HEADERS
    include/Matrix.h
)

# Crear la librería estática
add_library(MathLib STATIC ${SOURCES})

# Especificar directorio de includes
target_include_directories(MathLib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Crear el ejecutable de prueba
add_executable(test_matrix test/test_matrix.cpp)

# Enlazar con la librería
target_link_libraries(test_matrix MathLib)

# También incluir el directorio de includes para el test
target_include_directories(test_matrix PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Opción para compilar con Debug
set(CMAKE_BUILD_TYPE Debug)

# Mensaje informativo
message(STATUS "MathLib version ${PROJECT_VERSION}")