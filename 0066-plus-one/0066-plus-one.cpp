class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
     int carry = 1;
     vector<int> res(n+1);
     for(int i =0;i<n;i++){
        res[i+1]=digits[i];
     }
    for(int i =n-1 ;i>=0;i--){
          carry+=digits[i];
        if(carry==10){
            res[i+1]=0;
            carry=1;
        }
        else{
            res[i+1]=carry;
             return vector<int>(res.begin()+1,res.end());
        }
           
    }

    if(carry==1){
        res[0]=carry;
    }

   return res;
    
    
    }
};