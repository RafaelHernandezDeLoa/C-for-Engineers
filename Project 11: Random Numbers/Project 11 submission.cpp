// Rafael Hernandez's Project 11 Mandatory 4/26/2022
#include <iostream>

using namespace std;

int main()
{
  int choice;
  
  while (true)
  {
    cout << "Do you want to do? multiplication problems (1) or division problems (2)? ";
    cin >> choice;
    
    if (choice == 1 || choice == 2)
    {
      break;
    }
    else
    {
      cout << "not an option.";
    }
  }
  
  int Number1;
  int Number2;
  srand(time(0));
  
  if (choice == 1)
  {
    while (true)
    {
      Number1 = 1 + rand() % (9 - 1 + 1);
      Number2 = 1 + rand() % (9 - 1 + 1);
      
      cout << "How much is " << Number1 << " time " << Number2 << "? ";
      int answer;
      
      while (true)
      {
        cin >> answer;
        
        if (answer == Number1 * Number2)
        {
          cout << "Very good!\n\n";
          break;
        }
        else
        {
          cout << "No. Please try again.\n\n";
        }
      }
    }
  }
  else if (choice == 2)
  {
    while (true)
    {
      Number1 = 100 + rand() % (9999 - 100 + 1);
      Number2 = 1 + rand () % (99 - 1 + 1);
      
      cout << "How much is " << Number1 << " divided by " << Number2 << "? ";
      int ansQuotient, ansReminder;
      
      while (true)
      {
        cout << "Quotient: ";
        cin >> ansQuotient;
        cout << "Reminder: ";
        cin >> ansReminder;
        
        if (ansQuotient == (Number1 / Number2) && ansReminder == (Number1 % Number2))
        {
          cout << "Very good!\n\n";
          break;
        }
        else
        {
          cout << "No. Please try again.\n\n";
        }
      }
    }
  }
  
  return 0;
}
