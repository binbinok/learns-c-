//
//  main.cpp
//  T80428
//
//  Created by 唐彬彬 on 2019/6/9.
//  Copyright © 2019 唐彬彬. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,m,r;
    cin>>n>>m;
    r = n % m;
    cout<<n<<"/"<<m<<"="<<n/m<<"..."<<r<<endl;
    while (r!=0) {
        n = m;
        m = r;
        r = n % m;
        cout<<n<<"/"<<m<<"="<<n / m<<"..."<<r<<endl;
    }
    
    cout << m << endl;
    return 0;
}
