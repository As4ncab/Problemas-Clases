/**
 * @file tests_main.cc
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 *
 * @brief Programa Principal para los tests
 *
 * @version 0.1
 * @date 2023-07-04
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