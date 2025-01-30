// Rafael Hernandez's Project 12 Mandatory 5/3/2022
#include <iostream>

using namespace std;

int main()
{
  while (true)
  {
    cout << "Welcome to Blackjack!\n";
      
    int totalPlayer, totalDealer, choice, newCard;
      
    srand(time(0));
    int card1 = 1 + rand() % 10;
    int card2 = 1 + rand() % 10;
    totalPlayer = card1 + card2;
    int dealersOtherCard = 1 + rand() % 10;
    totalDealer = 1 + rand() % 10;
      
    cout << "You drew a " << card1 << " and " << card2 << ". Your total is " << totalPlayer << " and the dealer drew a " << totalDealer << " and another card.\n";
    
    while (true)
    {
      cout << "Dealer: Do you hit (1) or stand (2)? ";
      cin >> choice;
        
      if (choice == 1)
      {
        newCard = (1 + rand() % 10);
        totalPlayer += newCard;
        cout << "You drew " << newCard << ". Your new total is " << totalPlayer << ".\n";
        
        if (totalPlayer > 21)
        {
          break;
        }
      }
      else if (choice == 2)
      {
        break;
      }
      else
      {
        cout << "Not an option.\n";
      }
    }
    
    if (totalPlayer > 21)
    {
      cout << "Bust.\n\n";
      continue;
    }
    
    totalDealer += dealersOtherCard;
    cout << "The other card the dealer had was a " << dealersOtherCard << ". The dealer's new total is " << totalDealer << ".\n";
    
    while (totalDealer < 17)
    {
      dealersOtherCard = 1 + rand() % 10;
      totalDealer += dealersOtherCard;
      cout << "The dealer decides to draw a card and he got a " << dealersOtherCard << ". The dealer's new total is " << totalDealer << ".\n";
    }
      
    if (totalPlayer > totalDealer)
    {
      cout << "You won.\n\n";
    }
    else
    {
      cout << "You lost.\n\n";
    }
  }
  return 0;
}
