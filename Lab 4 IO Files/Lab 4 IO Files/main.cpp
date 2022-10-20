#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
using namespace std;


class Character
{
	string _Theme;
	string _Name;
	int _Number;
	double _Minifigures;
	double _Price;
	double _PieceCount;
public:
	
	Character(string Theme = "Null", string Name="Null", int Number =0, int Minifigures=0, double Price=0.00, int PieceCount=0)
	{
		_Theme = Theme;
		_Name = Name;
		_Number = Number;
		_Minifigures = Minifigures;
		_Price = Price;
		_PieceCount = PieceCount;
	}
	string GetTheme()
	{
		return _Theme;
	}
	string GetName()
	{
		return _Name;
	}
	double GetNumber()
	{
		return _Number;
	}
	double GetMinifigures()
	{
		return _Minifigures;
	}
	double GetPrice()
	{
		return _Price;
	}
	double GetPieceCount()
	{
		return _PieceCount;
	}
};
//void ReadCharactersFromFile(string path, vector<Character>& characters);
void LoadLego1(vector<Character>& characters);
void LoadLego2();
void LoadLego3();
//void answer1();
void answer2();
void answer3();

void choice1(vector<Character>& characters);
void choice2(vector<Character>& characters);
void choice3(string input, vector<Character>& characters);
void choice4(string input, vector<Character>& characters);
void choice5(vector<Character>& characters);
void choice6(vector<Character>& characters);
void choice7(vector<Character>& characters);
void choice8(vector<Character>& characters);

int main()
{
	
	vector<Character> characters;
	cout << std::fixed << setprecision(2);
	cout << "Which file(s) to open?\n";
	cout << "1. lego1.csv" << endl;
	cout << "2. lego2.csv" << endl;
	cout << "3. lego3.csv" << endl;
	cout << "4. All 3 files" << endl;
	int option;
	cin >> option;

	/*======= Load data from file(s) =======*/
	if (option == 1)
	{
		
		ifstream inFile("lego1.csv");
		//ReadCharactersFromFile(path, characters);

		if (inFile.is_open())
		{
			//Character Number;
			//read a line from the file
			string lineFromFile;
			getline(inFile, lineFromFile);
			//cout << lineFromFile << endl;

			//reading the header

			//no longer reading the header
			while (getline(inFile, lineFromFile))
			{
				//create a stream from our string
				istringstream stream(lineFromFile);
				string buffer;

				string Theme, Name;
				int Number, Minifigures, PieceCount;
				double Price;


				getline(stream, buffer, ',');
				Number = stoi(buffer);
				//Character Number = temp1;
				//cout << "Number: " << Number << endl;

				getline(stream, Theme, ',');
				//cout << "Theme: " << Theme << endl;

				getline(stream, Name, ',');
				//cout << "Name: " << Name << endl;

				getline(stream, buffer, ',');
				Minifigures = stoi(buffer);
				//cout << "Minifigures " << Minifigures << endl;

				getline(stream, buffer, ',');
				PieceCount = stoi(buffer);
				//cout << "Piece Count: " << PieceCount << endl;

				getline(stream, buffer, ',');
				Price = stod(buffer);
				//cout << "Price: $ " << Price << endl;
				//cout << endl;
				//cout << characters.size() << endl;
				Character c(Theme, Name, Number, Minifigures, Price, PieceCount);
				characters.push_back(c);
			}
		}
	}
	//	answer1();
	if (option == 2)
	{

		ifstream inFile("lego2.csv");
		//ReadCharactersFromFile(path, characters);

		if (inFile.is_open())
		{
			Character Number;
			//read a line from the file
			string lineFromFile;
			getline(inFile, lineFromFile);
			//cout << lineFromFile << endl;

			//reading the header

			//no longer reading the header
			while (getline(inFile, lineFromFile))
			{
				//create a stream from our string
				istringstream stream(lineFromFile);
				string buffer;

				string Theme, Name;
				int Number, Minifigures, PieceCount;
				double Price;


				getline(stream, buffer, ',');
				Number = stoi(buffer);
				//Character Number = temp1;
				//cout << "Number: " << Number << endl;

				getline(stream, Theme, ',');
				//cout << "Theme: " << Theme << endl;

				getline(stream, Name, ',');
				//cout << "Name: " << Name << endl;

				getline(stream, buffer, ',');
				Minifigures = stoi(buffer);
				//cout << "Minifigures " << Minifigures << endl;

				getline(stream, buffer, ',');
				PieceCount = stoi(buffer);
				//cout << "Piece Count: " << PieceCount << endl;

				getline(stream, buffer, ',');
				Price = stod(buffer);
				//cout << "Price: $ " << Price << endl;
				//cout << endl;
				//cout << characters.size() << endl;
				Character c(Theme, Name, Number, Minifigures, Price, PieceCount);
				characters.push_back(c);
			}
		}
	
	}
	if (option == 3)
	{

		ifstream inFile("lego3.csv");
		//ReadCharactersFromFile(path, characters);

		if (inFile.is_open())
		{
			Character Number;
			//read a line from the file
			string lineFromFile;
			getline(inFile, lineFromFile);
			//cout << lineFromFile << endl;

			//reading the header

			//no longer reading the header
			while (getline(inFile, lineFromFile))
			{
				//create a stream from our string
				istringstream stream(lineFromFile);
				string buffer;

				string Theme, Name;
				int Number, Minifigures, PieceCount;
				double Price;


				getline(stream, buffer, ',');
				Number = stoi(buffer);
				//Character Number = temp1;
				//cout << "Number: " << Number << endl;

				getline(stream, Theme, ',');
				//cout << "Theme: " << Theme << endl;

				getline(stream, Name, ',');
				//cout << "Name: " << Name << endl;

				getline(stream, buffer, ',');
				Minifigures = stoi(buffer);
				//cout << "Minifigures " << Minifigures << endl;

				getline(stream, buffer, ',');
				PieceCount = stoi(buffer);
				//cout << "Piece Count: " << PieceCount << endl;

				getline(stream, buffer, ',');
				Price = stod(buffer);
				//cout << "Price: $ " << Price << endl;
				//cout << endl;
				//cout << characters.size() << endl;
				Character c(Theme, Name, Number, Minifigures, Price, PieceCount);
				characters.push_back(c);
			}
		}

	}
	if (option == 4)
	{

		ifstream inFile("lego1.csv");
		//ReadCharactersFromFile(path, characters);

		if (inFile.is_open())
		{
			Character Number;
			//read a line from the file
			string lineFromFile;
			getline(inFile, lineFromFile);
			//cout << lineFromFile << endl;

			//reading the header

			//no longer reading the header
			while (getline(inFile, lineFromFile))
			{
				//create a stream from our string
				istringstream stream(lineFromFile);
				string buffer;

				string Theme, Name;
				int Number, Minifigures, PieceCount;
				double Price;


				getline(stream, buffer, ',');
				Number = stoi(buffer);
				//Character Number = temp1;
				//cout << "Number: " << Number << endl;

				getline(stream, Theme, ',');
				//cout << "Theme: " << Theme << endl;

				getline(stream, Name, ',');
				//cout << "Name: " << Name << endl;

				getline(stream, buffer, ',');
				Minifigures = stoi(buffer);
				//cout << "Minifigures " << Minifigures << endl;

				getline(stream, buffer, ',');
				PieceCount = stoi(buffer);
				//cout << "Piece Count: " << PieceCount << endl;

				getline(stream, buffer, ',');
				Price = stod(buffer);
				//cout << "Price: $ " << Price << endl;
				//cout << endl;
				//cout << characters.size() << endl;
				Character c(Theme, Name, Number, Minifigures, Price, PieceCount);
				characters.push_back(c);
			}
		}
		//CLOSING FIRST FILE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		ifstream inFile2("lego2.csv");
		//ReadCharactersFromFile(path, characters);

		if (inFile2.is_open())
		{
			Character Number;
			//read a line from the file
			string lineFromFile;
			getline(inFile2, lineFromFile);
			//cout << lineFromFile << endl;

			//reading the header

			//no longer reading the header
			while (getline(inFile2, lineFromFile))
			{
				//create a stream from our string
				istringstream stream(lineFromFile);
				string buffer;

				string Theme, Name;
				int Number, Minifigures, PieceCount;
				double Price;


				getline(stream, buffer, ',');
				Number = stoi(buffer);
				//Character Number = temp1;
				//cout << "Number: " << Number << endl;

				getline(stream, Theme, ',');
				//cout << "Theme: " << Theme << endl;

				getline(stream, Name, ',');
				//cout << "Name: " << Name << endl;

				getline(stream, buffer, ',');
				Minifigures = stoi(buffer);
				//cout << "Minifigures " << Minifigures << endl;

				getline(stream, buffer, ',');
				PieceCount = stoi(buffer);
				//cout << "Piece Count: " << PieceCount << endl;

				getline(stream, buffer, ',');
				Price = stod(buffer);
				//cout << "Price: $ " << Price << endl;
				//cout << endl;
				//cout << characters.size() << endl;
				Character c(Theme, Name, Number, Minifigures, Price, PieceCount);
				characters.push_back(c);
			}
		}
		//CLOSING SECOND FILE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		ifstream inFile3("lego3.csv");
		//ReadCharactersFromFile(path, characters);

		if (inFile3.is_open())
		{
			Character Number;
			//read a line from the file
			string lineFromFile;
			getline(inFile3, lineFromFile);
			//cout << lineFromFile << endl;

			//reading the header

			//no longer reading the header
			while (getline(inFile3, lineFromFile))
			{
				//create a stream from our string
				istringstream stream(lineFromFile);
				string buffer;

				string Theme, Name;
				int Number, Minifigures, PieceCount;
				double Price;


				getline(stream, buffer, ',');
				Number = stoi(buffer);
				//Character Number = temp1;
				//cout << "Number: " << Number << endl;

				getline(stream, Theme, ',');
				//cout << "Theme: " << Theme << endl;

				getline(stream, Name, ',');
				//cout << "Name: " << Name << endl;

				getline(stream, buffer, ',');
				Minifigures = stoi(buffer);
				//cout << "Minifigures " << Minifigures << endl;

				getline(stream, buffer, ',');
				PieceCount = stoi(buffer);
				//cout << "Piece Count: " << PieceCount << endl;

				getline(stream, buffer, ',');
				Price = stod(buffer);
				//cout << "Price: $ " << Price << endl;
				//cout << endl;
				//cout << characters.size() << endl;
				Character c(Theme, Name, Number, Minifigures, Price, PieceCount);
				characters.push_back(c);
			}
		}
		//CLOSING THIRD FILE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	}
	cout << "1. Most Expensive set" << endl;
	cout << "2. Largest piece count" << endl;
	cout << "3. Search for set name containing..." << endl;
	cout << "4. Search themes..." << endl;
	cout << "5. Part count information" << endl;
	cout << "6. Price information" << endl;
	cout << "7. Minifigure information" << endl;
	cout << "8. If you bought one of everything..." << endl;
	cout << "0. Exit" << endl;

	int choice;
	cin >> choice;
	cin.get();  // Clear newline character for any later input
	if (choice == 1)
	{
		
		//vector<Character>& characters;
		
		choice1(characters);
	}
	/*======= Print out how many sets were loaded =======*/
	/*======= Based on the choice, execute the appropriate task and show the results =======*/
	else if (choice == 2)
	{
		choice2(characters);
	}
	else if (choice == 3)
	{
		string input;
		getline(cin, input);
		choice3(input, characters);
	
	}
	else if (choice == 4)
	{
		string input;
		getline(cin, input);
		choice4(input, characters);
	}
	else if (choice == 5)
	{
		choice5(characters);
	}
	else if (choice == 6)
	{
		choice6(characters);
	}
	else if (choice == 7)
	{
		choice7(characters);
	}
	else if (choice == 8)
	{
		choice8(characters);
	}
	return 0;
}
//void answer1()
//{
//	vector<Character> characters;
//	LoadLego1(characters);
//}
void answer2()
{
	LoadLego2();
}
void answer3()
{
	LoadLego3();
}



void LoadLego2()
{
	ifstream inFile("lego2.csv");
	if (inFile.is_open())
	{
		//read a line from the file
		string lineFromFile;
		getline(inFile, lineFromFile);

	}
}
void LoadLego3()
{
	ifstream inFile("lego3.csv");
	if (inFile.is_open())
	{
		//read a line from the file
		string lineFromFile;
		getline(inFile, lineFromFile);

	}
}
void choice1(vector<Character>& characters)
{
	//vector<Character> characters;
	double tempPrice;
	tempPrice = 0.0;
	int tempNumber;
	tempNumber = 0;
	int tempminifigures;
	tempminifigures = 0;
	int tempPieceCount;
	tempPieceCount = 0;
	string tempString;
	tempString = "null";
	string tempName;
	tempName = "Null";

	for (unsigned int i = 0; i < characters.size(); i++)
	{
		
		if (characters[i].GetPrice() > tempPrice)
		{
			tempPrice = characters[i].GetPrice();
			tempNumber = characters[i].GetNumber();
			tempString = characters[i].GetTheme();
			tempName = characters[i].GetName();
			tempPieceCount = characters[i].GetPieceCount();
			tempminifigures = characters[i].GetMinifigures();
		}
		/*cout << characters[i].GetNumber() << endl;
		cout << characters[i].GetName() << endl;
		cout << characters[i].GetTheme() << endl;
		cout << characters[i].GetMinifigures() << endl;
		cout << characters[i].GetPrice() << endl;
		cout << characters[i].GetPieceCount() << endl << endl;*/
	}
	cout << "Total number of sets: " << characters.size() << endl;
	cout << "The most expensive set is:" << endl;
	cout << "Name: " << tempName << endl;
	cout << "Number: " << tempNumber << endl;
	cout << "Theme: " << tempString << endl;
	cout << "Price: $ " << tempPrice << endl;
	cout << "Minifigures: " <<tempminifigures << endl;
	cout << "Piece count: " <<tempPieceCount << endl;
}
void choice2(vector<Character>& characters)
{
	//vector<Character> characters;
	double tempPrice;
	tempPrice = 0.0;
	int tempNumber;
	tempNumber = 0;
	int tempminifigures;
	tempminifigures = 0;
	int tempPieceCount;
	tempPieceCount = 0;
	string tempString;
	tempString = "null";
	string tempName;
	tempName = "Null";

	for (unsigned int i = 0; i < characters.size(); i++)
	{

		if (characters[i].GetPieceCount() > tempPieceCount)
		{
			tempPrice = characters[i].GetPrice();
			tempNumber = characters[i].GetNumber();
			tempString = characters[i].GetTheme();
			tempName = characters[i].GetName();
			tempPieceCount = characters[i].GetPieceCount();
			tempminifigures = characters[i].GetMinifigures();
		}
		/*cout << characters[i].GetNumber() << endl;
		cout << characters[i].GetName() << endl;
		cout << characters[i].GetTheme() << endl;
		cout << characters[i].GetMinifigures() << endl;
		cout << characters[i].GetPrice() << endl;
		cout << characters[i].GetPieceCount() << endl << endl;*/
	}
	
	cout << "Total number of sets: " << characters.size() << endl << endl;
	cout << "The set with the highest parts count:" << endl;
	cout << "Name: " << tempName << endl;
	cout << "Number: " << tempNumber << endl;
	cout << "Theme: " << tempString << endl;
	cout << "Price: $" << tempPrice << endl;
	cout << "Minifigures: " << tempminifigures << endl;
	cout << "Piece count: " << tempPieceCount << endl;
}
void choice3(string input, vector<Character>& characters)
{
	double tempPrice;
	tempPrice = 0.00;
	int tempNumber;
	tempNumber = 0;
	/*int tempminifigures;
	tempminifigures = 0;
	int tempPieceCount;
	tempPieceCount = 0;*/
	string tempString;
	tempString = "null";
	string tempName;
	tempName = input;
	bool answer;
	answer = false;
	int counter;
	counter = 0;
	int secondcounter;
	secondcounter = 0;
	
	cout << "Total number of sets: " << characters.size() << endl << endl;
	
	//cout << "Sets matching \"" << input << "\": " << endl;
	for (unsigned int i = 0; i < characters.size(); i++)
	{
		//getline(stream, buffer, ',');
		string buffer;
		string throwaway;
		buffer = "default";
		istringstream stream(characters[i].GetName());
		getline(stream, buffer);
		//throwaway = buffer.find(input);
		//cout << buffer;
		answer = false;


		
		if (buffer.find(input) != string::npos)
		{
			tempPrice = characters[i].GetPrice();
			tempNumber = characters[i].GetNumber();
			tempString = characters[i].GetTheme();
			tempName = characters[i].GetName();
			/*tempPieceCount = characters[i].GetPieceCount();
			tempminifigures = characters[i].GetMinifigures();*/
			answer = true;
			counter++;
			secondcounter++;
		}
		/*cout << characters[i].GetNumber() << endl;
		cout << characters[i].GetName() << endl;
		cout << characters[i].GetTheme() << endl;
		cout << characters[i].GetMinifigures() << endl;
		cout << characters[i].GetPrice() << endl;
		cout << characters[i].GetPieceCount() << endl << endl;*/

		if (secondcounter == 1)
		{
			cout << "Sets matching \"" << input << "\": " << endl;
			secondcounter++;
		}
		if (answer == true)
		{
			
			cout << tempNumber << " " << tempName << " $" << tempPrice << endl;
			//cout << "Name: " << tempName << endl;
			//cout << "Number: " << tempNumber << endl;
			//cout << "Theme: " << tempString << endl;
			//cout << "Price: $ " << tempPrice << endl;
			//cout << "Minifigures: " << tempminifigures << endl;
			//cout << "Piece count: " << tempPieceCount << endl << endl;
		}
		
	}
	if (counter == 0)
	{
		cout << "No sets found matching that search term";
	}

}
void choice4(string input, vector<Character>& characters)
{
	double tempPrice;
	tempPrice = 0.0;
	int tempNumber;
	tempNumber = 0;
	/*int tempminifigures;
	tempminifigures = 0;*/
	/*int tempPieceCount;
	tempPieceCount = 0;*/
	string tempString;
	tempString = "null";
	string tempName;
	tempName = input;
	bool answer;
	answer = false;
	int counter;
	counter = 0;
	int secondcounter;
	secondcounter = 0;
	cout << "Total number of sets: " << characters.size() << endl << endl;
	//cout << "Sets matching \"" << input << "\": " << endl;

	for (unsigned int i = 0; i < characters.size(); i++)
	{

		//getline(stream, buffer, ',');
		string buffer;
		string throwaway;
		buffer = "default";
		istringstream stream(characters[i].GetTheme());
		getline(stream, buffer);
		//throwaway = buffer.find(input);
		//cout << buffer;
		answer = false;

		if (buffer.find(input) != string::npos)
		{
			tempPrice = characters[i].GetPrice();
			tempNumber = characters[i].GetNumber();
			/*tempString = characters[i].GetTheme();*/
			tempName = characters[i].GetName();
			/*tempPieceCount = characters[i].GetPieceCount();
			tempminifigures = characters[i].GetMinifigures();*/
			answer = true;
			counter++;
			secondcounter++;
		}
		/*cout << characters[i].GetNumber() << endl;
		cout << characters[i].GetName() << endl;
		cout << characters[i].GetTheme() << endl;
		cout << characters[i].GetMinifigures() << endl;
		cout << characters[i].GetPrice() << endl;
		cout << characters[i].GetPieceCount() << endl << endl;*/
		if (secondcounter == 1)
		{
			cout << "Sets matching \"" << input << "\": " << endl;
			secondcounter++;
		}
		if (answer == true)
		{
			//cout << "Sets matching \"" << input << "\": " << endl;
			cout << tempNumber << " " << tempName << " $" << tempPrice << endl;
			//cout << "Name: " << tempName << endl;
			//cout << "Number: " << tempNumber << endl;
			//cout << "Theme: " << tempString << endl;
			//cout << "Price: $ " << tempPrice << endl;
			//cout << "Minifigures: " << tempminifigures << endl;
			//cout << "Piece count: " << tempPieceCount << endl << endl;
		}
	}
	if (counter == 0)
	{
		cout << "No sets found matching that search term";
	}

}
void choice5(vector<Character>& characters)
{
	//vector<Character> characters;
	//double tempPrice;
	//tempPrice = 0.0;
	//int tempNumber;
	//tempNumber = 0;
	//int tempminifigures;
	//tempminifigures = 0;
	int tempPieceCount;
	tempPieceCount = 0;
	string tempString;
	tempString = "null";
	string tempName;
	tempName = "Null";
	int counter;
	counter = 0;

	for (unsigned int i = 0; i < characters.size(); i++)
	{


		tempPieceCount = tempPieceCount + characters[i].GetPieceCount();
		counter++;
	}
	cout << "Total number of sets: " << characters.size() << endl << endl;
	cout << "Average part count for " << characters.size() << " sets: " << (tempPieceCount / counter);

}
void choice6(vector<Character>& characters)
{
	//vector<Character> characters;
	double tempPrice;
	tempPrice = 0.0;
	int tempNumber;
	tempNumber = 0;
	int tempminifigures;
	tempminifigures = 0;
	int tempPieceCount;
	tempPieceCount = 0;
	string tempString;
	tempString = "null";
	string tempName;
	tempName = "Null";
	int counter;
	counter = 0;

	for (unsigned int i = 0; i < characters.size(); i++)
	{


		tempPrice = tempPrice + characters[i].GetPrice();
		counter++;
	}
	cout << "Total number of sets: " << characters.size() << endl << endl;
	cout << "Average price for " << characters.size() << " sets: $" << (tempPrice / counter) << endl;


	cout << "Least expensive set:" << endl;
	for (unsigned int i = 0; i < characters.size(); i++)
	{
		if (i == 0)
		{
			tempPrice = characters[i].GetPrice();
			tempNumber = characters[i].GetNumber();
			tempString = characters[i].GetTheme();
			tempName = characters[i].GetName();
			tempPieceCount = characters[i].GetPieceCount();
			tempminifigures = characters[i].GetMinifigures();
		}
		if (characters[i].GetPrice() < tempPrice)
		{
			tempPrice = characters[i].GetPrice();
			tempNumber = characters[i].GetNumber();
			tempString = characters[i].GetTheme();
			tempName = characters[i].GetName();
			tempPieceCount = characters[i].GetPieceCount();
			tempminifigures = characters[i].GetMinifigures();
		}

	}

	cout << "Name: " << tempName << endl;
	cout << "Number: " << tempNumber << endl;
	cout << "Theme: " << tempString << endl;
	cout << "Price: $ " << tempPrice << endl;
	cout << "Minifigures: " << tempminifigures << endl;
	cout << "Piece count: " << tempPieceCount << endl;


	cout << "Most expensive set:" << endl;
	for (unsigned int i = 0; i < characters.size(); i++)
	{

		if (characters[i].GetPrice() > tempPrice)
		{
			tempPrice = characters[i].GetPrice();
			tempNumber = characters[i].GetNumber();
			tempString = characters[i].GetTheme();
			tempName = characters[i].GetName();
			tempPieceCount = characters[i].GetPieceCount();
			tempminifigures = characters[i].GetMinifigures();
		}

	}
	
	cout << "Name: " << tempName << endl;
	cout << "Number: " << tempNumber << endl;
	cout << "Theme: " << tempString << endl;
	cout << "Price: $ " << tempPrice << endl;
	cout << "Minifigures: " << tempminifigures << endl;
	cout << "Piece count: " << tempPieceCount << endl;
}
void choice7(vector<Character>& characters)
{
	//vector<Character> characters;
	double tempPrice;
	tempPrice = 0.0;
	int tempNumber;
	tempNumber = 0;
	int tempminifigures;
	tempminifigures = 0;
	int tempPieceCount;
	tempPieceCount = 0;
	string tempString;
	tempString = "null";
	string tempName;
	tempName = "Null";
	int counter;
	counter = 0;

	for (unsigned int i = 0; i < characters.size(); i++)
	{

		tempminifigures = tempminifigures + characters[i].GetMinifigures();
		counter++;
	}
	cout << "Total number of sets: " << characters.size() << endl << endl;
	cout << "Average number of minifigures: " << (tempminifigures / counter) << endl << endl;





	tempPrice = 0.0;
	tempNumber = 0;
	tempminifigures = 0;
	tempPieceCount = 0;

	cout << "Set with the most minifigures:" << endl;
	for (unsigned int i = 0; i < characters.size(); i++)
	{

		if (characters[i].GetMinifigures() > tempminifigures)
		{
			tempPrice = characters[i].GetPrice();
			tempNumber = characters[i].GetNumber();
			tempString = characters[i].GetTheme();
			tempName = characters[i].GetName();
			tempPieceCount = characters[i].GetPieceCount();
			tempminifigures = characters[i].GetMinifigures();
		}

	}

	cout << "Name: " << tempName << endl;
	cout << "Number: " << tempNumber << endl;
	cout << "Theme: " << tempString << endl;
	cout << "Price: $ " << tempPrice << endl;
	cout << "Minifigures: " << tempminifigures << endl;
	cout << "Piece count: " << tempPieceCount << endl;
}
void choice8(vector<Character>& characters)
{
	//vector<Character> characters;
	double tempPrice;
	tempPrice = 0.0;
	
	int tempminifigures;
	tempminifigures = 0;
	int tempPieceCount;
	tempPieceCount = 0;
	string tempString;
	tempString = "null";
	string tempName;
	tempName = "Null";
	//int counter;
	//counter = 0;

	for (unsigned int i = 0; i < characters.size(); i++)
	{
		tempPrice = tempPrice + characters[i].GetPrice();
		tempPieceCount = tempPieceCount + characters[i].GetPieceCount();
		tempminifigures = tempminifigures + characters[i].GetMinifigures();
	

	}
	cout << "Total number of sets: " << characters.size() << endl << endl;
	cout << "If you bought one of everything..." << endl;
	cout << "It would cost: $" << tempPrice << endl;
	cout << "You would have " << tempPieceCount << " pieces in your collection" << endl;
	cout << "You would have an army of " << tempminifigures << " minifigures!" << endl;

}