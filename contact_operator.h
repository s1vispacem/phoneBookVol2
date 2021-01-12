#ifndef CONTACT_OPERATOR_H
#define CONTACT_OPERATOR_H

#include <string>
class contact_operator
{
public:
    contact_operator();
    ~contact_operator();

    void add_contact();
    void print_menu();
    void exec_func();
private:
    bool validate_num(std::string);
    int convert_num(std::string);


};

#endif // CONTACT_OPERATOR_H
