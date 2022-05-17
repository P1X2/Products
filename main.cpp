#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Product.h"
#include "Friut.h"
#include "Meat.h"
#include "Juice.h"
#include "Whiskey.h"
#include "NegativePriceException.h"
#include "NegativeCaloriesException.h"
#include "ProductNotFoundException.h"
#include "BarcodeNotUniqueException.h"
#include "DataBase.h"
#include "UI.h"

using namespace std;

int main(int argc, char* argv[])
{
	UI y;
	y.Run();
}