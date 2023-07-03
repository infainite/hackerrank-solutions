vector<int> rotateLeft(int d, vector<int> arr) {
    int length = arr.size();
    if (d == 0 || length == 0 || (d = d % length) == 0) return arr;
    
    vector<int> result(length, 0);
    int resSize = 0;
    for (int i = d; i < length; i++)
    {
        result.at(resSize++) = arr.at(i);
    }
    
    for (int i = 0; i < d; i++)
    {
        result.at(resSize++) = arr.at(i);
    }
    
    return result;
}
