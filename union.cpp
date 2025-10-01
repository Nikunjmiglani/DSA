vector<int>  unionsortedarray(vector <int> a, vector <int> b){
    int i =0;
    int j=0;
    vector<int> unionArr;
    int n1= a.size();
    int n2= b.size();

    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i] ){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size() == 0 || unionArr.back() != a[j] ){
                unionArr.push_back(a[j]);
            }
            j++;
        }
    }
    while(j<n2){
         if(unionArr.size() == 0|| unionArr.back() != a[j] ){
                unionArr.push_back(a[j]);
            }
            j++;
    }
    while(i<n1){
        if(unionArr.size() == 0|| unionArr.back() != a[i] ){
                unionArr.push_back(a[i]);
            }
            i++;
    }
    return unionArr;
}