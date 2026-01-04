//The AI ​​assistant was used in the last situation

#include <iostream>
#include <string>
using namespace std;

int main() {
    string days[7] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
    double sales[7] = { 1549, 1700, 1342, 2000, 1200, 1132, 1000 };

    int max = sales[0];
    int min = sales[0];
    int totals = 0;

    for (int i = 0; i < 7; i++) totals += sales[i];
    double ave = double(totals) / 7;

    cout << "Average = " << ave << "\n\n";

    for (int i = 0; i < 7; i++) {
        cout << days[i] << " => " << sales[i] << endl;

        if (sales[i] > max) max = sales[i];
        if (sales[i] < min) min = sales[i];
    }

    cout << "\nMax = " << max << endl;
    cout << "Min = " << min << endl;
    cout << "Total = " << totals << endl;

    // التتالي والتحذير
    bool prev_day_low = false;
    for (int i = 0; i < 7; i++) {
        bool today = (sales[i] < ave);
        if (today && prev_day_low) {
            cout << "Warning !! : Two consecutive days below average! (Day " 
                 << days[i-1] << " & " << days[i] << ")\n";
        }
        prev_day_low = today;
    }

    return 0;
}
