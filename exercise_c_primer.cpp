#include <iostream>

// EXERCISE 2.19

// Write code to change the value of a pointer. Write code to change the value to which the pointer points.

int main1()
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


// Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b'
// respectively. There are also two integer pointers named ptrA and ptrB. Assign the values
// of 'a' and 'b' to ptrA and ptrB respectively, and display them.

int main()
            {
                int a, b;
                std::cout << "Ingrese un int: ";
                std::cin >> a;
                std::cout << "Ingrese otro int: ";
                std::cin >> b;
                int *ptrA = &a;
                int *ptrB = &b;
                std::cout << "el valor del primer int es "<< *ptrA << " en la direccion " << ptrA << std::endl;
                std::cout << "el valor del segundo int es "<< *ptrB << " en la direccion " << ptrB << std::endl;
                return 0;
            }





