#include <iostream>
using namespace std;

int main()
{
    char value;
    char again;
start:
    cout << "----------welcome to the calculator application---------" << endl;
    cout << "***********please follow the instructions***********" << endl;
    cout << "(1) please press a for adittion" << endl;
    cout << "(2) please press s for subtraction" << endl;
    cout << "(3) please press m for multiplication" << endl;
    cout << "(4) please press d for division" << endl;
    cout << "(5) please press o for modulo" << endl;
    int addition(void);
    int subtraction(void);
    int multiplication(void);
    int division(void);
    int modulous(void);

    cin >> value;
    if (value == 'a' || value == 'A')
    {
        int addValue = addition();
        cout << "addition is : " << addValue << endl;
        cout << "do you want to use our application again,y or n" << endl;
    addAgain:
        cin >> again;
        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "thankyou for using our application" << endl;
        }
        else
        {
            cout << "you have entered  wrong choice,please select y 0r n" << endl;
            goto addAgain;
        }
    }
    else if (value == 's' || value == 'S')
    {
        int subValue = subtraction();
        cout << "subtraction is : " << subValue << endl;
        cout << "do you want to use our application again,y or n" << endl;
    subAgain:
        cin >> again;
        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "thankyou for using our application" << endl;
        }
        else
        {
            cout << "you have entered  wrong choice,please select y 0r n" << endl;
            goto subAgain;
        }
    }
    else if (value == 'm' || value == 'M')

    {
        int mulValue = multiplication();
        cout << "multiplication is : " << mulValue << endl;
        cout << "do you want to use our application again,y or n" << endl;
    mulAgain:
        cin >> again;
        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "thankyou for using our application" << endl;
        }
        else
        {
            cout << "you have entered  wrong choice,please select y 0r n" << endl;
            goto mulAgain;
        }
    }
    else if (value == 'd' || value == 'D')
    {
        int divValue = division();
        cout << "division is : " << divValue << endl;
        cout << "do you want to use our application again,y or n" << endl;
    divAgain:
        cin >> again;
        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "thankyou for using our application" << endl;
        }
        else
        {
            cout << "you have entered  wrong choice,please select y 0r n" << endl;
            goto divAgain;
        }
    }
    else if (value == 'o' || value == 'O')
    {
        int modValue = modulous();
        cout << "modulous is : " << modValue << endl;
        cout << "do you want to use our application again,y or n" << endl;
    modAgain:
        cin >> again;
        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "thankyou for using our application" << endl;
        }
        else
        {
            cout << "you have entered  wrong choice,please select y 0r n" << endl;
            goto modAgain;
        }
    }
    else
    {
        cout << "you have entered  wrong choice,please enter again" << endl;
        goto start;
    }
}
// addition oprations
int addition()
{
    int a;
    int total = 0;
    char choice;
add:
    cout << "enter a number" << endl;
    cin >> a;
    total = total + a;
    cout << "do you want to add more numbers,y  or no" << endl;
addAgain:
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        goto add;
    }
    else if (choice == 'n' || choice == 'N')
    {
        return total;
    }
    else
    {
        cout << "you have entered  wrong choice,please select y 0r n" << endl;
        goto addAgain;
    }
    return total;
}
// multiplication oprations
int multiplication()
{
    int a;
    int total = 1;
    char choice;
mul:
    cout << "enter a number" << endl;
    cin >> a;
    total = total * a;
    cout << "do you want to multiply more numbers,y  or no" << endl;
mulAgain:
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        goto mul;
    }
    else if (choice == 'n' || choice == 'N')
    {
        return total;
    }
    else
    {
        cout << "you have entered  wrong choice,please select y 0r n" << endl;
        goto mulAgain;
    }
    return total;
}

// subtraction oprations
int subtraction()
{
    int a, b;
    int total;
    char choice;

    cout << "enter two number" << endl;
    cin >> a >> b;
    if (a > b)
    {
        total = a - b;
    }

    else
    {
        total = b - a;
    }

    return total;
}
// division oprations
int division()
{
    int a, b;
    int total;
    char choice;

    cout << "enter two number" << endl;
    cin >> a >> b;
    if (a > b)
    {
        total = a / b;
    }
    else
    {
        total = b / a;
    }

    return total;
}

// modulous oprations
int modulous()
{
    int a, b;
    int total;
    char choice;

    cout << "enter two number" << endl;
    cin >> a >> b;
    if (a > b)
    {
        total = a % b;
    }
    else
    {
        total = b % a;
    }

    return total;
}
