// Rafael Hernandez's Project 9 Mandatory 4/17/2022
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  enum States {Enter_Currency = 1, Wait_For_Sel = 2, Check_Inventory = 3, Return_Total = 4};
  
  int total = 0;
  int money = 0;
  int sodaCost = 75;
  int selection = 0;
  int numOfWater = 2;
  int numOfJuice = 2;
  States state = Enter_Currency;
  
  while (true)
  {
    switch (state)
    {
      case Enter_Currency:
      {
        cout << "Add $ in terms of cents (no decimal points) to the machine or -1 to return $ (soda costs 75 cents): ";
        cin >> money;
        
        if (money == -1)
        {
          state = Return_Total;
          break;
        }
        
        total += money;
        
        if (total < sodaCost)
        {
          
        }
        else
        {
          cout << "You received " << total - sodaCost << " cents back" << endl;
          total = total - (total - sodaCost);
          state = Wait_For_Sel;
        }
      }
      break;
      
      case Wait_For_Sel:
      {
        cout << "Would you like a water (1) or apple juice (2)? (-1 to return) ";
        cin >> selection;
        
        if (selection == -1)
        {
          state = Return_Total;
        }
        else
        {
          state = Check_Inventory;
        }
      }
      break;
      
      case Check_Inventory:
      {
        if (numOfWater == 0 & numOfJuice == 0)
        {
          cout << "All sold out" << endl;
          state = Return_Total;
          break;
        }
        
        if (selection == 1)
        {
          if (numOfWater == 0)
          {
            cout << "Out of water" << endl;
            state = Wait_For_Sel;
            break;
          }
          else
          {
            numOfWater--;
            cout << "Water dispensed" << endl;
          }
        }
        else if (selection == 2)
        {
          if (numOfJuice == 0)
          {
            cout << "Out of juice" << endl;
            state = Wait_For_Sel;
            break;
          }
          else
          {
            numOfJuice--;
            cout << "Juice dispensed" << endl;
          }
        }
        
        total -= 75;
        state = Return_Total;
      }
      break;
      
      case Return_Total:
      {
        cout << total << " cents has been dispensed" << endl << endl;
        total = 0;
        state = Enter_Currency;
      }
      break;
    }
  }
  
  return 0;
}
