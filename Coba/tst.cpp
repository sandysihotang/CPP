#include<stdio.h>
void func(char * s){
    printf(s);
}
int main(){
    func("%08x sandy");
}
