//
//  organizing-containers-of-balls.cpp
//  hackerrank
//
//  Created by Rakesh Shukla on 22/08/17.
//  Copyright © 2017 Rakesh Shukla. All rights reserved.
//

using namespace std;

#include "organizing-containers-of-balls.hpp"
void organizing_containers_of_balls:: solve()
    {
        int q;
        cin>>q;
        int qc=q;
        while(qc--)
        {
            
            int n;
            cin>>n;
            int R=n;
            vector<long long> BPC(n,0);
            vector<long long> BPT(n,0);
            int r_iter=0;
            while(R--)
            {
                int C=n;
                int total_per_row=0;
                int c_iter=0;
                while(C--)
                {
                    int b;
                    cin>>b;
                    total_per_row+=b;
                    BPT[c_iter]+=b;
                    c_iter++;
                    
                }
                BPC[r_iter]=total_per_row;
                r_iter++;
                
            }
            
            sort(BPC.begin(),BPC.end());
            sort(BPT.begin(),BPT.end());
            if(BPC==BPT)
                cout<<"Possibe\n";
            else
                cout<<"Impossible\n";
        }
    }

        
    
