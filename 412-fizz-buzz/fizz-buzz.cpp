class Solution {
public:
    vector<string> fizzBuzz(int n) {
    vector<string> ll;
    for(int i=0;i<n;i++){
        if((i+1)%3==0 && (i+1)%5==0){
            ll.push_back("FizzBuzz");
        }
        else if((i+1)%5==0){
            ll.push_back("Buzz");
        }
        else if((i+1)%3==0){
            ll.push_back("Fizz");
        }
        else{
            ll.push_back(to_string(i+1));
        }
    }
    return ll;




































        // vector<string> str(n);
        // for(int i=1;i<=n;i++){
        //     if(i%3==0 && i%5==0){
        //         str[i-1]="FizzBuzz";
        //     }
        //     else if(i%3==0){
        //         str[i-1]="Fizz";
        //     }
        //     else if(i%5==0){
        //         str[i-1]="Buzz";
        //     }
        //     else{
        //         str[i-1]=to_string(i);
        //     }
        // }
        // return str;
    }
};