#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ids(n), costs(n);
    for (int i = 0; i < n; i++) {
        cin >> ids[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> costs[i];
    }

    int bud;
    cin >> bud;
    int ufi = 0; 
    int mfw = 0; 

    for (int i = 0; i < n; i++) {
        int bud_cos = costs[i];
        if (bud_cos > 0) { 
            int qauli = bud / bud_cos; 
            if (qauli > 0) {
                int cfi = 0; 
                int cfw = 0; 

                for (int j = 0; j < n; j++) {
                    if (i != j && ids[i] % ids[j] == 0) { 
                        cfi += qauli;
                        cfw += costs[j] * qauli;
                    }
                }
                if (cfi > ufi || 
                   (cfi == ufi && cfw > mfw)) {
                    ufi = cfi;
                    mfw = cfw;
                }
            }
        }
    }

    cout << ufi << " " << mfw << endl;
    return 0;
}