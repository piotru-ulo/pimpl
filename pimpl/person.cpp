#include "person.h"

#include <string>
using namespace std;

struct person::pimpl_person {
    string name;
    string height;
    string weight;
};

person::person(string name, string height, string weight){
    impl = new pimpl_person;
    impl->name = name;
    impl->height = height;
    impl->weight = weight;
}

person::~person() {
    delete impl;
}

string person::get_atributes(){
    return impl->name + " " + impl->height + "cm " + impl->weight + "kg";
}