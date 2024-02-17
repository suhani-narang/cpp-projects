#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class library
{
public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};
int main()
{
    library lib[20];
    int input = 0;
    int count = 0;

    while (input != 3)
    {
        cout << "enter 1  to input details like  id,name,author,student ,price,pages" << endl;
        cout << "enter 2 to display details" << endl;
        cout << "enter 3 to quit" << endl;
        cin >> input;
        switch (input)
        {

        case 1:
        start:
            char author[100];
            cout << "enter book id" << endl;
            cin >> lib[count].id;
            cout << "enter book name" << endl;
            // cin >> lib[count].name;
            cin.getline(lib[count].name, 100, '$');
            cout << "enter book author" << endl;
            // cin >> lib[count].author;
            cin.getline(lib[count].author, 100, '$');
            cout << "enter student name" << endl;
            //  cin >> lib[count].student;
            cin.getline(lib[count].student, 100, '$');
            cout << "enter book price" << endl;
            cin >> lib[count].price;
            cout << "enter book page" << endl;
            cin >> lib[count].pages;
            count++;
            break;
        case 2:
            for (int i = 0; i < count; i++)
            {
                cout << "int ID is :" << lib[i].id << endl;
                cout << "book name is :" << lib[i].name;
                cout << "book author is :" << lib[i].author;
                cout << "student name is :" << lib[i].student;
                cout << "book price is :" << lib[i].price << endl;
                cout << "book pages is :" << lib[i].pages << endl;
            }
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "you have entered wromg value,please tyoe again" << endl;
            goto start;
        }
    }
}
