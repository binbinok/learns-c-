//
//  main.cpp
//  1-3
//
//  Created by 唐彬彬 on 2019/5/31.
//  Copyright © 2019 唐彬彬. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int a,b,c;
    cin>>a>>b>>c;
    if (a == b || b == c || c == a) {
    cout<<'4'<<endl;
    } else if (a < 90 && b < 90 && c < 90) {
        cout<<'1'<<endl;
    } else if(a == 90 || b == 90 || c == 90) {
        if (a == b || b == c || c == a) {
            cout<<'5'<<endl;
        } else {
            cout<<'2'<<endl;
        }
    } else if (a > 90 || b > 90 || c > 90){
        cout<<'3'<<endl;
    } else if (a == b && b == c) {
        cout<<'6'<<endl;
    } else {
        cout<<a<<'-'<<b<<'-'<<c<<endl;
    }
    return 0;
}
