//
//  main.cpp
//  T80429
//
//  Created by 唐彬彬 on 2019/6/10.
//  Copyright © 2019 唐彬彬. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int n,m,r,g,l;
    cin>>n>>m;
    r = n % m;
    g = m;
    while (r!=0) {
        l = g % r;
        g = r;
        r = l;
    }
    cout<<n*m/g<<endl;
    return 0;
}
