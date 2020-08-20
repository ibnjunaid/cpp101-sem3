#include<iostream>
#include<string>
#include "functions.hpp"

int main(){
    std::vector<int> v ={1,2,3,4,5,6,7,8,9}; 
    std::cout<<ArraySumWithDefArg(v)<<std::endl;

    //calling without any parameters, So as to invoke defaults
    std::cout<<ArraySumWithDefArg()<<std::endl;

    //printing Double
    print<double>(123.677);

    //printing char
    print<char>('o');

    //printing string
    print<std::string>(std::string("B.TECH"));
}
