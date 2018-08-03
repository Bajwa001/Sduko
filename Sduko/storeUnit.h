//
//  storeUnit.h
//  Sduko
//
//  Created by Navroop Singh Bajwa on 04/08/18.
//  Copyright © 2018 Navroop Singh Bajwa. All rights reserved.
//

#ifndef storeUnit_h
#define storeUnit_h

#include<iostream>
using namespace std;



class sdukoState{
private:
    struct sduko{
        struct sduko *next;
        int value;
        sduko(int value){
            this->next=NULL;
            this->value=value;
        }
    };
    struct sduko *head,*tail;
    public :
    sdukoState(){
        head=tail=NULL;
    }
    void insert(int value){
        if(head==NULL){
            head=new sduko(value);
            tail=head;
        }else{
            tail->next=sduko(value);
            tail=tail->next;
        }
    }
    void display(){
        struct sduko *temp=head;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cout<<temp->value<<" ";
                if(temp)
                    temp=temp->next;
            }
            cout<<endl;
        }
    }
};

#endif /* storeUnit_h */
