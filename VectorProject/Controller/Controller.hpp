//
//  Controller.hpp
//  VectorProject
//
//  Created by Fitzgerald, Skyler on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>

using namespace std;

class Controller
{
private:
    vector<int> intVect;
    vector<string> strVect;
public:
    Controller();
    void start();
};

#endif /* Controller_hpp */
