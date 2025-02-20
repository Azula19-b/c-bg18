#include <iostream>
#include <string>
#include <iomanip> // For formatting output

int main() {
    // Declare variables
    std::string userName;
    int heightInInches;
    int weightInPounds;
    float lowerBmiRange, upperBmiRange;

    // Display message for user's information
    std::cout << "Enter user information:" << std::endl;

    // Read input from the user
    std::cout << "Name: ";
    std::getline(std::cin, userName);

    std::cout << "Height (in inches): ";
    std::cin >> heightInInches;

    std::cout << "Weight (in pounds): ";
    std::cin >> weightInPounds;

    // Read input for standard BMI range
    std::cout << "Enter lower BMI range: ";
    std::cin >> lowerBmiRange;

    std::cout << "Enter upper BMI range: ";
    std::cin >> upperBmiRange;

    // Calculate BMI
    float bmi = (weightInPounds * 703.0) / (heightInInches * heightInInches);

    // Display the result
    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    std::cout << "SP2024_AdultBMI_Calculator_Ozer.cpp" << std::endl;
    std::cout << "Spring 2024 semester - BAHAR OZER" << std::endl;
    std::cout << "Standard BMI :           " << lowerBmiRange << " - " << upperBmiRange << std::endl;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    std::cout << "Name:                    " << userName << std::endl;
    std::cout << "Height:                  " << heightInInches << std::endl;
    std::cout << "Weight:                  " << weightInPounds << std::endl;
    std::cout << "BMI:                     " << std::fixed << std::setprecision(2) << bmi << std::endl;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;

    return 0;
}