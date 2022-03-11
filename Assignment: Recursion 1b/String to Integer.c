#include<cstring>
#include<cmath>
int stringToNumber(char input[]) {
    // Write your code here
    if(strlen(input)==1){
        int c = input[0];
        return (c - 48);
    }
    int ans = stringToNumber(input+1);
    int len = strlen(input);
    int digit = input[0];
    digit -=48;
    ans = (digit * pow(10, len-1)) + ans;
    return ans;

}
