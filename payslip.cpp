#include<iostream>
#include "payslip.h" // Assuming you have a "payslip.h" header file
using namespace std;
using namespace payslip;

int main()
{
    employee e[20];
    payscale p[20];
    int n, i, id, basic, hra, ta, da, deduc;
    string name;

    cout << "Enter the number of employees: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Enter Name, id, basic pay, hra, ta, da, and deduction of employee: ";
        cin >> name >> id >> basic >> hra >> ta >> da >> deduc;
        e[i].setNameAndId(name, id);
        p[i].setPayscale(hra, ta, da, basic, deduc);
        p[i].calcGradePay();
    }

    for (i = 0; i < n; i++) {
        cout << "\nEmployee: " << e[i].getName() << "\nID: " << e[i].getId() << endl;
        cout << "Salary details:" << endl;
        cout << "HRA=" << p[i].getHra() << " TA=" << p[i].getTa() << " DA=" << p[i].getDa() << endl;
        cout << "Basic Pay=" << p[i].getBasicPay() << " Deduction=" << p[i].getDeduc() << endl;
        cout << "Grade Pay=" << p[i].getGradePay() << "\n";
    }

    return 0;
}
