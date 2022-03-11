#include <string>
using namespace std;
string getPossibleCharsForKeypad(int num){
    if(num==2){
        return "abc";
    }
    if(num==3){
        return "def";
    }
    if(num==4){
        return "ghi";
    }
    if(num==5){
        return "jkl";
    }
    if(num==6){
        return "mno";
    }
    if(num==7){
        return "pqrs";
    }
    if(num==8){
        return "tuv";
    }
    if(num==9){
        return "wxyz";
    }
    else{
        return "";
    }
}

int keypad(int num,string output[]){
    if(num==0){
        output[0]="";
        return 1;
    }
    int smalloutputsize=keypad((num/10),output);
    string firstDigitPossibleChars=getPossibleCharsForKeypad(num%10);
    
    for(int i=0;i<firstDigitPossibleChars.length();i++){
        for(int j=0;j<smalloutputsize;j++){
            output[(i+1)*smalloutputsize+j]=output[j];
        }
    }
    int k=0;
    for(int i=0;i<firstDigitPossibleChars.length();i++){
        for(int j=0;j<smalloutputsize;j++){
            output[k]=output[k]+firstDigitPossibleChars[i];
            k++;
        }
    }
    return k;
}
