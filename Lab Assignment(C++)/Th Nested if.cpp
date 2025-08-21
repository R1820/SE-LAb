#include <iostream>
int main()
{
    int score = 85;
    char grade = 'B';

    if (score >= 70)
        {
          std::cout << "You passed the exam." << std::endl;
          if (grade == 'A')
          {
            std::cout << "Excellent work!" << std::endl;
          }
          else if (grade == 'B')
            {
              std::cout << "Good job!" << std::endl;
            }
        }
        else
        {
          std::cout << "You did not pass the exam." << std::endl;
        }
    return 0;
}
