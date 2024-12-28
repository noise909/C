#include<stdio.h>
#include<stdbool.h>


void birthday(char name[] , int age){

    printf("\nhappy birthday..!!, dear %s ", name);
    printf("\nyou are %d years old ",age);

}

int main(){

    char name[] = "bro";
    int age = 21;
    birthday(name,age);
    
    return 0;

}

    
 

