// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#pragma once
#include <iostream>

namespace star_map{
    enum class System{
        AlphaCentauri,
        BetaHydri,
        DeltaEridani,
        EpsilonEridani,
        Omicron2Eridani,
        Sol
    };
}

namespace heaven{
    class Vessel{
        public:
            // Variables
            std::string name{};
            int generation{};
            star_map::System current_system{};
            int busters{0}; 

            // Constructor
            Vessel(std::string new_name, int new_generation, star_map::System current_system = star_map::System::Sol); 

            // Actions     
            Vessel replicate(std::string new_name); // Replicates Vessel with a New Name and Increments the Generation.
                
            void make_buster();
            bool shoot_buster();
    };

    // Actions For Information
    std::string get_older_bob(Vessel vessel_one, Vessel vessel_two); // Compares the Generation of Vessels.
    bool in_the_same_system(Vessel vessel_one, Vessel vessel_two); // Checks if both Vessels are in the same System
}

// hp1, üapöhp2ö % Äcountöiöma1,
//     öhp2ö % Älawöhp3öö / önextöstepö % Ädacöiöml1ö % Älawö7ö % Ädacöiömb1ö %
//         Ärandomöö % Äscrö9sö % Äsirö9sö % Äxctöhr1ö % Äaddöiömx1ö %
//         Ädacöiömx1ö % Äswapö % Äaddöiömy1ö % Ädacöiömy1ö % Ärandomö % Äscrö9sö %
//         Äsirö9sö % Äxctöhr2ö % Ädacöiömdyö % Ädioöiömdxö % Äsetupö.hpt,
//     3ö % Älacöranö % Ädacöiömth
