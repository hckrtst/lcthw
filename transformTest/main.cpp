/* 
 * File:   main.cpp
 * Author: Sanket K
 *
 * Created on June 26, 2015, 8:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <iterator>
#include <functional>
#include <limits>


using namespace std::placeholders;
//using namespace std;

//template<typename T>
void printVal(int i) {
    std::cout << i << std::endl;
}

void printVal2(double d) {
    std::cout.precision(5);
    std::cout << std::fixed << d << std::endl;    
}
/*
 * 
 */
int main(int argc, char** argv) {
    std::string s = "transformers";
    
    printf("Old string is: %s \n", s.c_str());
    
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    
    printf("New string is: %s \n", s.c_str());
    
    typedef std::map<int, double> MyMap;
    std::map<int, double> M;
    
    typedef std::set<int> MySet;
    MySet S;
    
    typedef std::set<double> MySet2;
    MySet2 S2;
    
    
    M[1] = 452.334;
    M[3] = 15.35;
    M[178] = 16.28;
    M[32] = 478.6789;
    
    // The bind method is the equivalent of select1st 
    // (which is only avail via SGI STL)
    std::transform(M.begin(), M.end(), std::inserter(S, S.begin()), 
            std::bind(&MyMap::value_type::first, _1));
    
    
    printf("======== dump keys ======= \n");
    std::for_each(S.begin(), S.end(), printVal);
    
    std::transform(M.begin(), M.end(), std::inserter(S2, S2.begin()), 
            std::bind(&MyMap::value_type::second, _1));
    printf("======== dump values with for_each== \n");
    std::for_each(S2.begin(), S2.end(), printVal2);
    
    MySet2::iterator it = S2.begin();
    
    printf("======== dump values with loop=== \n");
    while (it != S2.end()) {
        printf("%f \n", *it);
        it++;
    }
    printf("========\n");
    
    return 0;
    
}

