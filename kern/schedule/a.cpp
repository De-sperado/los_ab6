#include<bits\stdc++.h>
using namespace std;
main(){
    int z=0;
    while(z<100){
        int r=(1<<4)-1;
        int p = rand() % r;
        int priority;
        int i=0,q=0;
        while(i<4){
            q+=1<<(4-i-1);
            if(p<q){
                priority=i;
                cout<<priority<<endl;
                break;
            }
            i++;
        }
        z++;
    }

}