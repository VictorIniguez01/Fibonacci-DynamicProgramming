#include "Stack.hpp"

using namespace std;

long fibonacci(int, Stack &);

int main(){

    int n ;
    Stack results;
    int result;

    cin >> n;

    while(n != 0){

        result = fibonacci(n, results);
        printf("%i\n\n", result);

        cin >> n;
    }

    return 0;
}

long fibonacci(int n, Stack &r){

    if(n == 1 || n == 2) return 1;
    if(r.find(n)){
        printf("%i: Is taken from table\n", n);
        return r.get(n);
    }
    printf("%i: Goes back\n", n);
    r.add(fibonacci(n - 1, r) + fibonacci(n - 2, r));
    return r.get(n);
}