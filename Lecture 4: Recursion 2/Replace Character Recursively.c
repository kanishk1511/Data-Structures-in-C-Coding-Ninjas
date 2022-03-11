void replaceCharacter(char a[], char c1, char c2) {
   
    if(a[0] == '\0'){
        return;
    }
    replaceCharacter(a + 1 , c1 , c2);
    if(a[0] == c1){
           a[0] = c2;
        }  

}
