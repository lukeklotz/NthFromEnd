#include <iostream>
using namespace std;

void GetInput(int userArray[], int& size, int& NthVal);
void GetOutput(int userArray[], int& size, int& NthVal);
void WelcomeMessage();
void GoodByeMessage();

int main() {

const int MAX_VAL = 20;
int userArray[MAX_VAL];
int size;
int NthVal;
  

WelcomeMessage();
  
GetInput(userArray, size, NthVal);
GetOutput(userArray, size, NthVal);

GoodByeMessage();

}

// gets  input + size + NthVal
void GetInput(int userArray[], int& size, int& NthVal) 
{
  cout << "Please enter the values for an array (negative number to end input): " << endl;

  int i = 0;
  int userInput = 0;
  
  
   do {
      cin >> userInput;

      if(userInput > 0) 
      {
        userArray[i] = userInput;
        ++i;
      }
      else 
      {
        NthVal = userInput * -1;
        break;
      }
    } while (userInput > 0);
  
  size = i;
  
} 

// outputs what Nth value from the end is
void GetOutput(int userArray[], int& size, int& NthVal) 
{

  if (NthVal <= size) 
  {
    if (NthVal == 1) 
    {
      cout << "The " << NthVal << "st value from the end is " << userArray[size - NthVal];
    }
    else if (NthVal == 2)
    {
     cout << "The " << NthVal << "nd value from the end is " << userArray[size - NthVal];
    }
    else if (NthVal == 3)
    {
     cout << "The " << NthVal << "rd value from the end is " << userArray[size - NthVal]; 
    }
    else
    {
     cout << "The " << NthVal << "th value from the end is " << userArray[size - NthVal]; 
    }
  }

  else 
  {
    cout << "Your value is larger than size! Here is your array plus the negative value: \n";
      for (int i = 0; i < size; ++i) 
      {
        cout << userArray[i];
        cout << " ";
      }

    cout << NthVal;
    
  }
}

// promts user with a goodbye message
void GoodByeMessage() 
{
  cout << "\n\nThank you for using my program!";
}

// prompts user with a welcome message
void WelcomeMessage() 
{
  cout << "Welcome to my Nth from end program!\n\n";
}
