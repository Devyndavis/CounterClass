#ifndef COUNTERTYPE_H
#define COUNTERTYPE_H

class counterType {
private:
    int counter;  // Private data member to store the counter value

public:
    // Constructor
    counterType();

    // Initialize counter to 0
    // Pre: None
    // Post: counter = 0
    void initialize();

    // Set counter to a specific value
    // Pre: value >= 0
    // Post: counter = value
    void setCounter(int value);

    // Get the current value of the counter
    // Pre: None
    // Post: returns current counter
    int getCounter() const;

    // Increment the counter
    // Pre: None
    // Post: counter++
    void increment();

    // Decrement the counter
    // Pre: counter > 0
    // Post: counter--
    void decrement();

    // Reset the counter to 0
    // Pre: None
    // Post: counter = 0
    void reset();
};

#endif