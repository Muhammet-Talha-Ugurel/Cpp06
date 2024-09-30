#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <exception>


class ScalarConverter {
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &cpysrc);
		ScalarConverter& operator=(ScalarConverter const &newvalu);

	public:
		static void convertChar(std::string str);
		static void convertInt(std::string str);
		static void convertFloat(std::string str);
		static void convertDouble(std::string str);
		static bool convert(std::string str);
		static int my_stoi(const std::string& str);
		static double my_stod(const std::string& str);
		static float my_stof(const std::string &str);
};

#endif
