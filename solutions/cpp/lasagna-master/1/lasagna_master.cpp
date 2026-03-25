#include "lasagna_master.h"
#include <iostream>
#include <vector>

namespace lasagna_master {

// TODO: add your solution here
    
    int preparationTime(std::vector<std::string> layers, int avgPrepTime){
        return layers.size() * avgPrepTime;
    }

    amount quantities(std::vector<std::string> layers){
        int noodles{};
        double sauces{};
        for(std::string layer : layers){
            if(layer == "noodles"){ noodles += 50; }
            if(layer == "sauce"){ sauces += 0.2; }
        }
        amount neededAmount{noodles, sauces};
        return neededAmount;
    }

    void addSecretIngredient (std::vector<std::string>& myList, const std::vector<std::string> altList){
        myList.back() = altList.back();
    }
    void addSecretIngredient(std::vector<std::string>& myList, const std::string secret){
        myList.back() = secret;
    }

    std::vector<double> scaleRecipe(const std::vector<double> quantities, int portions){
        std::vector<double> scaledAmount{};
        for(double quantity : quantities){
            scaledAmount.push_back(quantity / 2 * portions);
        }
        return scaledAmount;
    }


    
}  // namespace lasagna_master
