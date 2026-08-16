class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n = drones.size();
        int min_dist = INT_MAX; 
        int index = -1;
        for(int i = 0; i < n; i++ ){
            int dist = abs(drones[i][0] - target[0]) + abs(drones[i][1] - target[1]);
            if(dist <= drones[i][2]){ // distance is in the range
        
                if(dist < min_dist){
                    min_dist = dist;
                    index = i;
                }
            }
        }
        return index;
    }
};