#include "iostream"
#include "string"
#include <fstream>
#include <vector>

int main(void)
{
    std::string type_1, type_2, value_1, value_2, operand;

	std::cout << "Enter first variable type" << std::endl;
	std::cin >> type_1;
	std::cout << "Enter first variable value" << std::endl;
	std::cin >> value_1;

	std::cout << "Enter second variable type" << std::endl;
	std::cin >> type_2;
	std::cout << "Enter second variable value" << std::endl;
	std::cin >> value_2;

	std::cout << "Enter mathematical operation to perform on this variables" << std::endl;
	std::cin >> operand;

	const std::string function_text = 
		"#include <iostream>\n"
		"using namespace std;\n"
		"\n"
		"void function(void)\n"
		"{\n"
		"	" + type_1 + " var1 = " + value_1 + ";\n"
		"	" + type_2 + " var2 = " + value_2 + ";\n"
		"\n"
		"	cout << var1 " + operand + " var2 << endl;\n"
		"}\n";
	
	std::ofstream fout("./src/generated/_function.cpp");
	fout << function_text << std::endl;
	fout.close();

	std::cout << "Function generated" << std::endl;
}