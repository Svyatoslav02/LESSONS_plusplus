
#include <iostream>
#include <fstream>
#include<string>
using namespace std;
//         ofstream
//         ifstream
//         fstream
//void write(string & file, string text) {
//    fstream obj;
//    obj.open(file, ios::out);
//
//    if (obj.is_open()) {
//        obj << text << endl;
//
//        obj.close();
//    }
//    else {
//        cout << "Error write file: status 002" << endl;
//    }
//}
//void read(string& file) {
//    fstream obj;
//
//    obj.open(file, ios::in);
//    if (obj.is_open()) {
//        string txt;
//        while (getline(obj, txt)) {
//            cout << txt;
//        }
//        obj.close();
//    }
//    else {
//        cout << "Error read file: status 001" << endl;
//    }
//}
struct Student {
    string name;
    int age;
    bool c_plust_plus;

    Student(string name, int age, bool c_plus_plus) {
        this->name = name;
        this->age = age;
        this->c_plust_plus = c_plus_plus;
    }


    void write(string& f) {
            fstream obj;
            obj.open(f, ios::app);
            if (obj.is_open()) {

                obj << name << age << c_plust_plus << endl;

                obj.close();
            }
            else {
                obj.open(f, ios::out);
                return write(f);
            }
    }
};
//void write(string& f) {
//
//    fstream obj;
//    if (obj.is_open()) {
//        obj.open(f, ios::app);
//        for (size_t i = 0; i < 10; i++)
//        {
//            obj << i << endl;
//        }
//    }
//    else {
//        obj.open(f, ios::out);
//        return write(f);
//    }
//
//}
int main()
{
    Student mass[3] = {
        Student("asd",12,true),
        Student("asd2",12,true),
        Student("asd1",12,true) 
    };

    string file = "student.txt";

    for (size_t i = 0; i < 3; i++)
    {
        mass[i].write(file);
    }


    /*string file = "gg.txt";

    write(file);*/


    /*string nameFile = "C:\\newTXT.txt";

    write(nameFile, "HELLO WORLD");

    read(nameFile);*/
}

