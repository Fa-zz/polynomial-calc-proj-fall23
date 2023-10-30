#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Term {
private:
    // Member vars: sign, coeff, vars, exponents
    string m_sign;
    int m_coefficient;
    vector<string> m_variables;
    vector<int> m_exponents;

    // Helper funcs

public:
    // Constructors
    Term();
    Term(string m_sign, int coefficient, vector<string> variables, vector<int> exponents);

    void simplify();

    // Getters, print funcs
    string getTerm();

};