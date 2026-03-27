#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:

bool connection_check(const pillar_men_sensor *pPMSensor){
    return pPMSensor != nullptr;
}

int activity_counter(const pillar_men_sensor *pPMSensor, int elCount){
    int result{};
    for(int i{0} ; i < elCount ; i++){
        result += pPMSensor[i].activity;
    }    
    return result;
}

bool alarm_control(const pillar_men_sensor *pPMSensor){
    return connection_check(pPMSensor) && activity_counter(pPMSensor, 1);
}

bool uv_alarm(pillar_men_sensor *pPMSensor){
    if(!connection_check(pPMSensor)){ return false; }
    return uv_light_heuristic(&pPMSensor->data) > pPMSensor->activity;
}
    
// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon
