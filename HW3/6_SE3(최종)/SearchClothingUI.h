#pragma once

class SearchClothing;

class SearchClothingUI
{
private:
	SearchClothing* pSearchClothing;
public:
	SearchClothingUI(SearchClothing* searchClothing);
	void searchClothingProduct();
};