//
// Created by m0dulo on 2022/12/10.
//

#include <iostream>

extern "C" {
double average(double, double);
}

int main() {
  std::cout << "average of 3.0 and 4.0: " << average(3.0, 4.0) << std::endl;
}
