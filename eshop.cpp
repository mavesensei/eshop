#include <iostream>
using namespace std;

int main(){
    int item, currentstock[100] = {3, 2, 5 ,1}, itemnumber[100] = {0, 1, 2, 3}, admincustomer, addToBasket;

    cout << "\n\nWelcome to the sensei-shop\n\n";
    cout << "Are you an admin or customer? (0-customer/1-admin)\n";
    cin >> admincustomer;
    switch(admincustomer){
        case 0:
            cout << "We have 4 different items\nItem 0\nItem 1\nItem 2\nItem 3\n";
            cout << "Enter the item number you are looking for: \n";
            cin >> item;
            if(item >= 0 && item < 4) {
                cout << "Item " << item << " - Stock: " << currentstock[item] << "\n";
                cout << "Do you want to add to basket?(1-yes/2-no)\n";
                cin >> addToBasket;
                switch(addToBasket){
                    case 1:
                        cout << "You have added " << item << " - Stock: " << currentstock[item] - 1 << "\n";
                        break;
                    case 2:
                        break;
                }
            } else {
                cout << "Invalid item number!\n";
            }
            break;
        case 1:
            cout << "Current stock:\n";
            for(int i = 0; i < 4; i++){
                cout << "Item " << i << " - Stock: " << currentstock[i] << "\n";
            }
            cout << "Do you want to add stock? (1-yes/2-no)\n";
            int addStock;
            cin >> addStock;
            if(addStock){
                cout << "Enter the item number to add stock: ";
                cin >> item;

                if(item >= 0 && item < 4){
                    cout << "Enter the quantity to add to stock: ";
                    int quantityToAdd;
                    cin >> quantityToAdd;
                    currentstock[item] += quantityToAdd;
                    cout << "Stock for Item " << item << " is now: " << currentstock[item] << "\n";
                } else {
                    cout << "Invalid item number!\n";
                }
            } else {
                cout << "No stock added.\n";
            }
            break;
    }
    return 0;
}