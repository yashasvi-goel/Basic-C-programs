//By Prajawal Kumar Pandey
//Oct 31 2020

int LIS_NLOGN(std::vector<int>& v){  
    if (v.size() == 0)  
        return 0;  
  
    vector<int>tail(v.size(),0);  
    int len=1;  
    tail[0]=v[0];  
    for (int i=1;i<v.size();i++){
        auto pos = lower_bound(tail.begin(), tail.begin()+len, v[i]);  
              
        if (pos==tail.begin()+len) 
            tail[len++]=v[i];  
        else   
            *pos=v[i];  
    }  
  
    return len;  
}