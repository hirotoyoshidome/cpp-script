#include <iostream>
#include "Sample.hpp"


// void.
void Sample::greet() {
    std::cout << "Good morning!" << std::endl;
}

// setter.
void Sample::setAge(int age) {
    myAge = age;
}

// getter.
int Sample::getAge() {
    return myAge;
}
