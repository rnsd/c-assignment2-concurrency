/**
  * Assignment: synchronization
  * Operating Systems
  */

/**
  Hint: F2 (or Control-klik) on a functionname to jump to the definition
  Hint: Ctrl-space to auto complete a functionname/variable.
  */

// function/class definitions you are going to use
#include <algorithm>
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>
#include <cstring>


// although it is good habit, you don't have to type 'std::' before many objects by including this line
using namespace std;

extern string calculatePrimes(char *max, char *string1);

int main(int argc, char *argv[]) {
    cout << "argc = " + to_string(argc) << endl;
    int i = 0;
    while (argv[i] != nullptr) {
        cout << argv[i] << endl;
        i++;
    }


    //todo validate input : number '1' should be larger as 1 / value 'abc' should be a number (1st or 2nd) / Usage: ./prime [max-number-to-test] [number-of-threads]
    if (argc <= 1) {
        cerr << "Usage: ./prime [max-number-to-test] [number-of-threads]" << endl;
        return 0;
    }

    cout << calculatePrimes(argv[1], argv[2]) << endl;
    return 0;
}


