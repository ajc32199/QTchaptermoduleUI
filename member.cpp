#include "member.h"

void Member :: test(){
    CSVReader reader("activetest.csv");
    for(CSVRow& row : reader){
        for(CSVField& field:row){
            std::cout << field.get() << endl;
        }
    }
}
