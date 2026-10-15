#include <iostream>
using namespace std;

int main() {
    cout << "===== HOTEL MANAGEMENT SYSTEM =====" << endl;

    // ==========================================
    // 1D Array – Weekly Revenue Tracker
    // ==========================================
    cout << "\n--- 1. Weekly Revenue Tracker ---" << endl;
    double revenue[7];
    double totalRevenue = 0.0;

    // Simulating user input for the 7 days of the week
    cout << "Enter daily revenue for 7 days:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Day " << (i + 1) << ": KSh ";
        cin >> revenue[i];
        totalRevenue += revenue[i];
    }

    double averageRevenue = totalRevenue / 7.0;
    cout << "\nTotal Weekly Revenue: KSh " << totalRevenue << endl;
    cout << "Average Daily Revenue: KSh " << averageRevenue << endl;


    // ==========================================
    // 2D Array – Room Occupancy (One Branch)
    // ==========================================
    cout << "\n--- 2. Room Occupancy (One Branch) ---" << endl;
    // 5 floors, 10 rooms per floor (1 = occupied, 0 = vacant)
    int occupancy[5][10] = {
        {1, 0, 1, 1, 0, 0, 1, 0, 1, 1}, // Floor 1
        {0, 0, 1, 0, 1, 1, 0, 0, 0, 1}, // Floor 2
        {1, 1, 1, 1, 1, 0, 0, 1, 0, 0}, // Floor 3
        {0, 0, 0, 0, 0, 1, 1, 1, 1, 1}, // Floor 4
        {1, 0, 1, 0, 1, 0, 1, 0, 1, 0}  // Floor 5
    };

    for (int floor = 0; floor < 5; floor++) {
        int occupiedCount = 0;
        int vacantCount = 0;
        
        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupiedCount++;
            } else {
                vacantCount++;
            }
        }
        cout << "Floor " << (floor + 1) << " -> Occupied Rooms: " << occupiedCount 
             << " | Vacant Rooms: " << vacantCount << endl;
    }


    // ==========================================
    // 3D Array – Multiple Branches
    // ==========================================
    cout << "\n--- 3. Multiple Branches Occupancy ---" << endl;
    // 3 branches, 5 floors, 10 rooms per floor
    int chain[3][5][10];
    int totalOccupiedRooms = 0;

    // Simulating random/mock setup assignments (alternating values)
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                // Alternates 1 and 0 using a basic parity calculation for demo purposes
                chain[branch][floor][room] = (branch + floor + room) % 2; 
                
                // Track total occupied metrics
                if (chain[branch][floor][room] == 1) {
                    totalOccupiedRooms++;
                }
            }
        }
    }

    cout << "Total occupied rooms across all 3 branches: " << totalOccupiedRooms << " rooms" << endl;

    return 0;
}
