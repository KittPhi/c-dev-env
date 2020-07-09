#include "include/list.h"

void List::print_menu(){
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

void List::add_item(){
    cout << "\n\n";
    cout << "*** Add Item ***";
    cout << "Type in an item and press enter\n";

    string item;
    cin >> item;
    list.push_back(item);

    cout << "Successfully added an item to the list \n\n";
    cin.clear(); // clear buffered console

    print_menu();
}

void List::delete_item(){
    cout << "*** Delete Item ***\n";
    cout << "Select an item index number to delete\n";
    if(list.size()){
        for(int i=0; i < (int) list.size(); i++){
            cout << i << ": " << list[i] << "\n";
        }
        int choiceNum;
        cin >> choiceNum;
        list.erase(list.begin()+choiceNum);
    }else{
        cout << "No items to delete\n";
    }
    print_menu();
}

void List::print_list(){
    cout << "\n\n";
    cout << "*** Printing List ***\n";

    for(int i=0; i < (int) list.size(); i++){
        cout << " * " << list[i] << "\n";
    }

    cout << "\n\nM - Menu \n";
    char choice;
    cin >> choice;

    if(choice=='M' || choice=='m'){
        print_menu();
    }else{
        cout << "Invialid Choice. Quitting..\n";
        exit(0);
    }
}
