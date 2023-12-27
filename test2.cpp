#include <iostream>
#include <iomanip>
#include <string>

std::string userName[2] = {"Girogi", "vano"};
std::string userSurename[2] = {"Kavtaradze", "kutuevichi"};
std::string userID[2] = {"123", "234"};
std::string userCarNumber[2] = {"ACK-181", "AAA-222"};

std::string inputID;

void user(std::string name, std::string surename, std::string ID, std::string carNumber);

int main(){
	int count;
	
	std::cout << "Enter your ID to identify " << std::endl;

	std::cout << std::endl;
	
	while (inputID != "123" && inputID != "234")
	{
		std::cout << "Your ID is not correct" << std::endl;
		std::cout << "Try again " << std::endl;

		std::cout << "Enter your ID: ";
		std::cin >> inputID;
		std::cout << std::endl;
	};

	user(userName[1], userSurename[1], userID[1], userCarNumber[1]);
	return 0;
};

void user(std::string name, std::string surename, std::string ID, std::string carNumber){

	if(inputID == "123"){
		std::cout << "Hello Giorgi" << std::endl << std::endl;
		std::cout << userName[0] << std::endl;
		std::cout << userSurename[0] << std::endl;
		std::cout << userID[0] << std::endl;
		std::cout << userCarNumber[0] << std::endl;
	};

	if(inputID == "234"){
		std::cout << "Hello Vano" << std::endl << std::endl;
		std::cout << userName[1] << std::endl;
		std::cout << userSurename[1] << std::endl;
		std::cout << userID[1] << std::endl;
		std::cout << userCarNumber[1] << std::endl;
	};
	
	return;
}