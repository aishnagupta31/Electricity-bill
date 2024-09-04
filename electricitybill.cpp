#include <iostream>
using namespace std;
class user {
    string name;
    int units;
    float total;
public:
    void setDetails(int units, string name) {
        this->units = units;
        this->name = name;
    }
    float calculateBill() {
        total = 50;
        if (units <= 100) {
            total += units * 0.60;
        } 
		else if (units <= 300) {
            total += (100 * 0.60) + ((units - 100) * 0.80);
        } 
		else {
            total += (100 * 0.60) + (200 * 0.80) + ((units - 300) * 0.90);
        }
        return total;
    }
    float applySurcharge(float total) {
        if (total > 300) {
            total += total * 0.15;
        }
        return total;
    }
    void show() {
        cout << "Name: " << name << "\tUnits: " << units << "\tTotal: " << total << " rupees" << endl;
    }
    void calculateAndDisplay() {
        total = calculateBill();
        total = applySurcharge(total);
        show();
    }
};
int main() {
    user d1;
    d1.setDetails(400, "Alisha");
    d1.calculateAndDisplay();

    return 0;
}