//
// Created by namlu on 15/12/2024.
//

#include "pile.h"

#include <iostream>
#include <stack>
#include <sstream>
using namespace std;


void afficher(stack<int> p)
{
    stack<int> t = p;
    while(!t.empty())
    {
        cout << t.top();
        t.pop();
        if(!t.empty())
            cout << " , ";
    }
    cout << endl;
}

void stack_copy(stack<int> pile) {
    stack<int> pile_copy = pile;
    afficher(pile_copy);
}

void stack_reverse(stack<int> pile) {
    stack<int> t = pile;
    stack<int> pile_inversee;
    while(!t.empty()) {
        pile_inversee.push(t.top());
        t.pop();
    }
    afficher(pile_inversee);
}

int postfix(string expression) {
    stack<int> postfix;
    istringstream ss(expression);
    string token;
    while (ss >> token) {
        if (isdigit(token[0])) {
            postfix.push(stoi(token));
        } else {
            int a = postfix.top(); postfix.pop();
            int b = postfix.top(); postfix.pop();

            if (token == "+") {
                postfix.push(a + b);
            }
            else if (token == "-") {
                postfix.push(a - b);
            }
            else if (token == "*") {
                postfix.push(a * b);
            }
            else if (token == "/") {
                postfix.push(a / b);
            }
            else {
                throw std::runtime_error("symbole inconnu " + token);
            }
        }
    }
    if (postfix.size() != 1) {
        throw std::runtime_error("trop d'opérandes ou pas assez d'opérateurs.");
    }

    return postfix.top();
}

int main() {
    stack<int> pile;
    pile.push(1);
    pile.push(2);
    pile.push(3);
    pile.push(4);

    afficher(pile);
    stack_copy(pile);
    stack_reverse(pile);

    cout << postfix("3 5 2 * +") << endl;
    cout << postfix("3 5 + 2 *") << endl;
}