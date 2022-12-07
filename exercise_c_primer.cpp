#include <iostream>

// Write code to change the value of a pointer. Write code to change the value to which the pointer points.

int main()
            {
                int n1 =1, n2 =2;
                int *ptr = &n1;

                std::cout << n1 << '\t' << n2 << '\t' << *ptr << '\t' << ptr << std::endl;

                // Change the value of a pointer.

                ptr = &n2;

                std::cout << n1 << '\t' << n2 << '\t' << *ptr << '\t' << ptr << std::endl;

                // Change the value to which the pointer points.

                std::cout << "ingrese un int para cambiar el valor al cual el pointer apunta!: ";
                std::cin >> *ptr;

                std::cout << n1 << '\t' << n2 << '\t' << *ptr << '\t' << ptr << std::endl;

                return 0;
            }
