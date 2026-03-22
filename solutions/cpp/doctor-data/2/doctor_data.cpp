// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include "doctor_data.h"

namespace heaven{
    // Constructor
    Vessel::Vessel(std::string new_name, int new_generation, star_map::System new_system){
        this->name = new_name;
        this->generation = new_generation;
        this->current_system = new_system;
    }

    // Actions
    Vessel Vessel::replicate(std::string new_name){
                Vessel cloned_vessel(new_name, generation + 1, current_system);
                return cloned_vessel;
            }

    void Vessel::make_buster(){ busters++; }
    bool Vessel::shoot_buster(){ 
        bool can_shoot = busters ? true : false; 
        if(can_shoot){ busters--; }
        return can_shoot;
    }

    std::string get_older_bob(Vessel vessel_one, Vessel vessel_two){
        std::string older_vessel = (vessel_one.generation <= vessel_two.generation) ? vessel_one.name : vessel_two.name;
        return older_vessel;
    } 
    bool in_the_same_system(Vessel vessel_one, Vessel vessel_two){ 
        bool is_same_system = (vessel_one.current_system == vessel_two.current_system) ? true : false;
        return is_same_system; 
    }
}

// hp4,ölacöiömthö%Äsmaö%Äsubö(311040ö%Äspaö%Äaddö(311040ö%Ädacöiömthö%Äcountö.hpt,hp4ö%Äxctöhd2ö%Ädacöiöma1
// hp2,öjmpö.
