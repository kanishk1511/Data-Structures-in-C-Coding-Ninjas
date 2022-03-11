

#include<cstring>
void replacePihelper(char a[] , int start){
    if(a[start] == '\0' || a[start + 1] == '\0'){
        return;
    }
    replacePihelper(a , start + 1);
    if(a[start] == 'p' && a[start + 1] == 'i'){
        for(int i = strlen(a) ; i >= start + 2 ; i--){
            a[i + 2] = a[i];
        }
        a[start] = '3' ;
        a[start + 1 ] = '.' ;
        a[start + 2] = '1' ;
        a[start + 3] = '4' ;
    }
}
void replacePi(char a[]) {
    replacePihelper(a , 0);
}
