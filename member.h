#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "./subdirectory/csv-parser-master/csv.hpp"

using namespace std;
using namespace

class Member
{
private:
    std::string name;
    std::string grade;
    int age;

    //status: 1 is active, 2 is inactive, 3 is alumni, 4 is demitted
    int status;
    bool dues;
    double debt;

public:
    void test();

};

#endif // MEMBER_H
