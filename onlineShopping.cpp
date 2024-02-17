#include <iostream>
using namespace std;

int main()
{
    char startValue;
    char choiceAgain;
    float onlineShopping(void);
startLevel:
    cout << "please press s to start shopping" << endl;
start:
    cin >> startValue;
    if (startValue == 's' || startValue == 'S')
    {
        float totalAmount = onlineShopping();
        cout << "total bill amount is : " << totalAmount << endl;
    shoppingAgain:
        cout << "do you want to shop again,y or n" << endl;
        cin >> choiceAgain;
        if (choiceAgain == 'y' || choiceAgain == 'Y')
        {
            goto startLevel;
        }
        else if (choiceAgain == 'n' || choiceAgain == 'N')
        {
            cout << "thanks for shopping" << endl;
        }
        else
        {
            cout << "you have entered wrong option,please type again" << endl;
            goto shoppingAgain;
        }
    }
    else
    {
        cout << "you have entered wrong option,please press s" << endl;
        goto start;
    }
}

float onlineShopping()
{
    char choice;
    char item;
    float billAmount = 0;
    int quantity;
    cout << "**********welcome to online shopping**********" << endl;
    cout << "----------please follow the instructions------" << endl;
    cout << "(1) please enter m to order mobile phone" << endl;
    cout << "(2) please press l to order laptops" << endl;
    cout << "(3) please press d to order desktops" << endl;
    cout << "(4) please press s to order speakers" << endl;
    cout << "(5) please press h to order headphones" << endl;
    cin >> choice;
selectOption:
    // mobile phones
    if (choice == 'm' || choice == 'M')
    {
    mobileLevel:
        cout << "mobile details" << endl;
        cout << "(1) Apple => price:40000" << endl;
        cout << "(2) vivo => price:25000" << endl;
        cout << "(3) oppo => price:20000" << endl;
        cout << "(4) redmi => price:18000" << endl;
        cout << "(5) realmi => price:17000" << endl;
        cout << "(6) samsung => price:25000" << endl;
        cout << "please enter your choice" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 40000;
        }
        else if (item == '2')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 25000;
        }
        else if (item == '3')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 20000;
        }
        else if (item == '4')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 18000;
        }
        else if (item == '5')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 17000;
        }
        else if (item == '6')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 25000;
        }
        else
        {
            cout << "you have entered wrong option , please type again " << endl;
            goto mobileLevel;
        }
    }
    //  laptop
    else if (choice == 'l' || choice == 'L')
    {
    laptopLevel:
        cout << "laptop details" << endl;
        cout << "(1) Apple => price:100000" << endl;
        cout << "(2) hp => price:50000" << endl;
        cout << "(3) oppo => price:40000" << endl;
        cout << "(4) redmi => price:38000" << endl;
        cout << "(5) realmi => price:37000" << endl;
        cout << "(6) samsung => price:50000" << endl;
        cout << "please enter your choice" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 100000;
        }
        else if (item == '2')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 50000;
        }
        else if (item == '3')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 40000;
        }
        else if (item == '4')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 38000;
        }
        else if (item == '5')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 37000;
        }
        else if (item == '6')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 50000;
        }
        else
        {
            cout << "you have entered wrong option , please type again " << endl;
            goto laptopLevel;
        }
    }
    //  desktop
    else if (choice == 'd' || choice == 'D')
    {
    desktopLevel:
        cout << "desktop details" << endl;
        cout << "(1) Apple => price:10000" << endl;
        cout << "(2) hp => price:5000" << endl;
        cout << "(3) oppo => price:4000" << endl;
        cout << "(4) redmi => price:3000" << endl;
        cout << "(5) realmi => price:7000" << endl;
        cout << "(6) samsung => price:5500" << endl;
        cout << "please enter your choice" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 10000;
        }
        else if (item == '2')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 5000;
        }
        else if (item == '3')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 4000;
        }
        else if (item == '4')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 3000;
        }
        else if (item == '5')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 7000;
        }
        else if (item == '6')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 5500;
        }
        else
        {
            cout << "you have entered wrong option , please type again " << endl;
            goto desktopLevel;
        }
        //  speaker
    }
    else if (choice == 's' || choice == 'S')
    {
    speakerLevel:
        cout << "speaker details" << endl;
        cout << "(1) Alexa => price:5000" << endl;
        cout << "(2) boat => price:1000" << endl;
        cout << "(3) noice => price:1200" << endl;
        cout << "(4) redmi => price:1800" << endl;
        cout << "(5) realmi => price:700" << endl;
        cout << "(6) samsung => price:2000" << endl;
        cout << "please enter your choice" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 5000;
        }
        else if (item == '2')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 1000;
        }
        else if (item == '3')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 1200;
        }
        else if (item == '4')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 1800;
        }
        else if (item == '5')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 700;
        }
        else if (item == '6')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 2000;
        }
        else
        {
            cout << "you have entered wrong option , please type again " << endl;
            goto speakerLevel;
        }
    }
    //  headphones
    else if (choice == 'h' || choice == 'H')
    {
    headphoneLevel:
        cout << "headphones details" << endl;
        cout << "(1) Apple => price:10000" << endl;
        cout << "(2) hp => price:5000" << endl;
        cout << "(3) oppo => price:4000" << endl;
        cout << "(4) redmi => price:3000" << endl;
        cout << "(5) realmi => price:3700" << endl;
        cout << "(6) samsung => price:5000" << endl;
        cout << "please enter your choice" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 10000;
        }
        else if (item == '2')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 5000;
        }
        else if (item == '3')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 4000;
        }
        else if (item == '4')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 3000;
        }
        else if (item == '5')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 3700;
        }
        else if (item == '6')
        {
            cout << "enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 5000;
        }
        else
        {
            cout << "you have entered wrong option , please type again " << endl;
            goto headphoneLevel;
        }
    }
    else
    {
        cout << "you have entered wrong option , please type again " << endl;
        goto selectOption;
    }
    return billAmount;
}
