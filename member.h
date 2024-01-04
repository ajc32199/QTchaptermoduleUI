#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "/subdirectory/csv-parser-master/single_include/csv.hpp"

using namespace std;
using namespace csv;

class Member
{
private:
    std::string name;
    std::string grade;
    int age;
    std::string status;
    double dues;
    double debt;

public:
    void test();

};

#endif // MEMBER_H
