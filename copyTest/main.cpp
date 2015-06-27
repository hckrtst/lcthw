/* 
 * File:   main.cpp
 * Author: Sanket K
 *
 * Created on June 27, 2015, 9:42 AM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cassert>
#include <cstddef>
#include <vector>

using namespace std;

void print(int a) {
    cout << a << endl;
}
/*
 * 
 */
int main(int argc, char** argv) {
    int src[] = {10, 30, 20, 20 };
    
    const size_t SIZE = sizeof src / sizeof src[0];
    vector<int> dest;
    
    cout << "Source : " << endl;
    for_each(src, src+SIZE, print);
    
    cout << "reverse copy to vector" << endl;
    
    dest.resize(SIZE);
    
    reverse_copy(src, src+SIZE, dest.begin());
    
    cout << "Dest: " << endl;
    
    for_each(dest.begin(), dest.end(), print);
        
    return 0;
}
/*
 if we forget to resize we get a segfault
Source : 
10
30
20
20
reverse copy to vector
RUN FINISHED; Segmentation fault; core dumped; real time: 30ms; user: 0ms; system: 0ms
 

Normal run:
  
Source : 
10
30
20
20
reverse copy to vector
Dest: 
20
20
30
10

RUN FINISHED; exit value 0; real time: 20ms; user: 0ms; system: 0ms




 * 
 */

