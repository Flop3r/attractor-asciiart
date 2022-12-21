#include <stdio.h>
#include <stdlib.h>

//Franciszek Przeliorz 2022
//Script that generate ASCIIART attractor
//UWR - IT science

typedef struct
{

    double a;
    double b;

}ComplexNum;

ComplexNum add(ComplexNum x, ComplexNum y){
    ComplexNum result;
    result.a = x.a + y.a;
    result.b = x.b + y.b;

    return result;
}

ComplexNum sub(ComplexNum x, ComplexNum y){
    ComplexNum result;
    result.a = x.a - y.a;
    result.b = x.b - y.b;

    return result;
}

ComplexNum mult(ComplexNum x, ComplexNum y){
    ComplexNum result;
    result.a = x.a * y.a - x.b * y.b;
    result.b = x.a * y.b + x.b * y.a;

    return result;
}

int doesBelong(ComplexNum z, ComplexNum c){


    for(int i = 0; i < 200; i++){
        z = sub(mult(z,z), c);

        if(z.a * z.a + z.b * z.b >= 4){
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[]){

    int x = 40, y = 25;
    ComplexNum c;
    c.a = 0.2;
    c.b = 0.75;

    if(argc >= 3){
        x = atoi(argv[1]);
        y = atoi(argv[2]);

        if(argc >= 5){
            c.a = atof(argv[3]);
            c.b = atof(argv[4]);
        }
    }

    double xStep = x / 2 - (x % 2);
    double yStep = y / 2 - (y % 2);

    xStep = 1 / xStep;
    yStep = 1 / yStep;

    ComplexNum z;

    for(int i = 0; i < y; i++){
       z.b = 1 - yStep * i; 

        for(int j = x - 1; j >= 0; j--){
            z.a = -1 + xStep * j;

            if(doesBelong(z, c)){
                putchar('O');
            }else{
                putchar(' ');
            }
        }
        putchar('\n');
    }

    return 1;
}