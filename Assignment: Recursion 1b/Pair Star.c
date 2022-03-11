
#include<cstring>
void helperpairStar(char input[], int start){
	if(input[start]=='\0'){
		return;
	}//base case
	helperpairStar(input, start+1); //recursive calls
	if(input[start]==input[start+1]){ //small work
		int l=strlen(input);
		input[l+1]='\0';
		int i;
		for(i=l-1;i>start;i--){
			input[i+1]=input[i];
		}
		input[start+1]='*';
	}
}

void pairStar(char input[]) {
    // Write your code here
    helperpairStar(input, 0);

}
