#ifndef STACK_HPP
#define STACK_HPP


#include <iostream>
#include <stdio.h>


using namespace std;

class Stack{

    long *buffer;

    int n;  
    int s;  

public:

    Stack();
    ~Stack();

    void add(long);
    bool find(int);
    long get(int);

    void print();

    int size() const{ return s; }
    int capacity() const{ return n; }

    bool full() const { return s == n; }
    bool empty() const { return s == 0; }
};


#endif