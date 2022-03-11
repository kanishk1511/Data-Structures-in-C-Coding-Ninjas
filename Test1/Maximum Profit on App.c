#include <bits/stdc++.h> 
using namespace std;  

int maximumProfit(int budget[], int n) {
    sort(budget, budget  + n);
    int max =0;
    for(int i=0; i<n; i++){
        int cost = budget[i]*(n-i);
        if(cost>max){
            max=cost;
        }
    }
    return max;

}
