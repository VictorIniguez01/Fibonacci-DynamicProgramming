#include "Stack.hpp"


Stack::Stack(){

    n = 1;
    s = 0;
    buffer = new long[n];
}

Stack::~Stack(){ delete [] buffer; }

void Stack::add(long newValue){

    if(full()){

        n *= 2;
        long *t = new long[n];

        for(int i = 0; i < size(); i++) t[i] = buffer[i];

        delete [] buffer;
        buffer = t;
    }

    buffer[s] = newValue;
    s++;
}

bool Stack::find(int x){   return (x - 3) < size() ? true: false;    }

long Stack::get(int x){  return buffer[x - 3];   }