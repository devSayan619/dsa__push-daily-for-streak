#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

std::pair<int, int> d(int N, std:: vector<int>& id, std:: vector<int>& cost, int A) {
    std::unordered_map<int, int> i_mpp;
    for (int i = 0; i < N; ++i) {
        i_mpp[id[i]] = cost[i];
    }

    std::unordered_map<int, std::vector<int>> u_mpp;

    for (int i = 0; i < N; ++i) {
        int curr_id = id[i];
        std::vector<int> f_items;
        for (int j = 0; j < N; ++j) {
            if (curr_id % id[j] == 0 && id[j] != curr_id) {
                f_items.push_back(id[j]);
            }
        }
        u_mpp[curr_id] = f_items;
    }

    int free_Count = 0;
    int freeWorth = 0;

    for (int i = 0; i < N; ++i) {
        int curr_id = id[i];
        int curr_Cost = cost[i];
        if (curr_Cost <= A) {
            int ki = A / curr_Cost;
            int free_items = ki * u_mpp[curr_id].size();
            int tot_fr_wor = 0;
            for (int freeId : u_mpp[curr_id]) {
                tot_fr_wor += i_mpp[freeId] * ki;
            }

            if (free_items > free_Count || 
               (free_items == free_Count && tot_fr_wor > freeWorth)) {
                free_Count = free_items;
                freeWorth = tot_fr_wor;
            }
        }
    }
    return {free_Count, freeWorth};
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> id(N);
    std::vector<int> cost(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> id[i];
    }
    for (int i = 0; i < N; ++i) {
        std::cin >> cost[i];
    }
    int A;
    std::cin >> A;
    std::pair<int, int> ans = d(N, id, cost, A);
    std::cout << ans.first << " " << ans.second << std::endl;

    return 0;
}