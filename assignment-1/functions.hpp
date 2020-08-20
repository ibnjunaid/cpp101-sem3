#pragma once
#include <iostream>
#include <vector>
#include <numeric>

//1.a Print Sum of first 10 integers of array
int ArraySum(std::vector<int> vect){
    return std::accumulate(cbegin(vect),cbegin(vect)+9,0);
}

//1.b Question aint clear much

int ArraySumWithDefArg(std::vector<int> vect = {0,1,2,8,5}){
    return std::accumulate(cbegin(vect),cbegin(vect)+9,0);
}

// 2. Write a program to print an integer ,a double ,a character and a string variable using function overloading.   

template <class T>
void print(T data){
    std::cout<<data<<std::endl;
}

int * ArraySumUsingDynamicAllocation(std::vector<int> vect){
   auto ptr = new int();
   *ptr = std::accumulate(cbegin(vect),cbegin(vect)+9,0);
   return ptr;
}
