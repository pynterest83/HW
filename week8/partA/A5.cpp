#include <iostream>
#include <string>

using namespace std;

struct address {
    string street;
    string city;
    string state;
    int zip;
};

struct person {
    char* name = new char [50];
    address *ad;
};

int main(){
    person p1;
    person p2;
    p1.name = "Quang";
    p1.ad = new address{"255 Cau Giay", "Ha Noi", "Viet Nam", 10000};
    p2 = p1;
    
    p1.ad->zip = 20000;
    cout << p2.ad->zip << endl;

    p1.name = "Quang Chu";
    cout << p2.name << endl;

    return 0;
}