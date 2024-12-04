#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> ratings(3 * N);
    for (int i = 0; i < 3 * N; i++) {
        cin >> ratings[i];
    }
    
    // Sort in descending order
    sort(ratings.rbegin(), ratings.rend());
    
    // Calculate the strength of the weakest team
    int weakest_team_strength = 0;
    for (int i = 0; i < N; i++) {
        weakest_team_strength += ratings[2 * i + 1];
    }
    
    cout << weakest_team_strength << endl;
    
    return 0;
}