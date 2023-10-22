#include <string>
using namespace std;
class person {
public:
    person(string name, string height, string weight);
    ~person();
    string get_atributes();

private:
    struct pimpl_person;
    pimpl_person* impl;
};