#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

template<typename T>
void printl(const T &item) {
    std::cout << item << std::endl;
}

template<typename T>
auto get_value(const std::string &message) -> T {
    std::cout << message;
    T value;
    std::cin >> value;
    cin.ignore();
    return value;
}

string get_string_from_message(const std::string &message) {
    std::cout << message;
    string value;
    std::getline(std::cin, value);
    return value;
}

string humanize_integer(int const integer_value) {
    string integer_as_string = to_string(integer_value);
    // We insert commas into the string every three digits, fromm right to left.
    for (int j = integer_as_string.length() - 3; j > 0; j -= 3) {
        integer_as_string.insert(j, ",");
    }
    return integer_as_string;
}

string monetize_double(const double double_value) {
    const int integer_value = static_cast<int>(double_value);
    const double decimals = double_value - integer_value;
    // Extracts into a string the decimal part, rounded to two significant digits
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << decimals;
    const std::string decimals_as_string = stream.str(); // still includeds the zero and the dot. Ex: 0.34
    return "$ " + humanize_integer(integer_value) + decimals_as_string.substr(1, 3);
}

int main() {
    constexpr double ADULT_TICKET_PRICE = 10.00;
    constexpr double CHILD_TICKET_PRICE = 6.00;
    constexpr double THEATER_RATE = 0.20;

    const string movie_name = get_string_from_message("Please type the name of the movie: ");
    const auto adult_tickets_amount = get_value<int>("How many adult tickets were sold? ");
    const auto child_tickets_amount = get_value<int>("How many child tickets were sold? ");

    // Core calculations
    const double gross_box_office_profit = (adult_tickets_amount * ADULT_TICKET_PRICE) + (child_tickets_amount * CHILD_TICKET_PRICE);
    const double net_box_office_profit = gross_box_office_profit * THEATER_RATE;
    const double amount_paid_to_distribuitor = gross_box_office_profit - net_box_office_profit;

    // Cosmetic calculations
    const int movie_name_cell_width = movie_name.size() + 2;
    const int gross_box_office_profit_cell_width = to_string(static_cast<int>(gross_box_office_profit)).size() + 5;
    const int larger_second_column_width = max(movie_name_cell_width, gross_box_office_profit_cell_width);

    cout << setprecision(2) << fixed;
    cout << setw(28) << left << "Movie Name:" << setw(larger_second_column_width) << right << "“" + movie_name + "“" << endl;
    cout << setw(28) << left << "Adult Tickets Sold:" << setw(larger_second_column_width) << right << adult_tickets_amount << endl;
    cout << setw(28) << left << "Child Tickets Sold:" << setw(larger_second_column_width) << right << child_tickets_amount << endl;
    cout << setw(28) << left << "Gross Box Office Profit:" << setw(larger_second_column_width) << right << monetize_double(gross_box_office_profit) << endl;
    cout << setw(28) << left << "Net Box Office Profit:" << setw(larger_second_column_width) << right << monetize_double(net_box_office_profit) << endl;
    cout << setw(28) << left << "Amount Paid to Distribuitor:" << setw(larger_second_column_width) << right << monetize_double(amount_paid_to_distribuitor) << endl;

    return 0;
}
