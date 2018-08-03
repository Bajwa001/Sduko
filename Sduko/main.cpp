//
//  main.cpp
//  Sduko
//
//  Created by Navroop Singh Bajwa on 04/08/18.
//  Copyright © 2018 Navroop Singh Bajwa. All rights reserved.
//
#include <vector>
#include "storeUnit.h"
/*
void getSdukoSolved(vector<sdukoState> *solution,char inp[10][10],int row,int col){
    
    while(true){
        
        char temp[10][10];// this will be used as new sduko plan
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++)
                temp[i][j]=inp[i][j];
        }
        
        
        
    }
    
}
*/
int main(int argc, const char * argv[]) {
    
    char inp[10][10];
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char temp;
            cin>>temp;
            if(temp!=' '){
                inp[i][j]=temp;
            }
        }
    }
    
    vector<sdukoState> solution;
    //getSdukoSolved(&solution,inp,0,0);// start row,col
    
    return 0;
}
