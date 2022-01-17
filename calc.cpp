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
#include <iterator>
#include <sstream>

// although it is good habit, you don't have to type 'std::' before many objects by including this line
using namespace std;

int parseMaxValueToTestFor(const char *input) {


    int result = 0;
    try {
        result = stoi(input);
        if (result <= 1) {
            cerr << "Number '" + to_string(result) + "' should be larger than 1" << endl;
        }
    } catch (invalid_argument exception) {
        string s;
        s = *input;
        cerr << "Expected a number, but got '" << s << "'" << endl;
    }
    return result;
}

bool isPrime(int value) {
    for (int j = 2; j < value; j++) {
        if (value % j == 0)
            return false;
    }
    return true;
}

string toCommaSeparatedString(vector<int> values) {
    std::ostringstream oss;
    if(!values.empty()) {
        std::copy(values.begin(), std::prev(values.end()), std::ostream_iterator<int>(oss, ", "));
        oss << values.back();
    }
    return oss.str();
}

string calculatePrimes(char *max) {
    int maxValueToTestFor = parseMaxValueToTestFor(max);

    vector<int> primes;
    for (int i = 2; i <= maxValueToTestFor; i++) {
        if (isPrime(i))
            primes.push_back(i);
    }

    return toCommaSeparatedString(primes);
}


