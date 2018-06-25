#include <iostream>
#include <stdlib.h>
#include <string>
int main(int argc,char* argv[]){
    int cell=10;
    int period=cell*cell*cell+9;
    int start=10-1;
    int atom_num=atoi(argv[1]);
    std::string line;
    int num=0;
    while(std::getline(std::cin,line)){
       if( num % period == (start+atom_num)){
            std::cout<<line<<std::endl;
       }
        num=num+1;
    }
}
