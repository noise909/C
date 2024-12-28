#include<stdio.h>

int main(){

    char unit;
    float temp;

    printf("\n the temp is in C or F : ");
    scanf("%c",&unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\n the current temp is in celcius : ");
        scanf("%f",&temp);
        temp = (temp*9/5) + 32;
        printf("\n the temp in farenhite is : %.1f",temp);

    }
    else if(unit == 'F'){
        printf("\n the current temp is in Faraenite : ");
        scanf("%f",&temp);
        temp = ((temp - 32)* 5) / 9 ;
        printf("\n the temp in farenhite is : %.1f",temp);
        

    }
    else{
        printf("\n plz enter a valid temp");

    }

    return 0;
}