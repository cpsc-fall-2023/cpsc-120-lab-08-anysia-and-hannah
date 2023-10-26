// Hannah Sithideth
// hfsith@csu.fullerton.edu
// @hfsith
// Partners: @anysia21

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() != 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  std::string command{arguments.at(0)};
  std::string number{arguments.at(1)};
  bool first{true};
  for (std::string argument : arguments) {
    if (command) {
      command = false;
      continue;
    }
    sum+= std::stod(argument);
  }

  // TODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.

  // TODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.

  // TODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "average = ";

  return 0;
}
