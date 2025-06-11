#include <bits/stdc++.h>
using namespace std;

struct observation {
    int n ;
    double vedic_sqrt;
    double actual_sqrt;
    double deviation;
};

double deviation(int actual_n, double guess) {
    double correct_val = sqrt(actual_n);
    double diff = abs(correct_val - guess);
    double percentage = diff / correct_val * 100;
    return percentage;
}

double vedic(double n) {
    int perfect_root = sqrt(n);
    int diff = n - perfect_root * perfect_root;
    double ans = perfect_root + (diff / (2.0 * perfect_root));
    return ans;
}

void print_observations(vector<observation> &result , double tolerance ) {

    int count_exceeding = result.size();
    cout << "Total numbers with deviation > " << tolerance << "% = " << count_exceeding << endl;

    for(observation &obs : result) {
        cout << "n = " << obs.n
        << ", Vedic sqrt ≈ " << obs.vedic_sqrt
        << ", Actual sqrt = " << sqrt(obs.n)
        << ", Deviation = " << obs.deviation << "%" << endl;
    }
}

void list_deviation(int n, double tolerance = 5) {
    int count_exceeding = 0;
    vector<observation> result;

    for (int i = 1; i <= n; i++) {
        double approx_sqrt = vedic(i);
        double deviation_percent = deviation(i, approx_sqrt);

        if (deviation_percent > tolerance) {

            struct observation obs;
            obs.n = i;
            obs.actual_sqrt = sqrt(i);
            obs.vedic_sqrt = approx_sqrt;
            obs.deviation = deviation_percent;
            result.push_back(obs);
            count_exceeding++;

        }
    }

    sort(result.begin(), result.end(), [](const observation &a, const observation &b) {
        if(a.deviation == b.deviation) {
            return a.n < b.n;
        }

        else {
            return a.deviation > b.deviation;
        }
    });

    print_observations(result , tolerance);

    // cout << "Total numbers with deviation > " << tolerance << "% = " << count_exceeding << endl;
}

int main() {
    unsigned int n = 100000000;

    vector<int> tolerance = {5, 2, 1};

    for(int &t : tolerance) {
        list_deviation(n, t);
        cout << endl;
        cout << "____________________________________________________________________________" << endl << endl;
    }

    return 0;
}
