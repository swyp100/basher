 // AI has been used in many situations.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string parks[] = { "A1","A2","A3","A4","A5","A6","A7" };

    vector<int> cond(7, 0);     
    vector<int> carID(7, -1);    
    vector<int> entryTime(7, 0); 

    int choice;
    int pricePerHour = 5;

    do {

        cout << "\n===== MENU PARKING =====\n";
        cout << "1. Enter Car\n";
        cout << "2. Exit Car\n";
        cout << "3. Show Parking\n";
        cout << "4. Exit Program\n";
        cout << '\n';
        cout << "Choose: ";

        cin >> choice;

        // enter car

        if (choice == 1) {

            int car, timeIn;
            bool exists = false;

            cout << "Enter car ID: ";
            cin >> car;

            // spam
            for (int i = 0; i < 7; i++) {

                if (carID[i] == car) {

                    exists = true;

                }

            }

            if (exists) {

                cout << "Car already exists!\n";
            }

            else {

                bool parked = false;

                for (int i = 0; i < 7; i++) {

                    if (cond[i] == 0) {
                        cout << "Enter entry time: ";
                        cin >> timeIn;

                        cond[i] = 1;
                        carID[i] = car;
                        entryTime[i] = timeIn;

                        cout << "Car parked at " << parks[i] << endl;
                        parked = true;
                        break;
                    }
                }

                if (!parked) {

                    cout << "Parking is full!\n";
                }
            }
        }

        // ===== exit car =====

        else if (choice == 2) {

            int car, timeOut;
            bool found = false;

            cout << "Enter car ID: ";
            cin >> car;

            for (int i = 0; i < 7; i++) {

                if (carID[i] == car) {

                    cout << "Enter exit time: ";
                    cin >> timeOut;

                    int duration = timeOut - entryTime[i];
                    int cost = duration * pricePerHour;

                    cout << "Duration: " << duration << " hours\n";
                    cout << "Cost: " << cost << " $\n";

                    cond[i] = 0;
                    carID[i] = -1;
                    entryTime[i] = 0;

                    found = true;
                }
            }

            if (!found) {

                cout << "Car not found!\n";
            }
        }

        // ===== show parks =====

        else if (choice == 3) {

            cout << "\n--- Parking Status ---\n";

            for (int i = 0; i < 7; i++) {

                cout << parks[i] << " => ";

                if (cond[i] == 0) cout << "Empty\n";
                else cout << "Full | Car ID: " << carID[i] << endl;

            }
        }

        // ===== logic =====

        else if (choice != 4) { cout << "Wrong choice!\n"; }

    } while (choice != 4);

    cout << "GOOD BYE !!\n";
    
    return 0;
}
