#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

void read_partion(string path){

fstream data_partion(path);

    string save_data_line;
    ofstream tmp("/tmp/rectmp");
    while (getline(data_partion,save_data_line)) {
        
        tmp<<save_data_line;
       /* 
    char data_save[512];
    data_partion.read(data_save,511);
    data_save[512]='\0';
    cout<<data_save;
       */
    }
    data_partion.close();
}
int main(){

    string partion="/dev/sdb1";
    read_partion(partion);
  
    
    
    
}