#include <iostream>
#include <string>
#include "person.h"

using namespace std;

int main() {
    person p("Jacek", "159", "70");
    cout << p.get_atributes() << endl;
    return 0;
}