#include <iostream>
#include <vector>
using namespace std;

// Function Prototypes
void print_menu(string name);
void print_list();
void add_item();
void delete_item();

// Global Variables
vector<string> list;
string name;

// Main Program. Argument[0] = main.cpp
int main(int arg_count, char *args[]){
    if(arg_count > 1) {
        string name(args[1]);
        print_menu(name);
    }else{
        cout << "Argument 1 Not supplied... exiting program" << endl;
    }
    return 0;
}

void print_menu(string name){
    int choice;
    cout << "***********************\n";
    cout << " 1 - Print List.\n";
    cout << " 2 - Add to List.\n";
    cout << " 3 - Delete from List.\n";
    cout << " 4 - Quit.\n";
    cout << " Enter Your choice and press return:\n";

    cin >> choice;

    if(choice == 4){
        exit(0);
    }else if(choice == 2){
       add_item();
    }else if(choice == 3){
        delete_item();
    }else if(choice == 1){
        print_list();
    }else{
        cout << "Sorry choice not implemented yet\n";
    }
}

void add_item(){
    cout << "\n\n";
    cout << "*** Add Item ***";
    cout << "Type in an item and press enter\n";

    string item;
    cin >> item;
    list.push_back(item);

    cout << "Successfully added an item to the list \n\n";
    cin.clear(); // clear buffered console

    print_menu(name);
}

void delete_item(){
    cout << "*** Delete Item ***\n";
    cout << "Select an item index number to delete\n";
    if(list.size()){
        for(int i=0; i < (int) list.size(); i++){
            cout << i << ": " << list[i] << "\n";
        }
    }else{
        cout << "No items to delete\n";
    }
    print_menu(name);
}

void print_list(){
    cout << "\n\n";
    cout << "*** Printing List ***\n";

    for(int i=0; i < (int) list.size(); i++){
        cout << " * " << list[i] << "\n";
    }

    cout << "\n\nM - Menu \n";
    char choice;
    cin >> choice;

    if(choice=='M' || choice=='m'){
        print_menu(name);
    }else{
        cout << "Invialid Choice. Quitting..\n";
        exit(0);
    }
}