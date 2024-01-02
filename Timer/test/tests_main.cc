/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file tests_main.cc
 * @author Alexia Sánchez Cabrera alu0101482323@ull.edu.es
 * @date 2023-07-05
 *
 * @brief Programa Principal para los tests unitarios de Google
 *
 * @version 0.1
 * @bug There are no known bugs
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>

#include "gtest/gtest.h"

GTEST_API_ int main(int argc, char* argv[]) {
  std::cout << "Ejecutando main() del programa tests_main.cc\n" << std::endl;

  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}