#include "Ingredient.h"



void Ingredient::setIngredient(std::string ingredientName,double unitCost, int noOfUnits){
    m_IngredientName = ingredientName;
    m_UnitCost = unitCost;
    m_NoOfUnits = noOfUnits;
}

void Ingredient::reduceNoOfUnits(int units){
    m_NoOfUnits -=units;
}


void Ingredient::Restock(){
    m_NoOfUnits = FULL_STOCK_UNITS;
}

void Ingredient::PrintIngredient(){
    std::cout<<m_IngredientName<<","<<m_NoOfUnits<<std::endl;
}
