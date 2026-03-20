#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    // TODO: Return true if you need a license for that kind of vehicle.
    if(kind == "car" || kind == "truck"){
        return true;
    }
    return false;
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    // TODO: Return the final decision in a sentence.
    std::string chosenVehicle = (option1 < option2) ? option1 : option2;
    return chosenVehicle + " is clearly the better choice.";
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    int resellPrice = original_price;
    if(age <= 2.5){
        resellPrice = original_price * 80 / 100;
    }else if(age < 10){
        resellPrice = original_price * 70 / 100;
    }else{
        resellPrice = original_price * 50 / 100;
    }
    return resellPrice;
}

}  // namespace vehicle_purchase
