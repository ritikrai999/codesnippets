void primefactors(int n) {    
    vint fact, cnt;
    f(i,2,sqrt(n)+1) {   
        if(n%i==0) {
            fact.pb(i);
            cnt.pb(0);
        }
        while (n % i == 0) {  
            cnt[fact.size()-1]++;
            n = n/i;  
        }  
    }  
    if (n > 2) {
        fact.pb(n);
        cnt.pb(1);
    } 
}  
