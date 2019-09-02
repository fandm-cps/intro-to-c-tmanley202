#include <iostream>

int num = 4;

int main()
{

  std::cout << "Guess the number: " << std::endl;

  int guess = 0;

  while(guess != num)
    {
      std::cin >> guess;
    if(guess == num)
      {
	std::cout << "Correct\n" << std::endl;
	break;
      }
    else
      {
	std::cout << "Wrong. Guess again: " << std::endl;
      }
    }
 
  
}
