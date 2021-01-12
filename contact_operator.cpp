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
