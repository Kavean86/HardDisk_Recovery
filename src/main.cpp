#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string partion="/dev/sdb1";

    fstream data_partion("/dev/sdb1");

    string save_data_line;

    while (getline(data_partion,save_data_line)) {

        cout <<save_data_line << '\n';

    }
    
    data_partion.close();
}