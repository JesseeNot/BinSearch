//
//  main.cpp
//  BinSearch
//
//  Created by 张云皓 on 16/2/6.
//  Copyright © 2016年 Jessee. All rights reserved.
//

#include <iostream>
using namespace std;

int BinSearch(int a[],int key,int size){

   
    int low = 0;
    int high = size-1;
    while (low<=high) {
        int mid = (low +high)/2;
        if (a[mid] == key) {
            return mid;
        }else if (a[mid]>key){
        
            high = mid-1;
        }else{
        
            low = mid+1;
        }
    }
    return -32;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int a[] = {1,3,5,6,7,9,56,78,};
    int b = BinSearch(a, 99, 8);
    cout<<b<<endl;
    return 0;
}
