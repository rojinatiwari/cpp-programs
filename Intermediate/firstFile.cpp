#include <iostream>
#include<fstream>
using namespace std;

int main() {
    fstream file;
    file.open("./file/first file.txt",ios::out);
    file<<"HELLO , I AM EVELYN .";
    file.close();
    return 0;
}