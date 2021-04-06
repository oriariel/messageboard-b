//
// Created by ori on 21/03/2021.
//

#include "Board.hpp"
#include<iostream>
#include"Direction.hpp"
#include <string.h>
#include <map>

using namespace std;
namespace ariel{
  void Board::post(unsigned int rows,unsigned int cols, Direction d, string ans){
      int len=ans.length();
      

    for(unsigned int i=0;i<len;i++)
    {
     
        if(d==Direction::Vertical){
            m[rows+i][cols]=ans[i];
            
        }
         if(d==Direction::Horizontal){
            m[rows][cols+i]=ans[i];
        }
        
    }
  }
  string Board::read(unsigned int rows, unsigned int cols, Direction d, unsigned int length){
      string ans;
      string a = "_";
      for(unsigned int i=0;i<length;i++)
      {
      
      if(d==Direction::Vertical)
      {
              if(m[rows+i][cols].empty()){
              ans+=a;
          }
          ans+=m[rows+i][cols];
          
      }
      if(d==Direction::Horizontal){
              if(m[rows][cols+i].empty()){
              ans+=a;
          }
           ans+=m[rows][cols+i];
      }
      
      
      
  }
  return ans;
  }
  void Board::show(){
  for(auto it = m.begin(); it != m.end(); it++){
  for(auto b = it->second.begin();b != it->second.end(); b++){
       
                cout <<b->second;
            }
            cout << "\n";
        }
    }
}

