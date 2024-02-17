#include <iostream>
using namespace std;

int main()
{
  char startValue;
  char selectAgain;
  float convertor(void);

start:
  cout << "**********welcome to curreny converter application*************" << endl;
  cout << "**********please follow the instructions**********" << endl;
  cout << "you can have currencies dollar," << endl;
  cout << "you can type a,b,c,d respectively for currencies dollar ,rupees,euro,pound" << endl;
  cout << "enter currency 1 which you want to convert" << endl;
  cout << "enter value for currency1" << endl;
  cout << "enter currency2 in which you want to convert currency1" << endl;
  cout << "(a)dollar (b)rupees (c)euro (d)pound" << endl;
  cout << "please press s to start" << endl;
typeAgain:
selectChoice:
  cin >> startValue;
  if (startValue == 's' || startValue == 'S')
  {
    float finalValue = convertor();
    cout << "result is : " << finalValue << endl;
    cout << "do you want to use the appication again? y or n" << endl;
    cin >> selectAgain;
    if (selectAgain == 'y' || selectAgain == 'Y')
    {
      goto start;
    }
    else if (selectAgain == 'n' || selectAgain == 'N')
    {
      cout << "thankyou for using our application" << endl;
    }
    else
    {
      cout << "you have entered wrong value ,please type again" << endl;
      goto typeAgain;
    }
  }
  else
  {
    cout << "you have entered wrong value ,please type s" << endl;
    goto selectChoice;
  }
}
float convertor()
{
  char currName1;
  char currName2;
  float currency1;
  float currency2;
currLevel:
  cout << "enter currency1 name" << endl;
  cin >> currName1;
  cout << "enter currency1 value" << endl;
  cin >> currency1;
  switch (currName1)
  {
  case 'a':
  currLevel1:
    cout << "enter  currency2 name" << endl;
    cin >> currName2;
    if (currName2 == 'a' || currName2 == 'A')
    {
      currency2 = currency1 * 1;
    }
    else if (currName2 == 'b' || currName2 == 'B')
    {
      currency2 = currency1 * 73.84;
    }
    else if (currName2 == 'c' || currName2 == 'C')
    {
      currency2 = currency1 * 0.85;
    }
    else if (currName2 == 'd' || currName2 == 'D')
    {
      currency2 = currency1 * 0.72;
    }
    else
    {
      cout << "you have entered wrong value,please type aagain" << endl;
      goto currLevel1;
    }
    break;
  case 'b':
  currLevel2:
    cout << "enter  currency2 name" << endl;
    cin >> currName2;
    if (currName2 == 'a' || currName2 == 'A')
    {
      currency2 = currency1 * 0.01;
    }
    else if (currName2 == 'b' || currName2 == 'B')
    {
      currency2 = currency1 * 1;
    }
    else if (currName2 == 'c' || currName2 == 'C')
    {
      currency2 = currency1 * 0.01;
    }
    else if (currName2 == 'd' || currName2 == 'D')
    {
      currency2 = currency1 * 0.009;
    }
    else
    {
      cout << "you have entered wrong value,please type aagain" << endl;
      goto currLevel2;
    }
    break;
  case 'c':
  currLevel3:
    cout << "enter  currency2 name" << endl;
    cin >> currName2;
    if (currName2 == 'a' || currName2 == 'A')
    {
      currency2 = currency1 * 1.16;
    }
    else if (currName2 == 'b' || currName2 == 'B')
    {
      currency2 = currency1 * 86.37;
    }
    else if (currName2 == 'c' || currName2 == 'C')
    {
      currency2 = currency1 * 1;
    }
    else if (currName2 == 'd' || currName2 == 'D')
    {
      currency2 = currency1 * 0.85;
    }
    else
    {
      cout << "you have entered wrong value,please type aagain" << endl;
      goto currLevel3;
    }
    break;
  case 'd':
  currLevel4:
    cout << "enter  currency2 name" << endl;
    cin >> currName2;
    if (currName2 == 'a' || currName2 == 'A')
    {
      currency2 = currency1 * 1.37;
    }
    else if (currName2 == 'b' || currName2 == 'B')
    {
      currency2 = currency1 * 1.17;
    }
    else if (currName2 == 'c' || currName2 == 'C')
    {
      currency2 = currency1 * 101.20;
    }
    else if (currName2 == 'd' || currName2 == 'D')
    {
      currency2 = currency1 * 1;
    }
    else
    {
      cout << "you have entered wrong value,please type aagain" << endl;
      goto currLevel4;
    }
    break;
  default:
  {
    cout << "you have entered wrong value,please type aagain" << endl;
    goto currLevel;
    break;
  }
  }
  return currency2;
}