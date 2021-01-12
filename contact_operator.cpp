#include "contact_operator.h"
#include <iostream>
#include <string>
#include <vector>
#include "initial.h"
#include "contact_struct.h"

contact_operator::contact_operator()
{

}

void contact_operator::add_contact()
{

    Contact temp;
    std::cout<<"enter name for contact"<<std::endl;


    std::getline(std::cin, temp.name);


    bool flag= false;
    std::string temp_num;
    do{
    std::cout<<"enter num";
    std::getline(std::cin, temp_num);
    flag=validate_num(temp_num);
       } while(!flag);
     temp.number=convert_num(temp_num);

    contacts.push_back(temp);

}

bool contact_operator::validate_num(std::string input)
{
    //TODO: insert code
    return false;
}

int contact_operator::convert_num(std::string input)
{
    //TODO: insert code
    return 0;
}

int contact_operator::print_menu()
{
    std::cout<<"1 to add contact\n"
               "2 to remove contact\n"
               "3 to modify contact\n "
               "4 to print all contacts\n";
    // TODO: add unordered_map, put all menus funcs, add find func for returning
return 0;
}
