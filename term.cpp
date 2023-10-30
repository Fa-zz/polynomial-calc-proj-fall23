#include "term.h"

// Constructors
Term::Term() {

}
Term::Term(string sign, int coefficient, vector<string> variables, vector<int> exponents)
    :m_sign(sign), m_coefficient(coefficient), m_variables(variables), m_exponents(exponents) {
        // After members have been assigned, loop through 
        // for (int i = 0; i < m_variables.size(); i++) {
        //     std::string current = m_variables.at(i);
        //     for (int j = i+1; j < m_variables.size(); j++) {
        //         if (current == m_variables.at(j)) {
        //             // found a duplicate
        //         }
        //     }
        // }
}
// simplify
// If term has multiple of the same vars, combine the vars by adding their exponents
void Term::simplify() {
    
}
// getTerm
// Returns the full term as a string
string Term::getTerm() {
    bool firstTerm = true;
    string fullTerm = "";
    if (firstTerm) {
        if (m_sign == "-") {
            fullTerm += m_sign;
            firstTerm = false;
        }
    } else {
        fullTerm += m_sign;
    }
    fullTerm += to_string(m_coefficient);
    for (int i = 0; i < m_exponents.size(); i++) {
        fullTerm += m_variables[i];
        fullTerm += "^";
        // fullTerm += m_exponents[i];
        fullTerm += to_string(m_exponents[i]);
    }
    return fullTerm;
}
