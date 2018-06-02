#ifndef simpleIO_H

#include <iostream>

/*for printing integer*/
void println(int value){
    std::cout <<value<<std::endl;
}
void print(int value){
    std::cout <<value;
}

/*for printing float*/
void println(float value){
    std::cout <<value<<std::endl;
}
void print(float value){
    std::cout <<value;
}

/*for printing double*/
void println(double value){
    std::cout <<value<<std::endl;
}
void print(double value){
    std::cout <<value;

}

/*for printing string*/
void println(std::string value){
    std::cout <<value<<std::endl;
}
void print(std::string value){
    std::cout <<value;
}

/*for printing character*/
void println(char value){
    std::cout <<value<<std::endl;
}
void print(char value){
    std::cout <<value;
}


/*to input integer */
int getInt(){
    int value;
    std::cin >> value;
    return value;
}

/*to input string */
std::string getString(){
    std::string value;
    std::cin >> value;
    return value;

}


/*to input float */
float getFloat(){
    float value;
    std::cin >> value;
    return value;

}

/*to input double */
double getDouble(){

    double value;
    std::cin >> value;
    return value;

}

/*to input char */
char getChar(){

    char value;
    std::cin>>value;
    return value;
}
#endif
