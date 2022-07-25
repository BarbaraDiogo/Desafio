#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char buffer[] = "Programar";
    
    size_t size = strlen(buffer);
    
    for(int i = 0; i < size / 2; i++) {
       char tmp = buffer[i]; 
       buffer[i] = buffer[size - i - 1]; 
       buffer[size - i - 1] = tmp; 
    }
    cout << buffer;
}