#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;

class mapping {
public:
map<string, int> firstMap;
map<string, int> secondMap;
map<string, int> mergedMaps;
};


int main() {
    mapping M;
    M.firstMap.insert(pair<string, int>("Peaches", 23));
    M.firstMap.insert(pair<string, int>("Oranges", 7));
    M.firstMap.insert(pair<string, int>("Apples", 0));
    M.firstMap.insert(pair<string, int>("Strawberries", 44));
    M.firstMap.insert(pair<string, int>("Cherries", 18));
    M.firstMap.insert(pair<string, int>("Pears", 3));

    M.secondMap.insert(pair<string, int>("Cupcakes", 6));
    M.secondMap.insert(pair<string, int>("Muffins", 10));
    M.secondMap.insert(pair<string, int>("Cookies", 124));
    M.secondMap.insert(pair<string, int>("Cakes", 2));
    M.secondMap.insert(pair<string, int>("Donuts", 13));
    M.secondMap.insert(pair<string, int>("Brownies", 19));


    map<string, int>::iterator iter;
    /* for (iter = M.firstMap.begin(); iter != M.firstMap.end(); iter++) {
        cout << iter->first << " " << iter -> second << endl;
    }
    for (iter = M.secondMap.begin(); iter != M.secondMap.end(); iter++) {
        cout << iter->first << " " << iter -> second << endl;
    } */

    M.mergedMaps.insert(M.firstMap.begin(), M.firstMap.end());
    M.mergedMaps.insert(M.secondMap.begin(), M.secondMap.end());

    /*
    for (iter = M.mergedMaps.begin(); iter != M.mergedMaps.end(); iter++) {
        cout << iter->first << " " << iter -> second << endl;
    } */

    cout << "-----------------------------------------------------------" << endl;
    cout << "Welcome to the Sugar Shop!" << endl;
    cout << "Items Available: \n"
            "1. Peaches \n2. Oranges \n3. Apples \n4. Strawberries \n5. Cherries \n6. Pears \n"
            "7. Cupcakes \n8. Muffins \n9. Cookies \n10. Cakes \n11. Donuts \n12. Brownies \n" << endl;
    cout << "Select an item from the list to see what is in stock:" << endl;


    int choice;
    string choice2;
    bool again = true;
    while (again) {
        cin >> choice;
        switch (choice) {
            case 1: {
                string item = "Peaches";
                auto it = M.mergedMaps.find(item);
                cout << "There are " << it->second << " " << it->first << " in stock." << endl;
                cout << "Would you like to select a different item? Type 'Yes' or 'No'";
                bool again2 = true;
                while (again2) {
                    cin >> choice2;
                    if (choice2 == "Yes") {
                        cout << "Please select another item: ";
                        again = true;
                        again2 = false;
                    } else if (choice2 == "No") {
                        cout << "Thank you for shopping at the Sugar Shop!";
                        again = false;
                        again2 = false;
                    } else {
                        cout << "Please type 'Yes' or 'No'";
                        again2 = true;
                    }
                }
                break;
            }
            case 2: {
                string item = "Oranges";
                auto it = M.mergedMaps.find(item);
                cout << "There are " << it->second << " " << it->first << " in stock." << endl;
                cout << "Would you like to select a different item? Type 'Yes' or 'No'";
                bool again2 = true;
                while (again2) {
                    cin >> choice2;
                    if (choice2 == "Yes") {
                        cout << "Please select another item: ";
                        again = true;
                        again2 = false;
                    } else if (choice2 == "No") {
                        cout << "Thank you for shopping at the Sugar Shop!";
                        again = false;
                        again2 = false;
                    } else {
                        cout << "Please type 'Yes' or 'No'";
                        again2 = true;
                    }
                }
                break;
            }
            case 3: {
                string item = "Apples";
                auto it = M.mergedMaps.find(item);
                cout << "There are " << it->second << " " << it->first << " in stock." << endl;
                cout << "Would you like to select a different item? Type 'Yes' or 'No'";
                bool again2 = true;
                while (again2) {
                    cin >> choice2;
                    if (choice2 == "Yes") {
                        cout << "Please select another item: ";
                        again = true;
                        again2 = false;
                    } else if (choice2 == "No") {
                        cout << "Thank you for shopping at the Sugar Shop!";
                        again = false;
                        again2 = false;
                    } else {
                        cout << "Please type 'Yes' or 'No'";
                        again2 = true;
                    }
                }
                break;
            }
            case 4: {
                string item = "Strawberries";
                auto it = M.mergedMaps.find(item);
                cout << "There are " << it->second << " " << it->first << " in stock." << endl;
                cout << "Would you like to select a different item? Type 'Yes' or 'No'";
                bool again2 = true;
                while (again2) {
                    cin >> choice2;
                    if (choice2 == "Yes") {
                        cout << "Please select another item: ";
                        again = true;
                        again2 = false;
                    } else if (choice2 == "No") {
                        cout << "Thank you for shopping at the Sugar Shop!";
                        again = false;
                        again2 = false;
                    } else {
                        cout << "Please type 'Yes' or 'No'";
                        again2 = true;
                    }
                }
                break;
            }
            case 5: {
                string item = "Cherries";
                auto it = M.mergedMaps.find(item);
                cout << "There are " << it->second << " " << it->first << " in stock." << endl;
                cout << "Would you like to select a different item? Type 'Yes' or 'No'";
                bool again2 = true;
                while (again2) {
                    cin >> choice2;
                    if (choice2 == "Yes") {
                        cout << "Please select another item: ";
                        again = true;
                        again2 = false;
                    } else if (choice2 == "No") {
                        cout << "Thank you for shopping at the Sugar Shop!";
                        again = false;
                        again2 = false;
                    } else {
                        cout << "Please type 'Yes' or 'No'";
                        again2 = true;
                    }
                }
                break;
            }
            case 6: {
                string item = "Pears";
                auto it = M.mergedMaps.find(item);
                cout << "There are " << it->second << " " << it->first << " in stock." << endl;
                cout << "Would you like to select a different item? Type 'Yes' or 'No'";
                bool again2 = true;
                while (again2) {
                    cin >> choice2;
                    if (choice2 == "Yes") {
                        cout << "Please select another item: ";
                        again = true;
                        again2 = false;
                    } else if (choice2 == "No") {
                        cout << "Thank you for shopping at the Sugar Shop!";
                        again = false;
                        again2 = false;
                    } else {
                        cout << "Please type 'Yes' or 'No'";
                        again2 = true;
                    }
                }
                break;
            }
            case 7: {
                string item = "Cupcakes";
                auto it = M.mergedMaps.find(item);
                cout << "There are " << it->second << " " << it->first << " in stock." << endl;
                cout << "Would you like to select a different item? Type 'Yes' or 'No'";
                bool again2 = true;
                while (again2) {
                    cin >> choice2;
                    if (choice2 == "Yes") {
                        cout << "Please select another item: ";
                        again = true;
                        again2 = false;
                    } else if (choice2 == "No") {
                        cout << "Thank you for shopping at the Sugar Shop!";
                        again = false;
                        again2 = false;
                    } else {
                        cout << "Please type 'Yes' or 'No'";
                        again2 = true;
                    }
                }
                break;
            }
            case 8: {
                string item = "Muffins";
                auto it = M.mergedMaps.find(item);
                cout << "There are " << it->second << " " << it->first << " in stock." << endl;
                cout << "Would you like to select a different item? Type 'Yes' or 'No'";
                bool again2 = true;
                while (again2) {
                    cin >> choice2;
                    if (choice2 == "Yes") {
                        cout << "Please select another item: ";
                        again = true;
                        again2 = false;
                    } else if (choice2 == "No") {
                        cout << "Thank you for shopping at the Sugar Shop!";
                        again = false;
                        again2 = false;
                    } else {
                        cout << "Please type 'Yes' or 'No'";
                        again2 = true;
                    }
                }
                break;
            }
            case 9: {
                string item = "Cookies";
                auto it = M.mergedMaps.find(item);
                cout << "There are " << it->second << " " << it->first << " in stock." << endl;
                cout << "Would you like to select a different item? Type 'Yes' or 'No'";
                bool again2 = true;
                while (again2) {
                    cin >> choice2;
                    if (choice2 == "Yes") {
                        cout << "Please select another item: ";
                        again = true;
                        again2 = false;
                    } else if (choice2 == "No") {
                        cout << "Thank you for shopping at the Sugar Shop!";
                        again = false;
                        again2 = false;
                    } else {
                        cout << "Please type 'Yes' or 'No'";
                        again2 = true;
                    }
                }
                break;
            }
            case 10: {
                string item = "Cakes";
                auto it = M.mergedMaps.find(item);
                cout << "There are " << it->second << " " << it->first << " in stock." << endl;
                cout << "Would you like to select a different item? Type 'Yes' or 'No'";
                bool again2 = true;
                while (again2) {
                    cin >> choice2;
                    if (choice2 == "Yes") {
                        cout << "Please select another item: ";
                        again = true;
                        again2 = false;
                    } else if (choice2 == "No") {
                        cout << "Thank you for shopping at the Sugar Shop!";
                        again = false;
                        again2 = false;
                    } else {
                        cout << "Please type 'Yes' or 'No'";
                        again2 = true;
                    }
                }
                break;
            }
            case 11: {
                string item = "Donuts";
                auto it = M.mergedMaps.find(item);
                cout << "There are " << it->second << " " << it->first << " in stock." << endl;
                cout << "Would you like to select a different item? Type 'Yes' or 'No'";
                bool again2 = true;
                while (again2) {
                    cin >> choice2;
                    if (choice2 == "Yes") {
                        cout << "Please select another item: ";
                        again = true;
                        again2 = false;
                    } else if (choice2 == "No") {
                        cout << "Thank you for shopping at the Sugar Shop!";
                        again = false;
                        again2 = false;
                    } else {
                        cout << "Please type 'Yes' or 'No'";
                        again2 = true;
                    }
                }
                break;
            }
            case 12: {
                string item = "Brownies";
                auto it = M.mergedMaps.find(item);
                cout << "There are " << it->second << " " << it->first << " in stock." << endl;
                cout << "Would you like to select a different item? Type 'Yes' or 'No'";
                bool again2 = true;
                while (again2) {
                    cin >> choice2;
                    if (choice2 == "Yes") {
                        cout << "Please select another item: ";
                        again = true;
                        again2 = false;
                    } else if (choice2 == "No") {
                        cout << "Thank you for shopping at the Sugar Shop!";
                        again = false;
                        again2 = false;
                    } else {
                        cout << "Please type 'Yes' or 'No'";
                        again2 = true;
                    }
                }
                break;
            }
            default: {
                again = true;
                cout << "That is not an item on the list." << endl;
                cout << "Select an item from the list to see what is in stock:" << endl;
            }
        }
    }
    return 0;
}
