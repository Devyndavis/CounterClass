#include <iostream>
#include "counterType.h"

int main() {
    counterType counter;  // Create a counterType object

    // Test default constructor
    std::cout << "Initial counter value (default constructor): " << counter.getCounter() << std::endl;

    // Test setCounter method
    counter.setCounter(5);
    std::cout << "Counter value after setting to 5: " << counter.getCounter() << std::endl;

    // Test increment method
    counter.increment();
    std::cout << "Counter value after increment: " << counter.getCounter() << std::endl;

    // Test decrement method
    counter.decrement();
    std::cout << "Counter value after decrement: " << counter.getCounter() << std::endl;

    // Test reset method
    counter.reset();
    std::cout << "Counter value after reset: " << counter.getCounter() << std::endl;

    // Test decrement after reset
    counter.decrement();
    std::cout << "Counter value after attempting to decrement after reset: " << counter.getCounter() << std::endl;

    // Test setCounter method again
    counter.setCounter(10);
    std::cout << "Counter value after setting to 10: " << counter.getCounter() << std::endl;

    return 0;
}