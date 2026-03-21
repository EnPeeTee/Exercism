namespace targets {
// TODO: Insert the code for the alien class here
    class Alien {
    public:
        int x_coordinate;
        int y_coordinate;
        Alien(int initial_x, int initial_y){
            x_coordinate = initial_x;
            y_coordinate = initial_y;
        }
        int get_health(){
            return health;
        }
        int hit(){
            if(health > 0){
                health -= 1;
            }
            return health;
        }
        int is_alive(){
            if(health > 0){ return true; }
            else{ return false; }
        }
        bool teleport(int new_x, int new_y){
            x_coordinate = new_x;
            y_coordinate = new_y;
            return true;
        }
        bool collision_detection (targets::Alien otherAlien){
            if(otherAlien.x_coordinate == x_coordinate && otherAlien.y_coordinate == y_coordinate){
                return true;
            }
            return false;
        };
    private:
        int health = 3;
    };
}  // namespace targets
