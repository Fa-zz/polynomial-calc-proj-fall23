#include "term.h"

int main() {
    // int coeff = 5;
    // vector<string> vars = {"x"};
    // vector<int> exps = {5};
    // string sign = "+";
    // Term* termPtr = new Term(sign, coeff, vars, exps);
    // cout << termPtr->getTerm() << endl;

    bool enteringTerms = true;
    int termN = 0;
    string sign;
    int coefficient;
    int numVars = 0;
    vector<string> variables;
    vector<int> exponents;
    string keepEnteringTerms;
    while(enteringTerms) {
        variables.clear();
        exponents.clear();
        cout << "You are entering the " << termN+1 << " number term of the polynomial." << endl;
        cout << "Enter the term's sign, must be either +/-: " << endl;
        cin >> sign;
        cout << "Enter a coefficient, must be an integer: " << endl;
        cin >> coefficient;
        cout << "How many variables does the term have?" << endl;
        cin >> numVars;
        for (int i = 0; i < numVars; i++) {
            // If exponent of var = 0, do not include variable or exponent to term (term is const)
            string variable;
            int exponent;
            cout << "Enter a variable: " << endl;
            cin >> variable;
            cout << "Enter its corresponding exponent: " << endl;
            cin >> exponent;
            variables.push_back(variable);
            exponents.push_back(exponent);
        }
        Term* termPtr = new Term(sign, coefficient, variables, exponents);
        cout << "Your term is: " << termPtr->getTerm() << endl;
        cout << "Do you want to keep entering terms in the polynomial? Type y/n: " << endl;
        cin >> keepEnteringTerms;
        if (keepEnteringTerms == "y")
            enteringTerms = true;
        if (keepEnteringTerms == "n")
            enteringTerms = false;
        termN+=1;
    }

    // delete termPtr;
    return 0;
}