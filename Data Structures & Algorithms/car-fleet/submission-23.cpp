class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int, double> ps;
        if (position.size() < 1){
            return 0;
        } else if (position.size() == 1){
            return 1;
        }
        for (int i = 0; i < position.size(); ++i){
            double distance_remaining = target - position[i];
            double step = distance_remaining / speed[i];
            ps[position[i]] = step;
        }
        
        int fleets = 0;
        double max_steps = 0.0;
        
        for (auto it = ps.rbegin(); it != ps.rend(); ++it) {
            double current_car_steps = it->second;
            
            if (current_car_steps > max_steps) {
                fleets++;
                max_steps = current_car_steps;
            }
        }
        
        return fleets;
    }
};
