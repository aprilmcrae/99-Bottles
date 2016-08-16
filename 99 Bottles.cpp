//
//  99Bottles.cpp
//  
//
//  Created by AM on 8/16/16.
//  Copyright © 2016 AM. All rights reserved.
//

#include <iostream>
using namespace std;

int main (){

for(int i=99;i>0;i--){
    if(i!=2 && i!=1){
        cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\nTake one down and pass it around, " << i -1 << " bottles of beer on the wall.\n";
    }
    else if(i==2){
        cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\nTake one down and pass it around, " << i -1 << " bottle of beer on the wall.\n";
    }
    else if(i==1){
        cout << i << " bottle of beer on the wall, " << i << " bottle of beer.\nTake one down and pass it around, no more bottles of beer on the wall.\n";
}
}
    cout << "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more. 99 bottles of beer on the wall.\n";
    return 0;
}
