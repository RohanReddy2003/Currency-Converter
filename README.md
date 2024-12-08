# Currency-Converter
This is a simple Currency Converter application implemented in C++ that allows users to convert amounts from Indian Rupees (INR) into three different currencies:

US Dollars (USD)
Euros (EUR)
Japanese Yen (JPY)
The program provides a user-friendly interface for selecting the target currency and entering the amount to convert. It also includes an option to continue converting to other currencies without restarting the application.

# Usage Instructions
Running the Program
Compile the program using a C++ compiler, e.g., g++ currency_converter.cpp -o currency_converter.
Run the executable: ./currency_converter.
Input Format
Step 1: Choose the currency to convert to by entering the corresponding option:
1 for USD
2 for EUR
3 for JPY
Step 2: Enter the INR amount to be converted.
Step 3: After conversion, choose:
1 to convert to another currency.
2 to exit the application.

# Code Explanation
Currency Conversion Logic: The conversion rates used are:
1 INR = 0.012 USD
1 INR = 0.011 EUR
1 INR = 1.61 JPY
Recursive Design: The program uses a recursive call to the currency_converter function for sequential conversions.
Switch Case: Handles different currency conversion options, providing clear separation of logic for each currency.
