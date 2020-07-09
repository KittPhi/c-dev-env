#include "include/list.h"

// Main Program. Argument[0] = main.cpp
int main(int arg_count, char *args[]){
    if(arg_count > 1) {
        List simplelist;

        simplelist.name = string(args[1]);
        simplelist.print_menu();
    }else{
        cout << "Argument 1 Not supplied... exiting program" << endl;
    }
    return 0;
}