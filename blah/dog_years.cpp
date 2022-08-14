#include <iostream>

int main() {
  //name is a string
  std::string name;
  //asking name of dog
  std::cout << "What is the name of your dog?\n";
  //assigning name to user input
  std::cin >> name;
  //dog age
  int dog_age;
  //asking user how old their dog is
  std::cout << "how old is your dog?\n";
  //assigns user input to dog age
  std::cin >> dog_age;
  //first 2 years of a dogs life count as 21 years
  int early_years = 21;
  //each following year counts as 4 human years
  int later_years = (dog_age - 2) * 4;
  //Early years and younger years are added together
  int human_years = early_years + later_years;
  //Calculates how old the dog is in human years
  std::cout << "My name is " << name << "!. I am " << human_years << " in human years\n";

return 0;
}
  