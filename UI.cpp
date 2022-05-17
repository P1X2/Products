#include "UI.h"
#include "DataBase.h"


void UI::Run()
{
	int choice, anyOther=-1;
	DataBase Data;
	int price, calories, alcoholPercent, fcount, sugarPer100;
	string name, producer, barcode, orginCountry, orginAnimal;
	vector<Fruit> fruits;


	cout << "WELCOME IN SUPERMARKET PRODUCT MENAGEMENT SYSTEM\n\n";
	while (bool flag1 = true)
	{
		cout << "\nCHOSE OPERATION YOU WANT TO PREFORM : \n1)ADD FRUIT\n2)ADD JUICE\n3)ADD MEAT\n4)ADD WHISKEY\n5)VAT LIST\n6)LOCALIZATION LIST\n7)DELETE PRODUCT\n8)END PROGRAM\n\n";
		cin >> choice;
		if (choice == 8)
		{
			break;
		}
		switch (choice)
		{
		case 1: 
			cout << "Input values in following order: name, price, calories, producer, barcode, orgin country\n\n";
			cin >> name;
			cin >> price;
			cin >> calories;
			cin >> producer;
			cin >> barcode;
			cin >> orginCountry;
			Data.addFriut(name, price, calories, producer, barcode, orginCountry);
			break;
		case 2:

			cout << "Input number of fruits:\n";
			cin >> fcount;
			cout << "Input fruits data\n";
			for (int i = 0; i != fcount; i++)
			{
				cout << "Input values in following order: name, price, calories, producer, barcode, orgin country\n\n";
				cin >> name;
				cin >> price;
				cin >> calories;
				cin >> producer;
				cin >> barcode;
				cin >> orginCountry;
				Fruit fr(name, price, calories, producer, barcode, orginCountry);
				fruits.push_back(fr);
			}
			cout << "Input juice data\n";
			cout << "Input values in following order: name, price, calories, producer, barcode, sugar per 100 ml\n\n";
			cin >> name;
			cin >> price;
			cin >> calories;
			cin >> producer;
			cin >> barcode;
			cin >> sugarPer100;
			Data.addJuice(name, price, calories, producer, barcode, sugarPer100, fruits);

			break;
		case 3:
			cout << "Input values in following order: name, price, calories, producer, barcode, orgin animal\n\n";
			cin >> name;
			cin >> price;
			cin >> calories;
			cin >> producer;
			cin >> barcode;
			cin >> orginAnimal;
			Data.addMeat(name, price, calories, producer, barcode, orginAnimal);
			break;
		case 4: 
			cout << "Input values in following order: name, price, calories, producer, barcode, alcohol precentage\n\n";
			cin >> name;
			cin >> price;
			cin >> calories;
			cin >> producer;
			cin >> barcode;
			cin >> alcoholPercent;
			Data.addWhiskey(name, price, calories, producer, barcode, alcoholPercent);
			break;
		case 5: 
			Data.VATlist();
			break;
		case 6: 
			Data.localizationList();
			break;
		case 7:
			cout << "Input barcode of product u want to delete:\n\n";
			cin >> barcode;
			Data.deleteProduct(barcode);
			cout << "Succesfully removed from register\n";
			break;
		default:
			cout << "Pick right operation number!\n";
			continue;
		}


		cout << "Do you want to preform any other action?\n";

		bool flag2 = (anyOther == 1);
		bool flag3 = (anyOther == 0);

		while (flag2 == 0 or flag3 == 0)
		{
			cout << "Input 1 or 0\n";
			cin >> anyOther;
			flag2 = (anyOther == 1);
			flag3 = (anyOther == 0);
			if (flag2 == 1 or flag3 == 1)
			{
				break;
			}
		}

		
		if (anyOther == 1)
		{
			continue;
		}
		else
		{
			break;
		}


	}
	cout << "See you soon!";
}