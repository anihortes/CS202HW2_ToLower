#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

char* toLower(const char* myString){
    char* ptr = new char;
    auto newPtr = ptr;
    while(*myString != '\0'){
        *ptr = *myString;
        if (int(*ptr) >= 0x41 && int(*ptr) < 0x5b){
            *ptr = *myString + 0x20;
        }
        myString++;
        ptr++;
    }
    *ptr = '\0';
    return newPtr;
}

int main() {
    string myString = "Hello World!";
    const char* cstr = myString.c_str();
    cout << toLower(cstr) << endl;
    return 0;
}