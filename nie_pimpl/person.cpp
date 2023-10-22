#include "person.h"

#include <string>
using namespace std;

person::person(string name, string height, string weight) 
    : name(name), height(height), weight(weight) {

}

person::~person() {
}

string person::get_atributes(){
    return name + " " + height + "cm " + weight + "kg";
}