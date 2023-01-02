#include <iostream>

const int FULL_STOCK_UNITS = 10;

class Ingredient {
    std::string m_IngredientName;
    double m_UnitCost;
    int m_NoOfUnits;
public:
    Ingredient(){}
    Ingredient(std::string ingredientName,double unitCost, int noOfUnits=FULL_STOCK_UNITS):
        m_IngredientName(ingredientName), m_UnitCost(unitCost), m_NoOfUnits(noOfUnits){}


    void setIngredient(std::string ingredientName,double unitCost, int noOfUnits);

    inline std::string getIngredientName() { return m_IngredientName;}
    inline double getUnitCost(){ return m_UnitCost;}
    inline int getNoOfUnits() {return m_NoOfUnits;}

    void reduceNoOfUnits(int units);
    void Restock();
    void PrintIngredient();
};
