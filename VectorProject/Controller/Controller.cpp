//
//  Controller.cpp
//  VectorProject
//
//  Created by Fitzgerald, Skyler on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    for(int index = 1; index <= 5; index++)
    {
        this->intVect.push_back(index);
    }
    this->strVect.push_back("hello");
    this->strVect.push_back("hi");
    this->strVect.push_back("hopeful this is right?");
    
}

 void Controller :: start()
{
    cout << "\"Int vector\"" << endl;
    for(int index = 0; index < this->intVect.size(); index++)
    {
        cout << this->intVect.at(index) <<", ";
    }
    
    cout << endl;
    
    cout<< "\"string vector\"" << endl;
    
    for(int index = 0; index < this->strVect.size(); index++)
    {
        cout << this->strVect.at(index) << endl;
    }
}
