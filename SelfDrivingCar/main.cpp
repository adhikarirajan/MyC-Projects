/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rajan
 *
 * Created on November 14, 2017, 6:38 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
int main()
{
    char color;
    cout <<"Enter Traffic light color: "<<endl;
    cin >> color;
    if (color = 'G') {
            cout<<"There Green Traffic Light, It is safe to go, GO" <<endl;
           
    }
   if (color ='Y') {
            cout <<"There Yellow Traffic Light, It is not safe to go, Stop"<<endl;
           
   }
   else{
            if (color = 'R'){
        
            cout<<"There Red Traffic Light, It is not safe to go, Stop" <<endl;
          
            }
       if (color ='I')
       {
            cout <<"There is incoming Traffic, It is not safe to go, Stop" <<endl;
          
       }
       else {
            cout <<"There is no information, It is not safe to go, Stop" <<endl;
          
        }
}
    
    
