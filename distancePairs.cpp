set<vector<int> > memPairs;
vector<int> currentPair;

int fixedDistance(vector <int> a, int d) {
    /* memory to check to negate the effect of overlapping
    * pairs */    
    for(size_t i = 0; i < a.size() - 1; i++) {
        for(size_t j = i+1; j < a.size(); j++) {
            if(fabs(a[i] - a[j]) == d) {
                if(a[i] > a[j]) {
                    currentPair = {a[j], a[i]};
                } else if(a[i] == a[j] || a[j] > a[i]) {
                    currentPair = {a[i], a[j]};
                } else {}
                memPairs.insert(currentPair);
            } else {}  
        }
    }
    return memPairs.size();
}
