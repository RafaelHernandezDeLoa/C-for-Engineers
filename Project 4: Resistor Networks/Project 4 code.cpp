// Rafael Hernandez's Project 4
#include <iostream>

using namespace std;

int main()
{
  while (true)
  {
    int calculation;
    cout << "parallel (1) or series (2) calculation? ";
    cin >> calculation;
    
    int NumOfLoops;
    cout << "Enter the number of resistors you plan to use: ";
    cin >> NumOfLoops;
    
    int LoopsDone = 0;
    int CurrentResistor;
    if (calculation == 1)
    {
      double ParallelDenominator = 0.0;
      while (LoopsDone < NumOfLoops)
      {
        cout << "Enter resistor value: ";
        cin >> CurrentResistor;
        
        ParallelDenominator = ParallelDenominator + 1.0/CurrentResistor;
        ++LoopsDone;
      }
      
      cout << "Equivalent resistor value: " << 1.0/ParallelDenominator << endl << endl;
    }
    else if (calculation == 2)
    {
      int SeriesEq = 0;
      while (LoopsDone < NumOfLoops)
      {
        cout << "Enter resistor value: ";
        cin >> CurrentResistor;
        
        SeriesEq = SeriesEq + CurrentResistor;
        
        ++LoopsDone;
      }
      
      cout << "Equivalent resistor value: " << SeriesEq << endl << endl;
    }
  }
  
  return 0;
}
