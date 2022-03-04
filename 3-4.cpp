 //
//  3-4.cpp
//  
//
//  Created by Ngo Linh on 30/7/21.
//

#include "3-4.hpp"
#include<iostream>
using namespace std;
void passorfail(char grade){
    
     
    switch (grade) {
        case 'A':
            cout<<"PASS"<<endl;
            break;
            
        case 'B':
            cout<<"PASS"<<endl;
            break;
        case 'C':
            cout<<"PASS"<<endl;
            break;
        case 'D':
            cout<<"FAIL"<<endl;
            break;
        case 'E':
            cout<<"FAIL"<<endl;
            break;
            
    }
    }

int main(){
    passorfail('B');
    return 0;
}
