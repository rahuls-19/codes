#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
	int q,n;
	multiset <int> s;
	multiset <int> :: iterator it1,it2;
	char str[100],temp;
	scanf("%d",&q);
	while(q--){
	
	scanf("%s",str);
	if(str[0]=='C'&& str[5]=='L'){
            if(!s.empty()){
                it1 = s.begin();
                printf("%d\n",s.count(*it1));
            }
			else{
			    printf("-1\n");
			}
		
		
	
		
	}
	else if(str[0]=='C'&& str[5]=='H'){
		if(!s.empty()){
                it2 = s.end();
                it2--;
                printf("%d\n",s.count(*it2));
            }
			else{
			    printf("-1\n");
			}

	}
	else if(str[0]=='P'){
		scanf("%d",&n);
		s.insert(n);
			}
	else{
	    if(s.empty())
	    printf("-1\n");
	    else{
	        it1=s.begin();
	        it2 = s.end();
	        it2--;
	        printf("%d\n",*it2 - *it1);
	        s.erase(it1);
	        if(!s.empty())
	        s.erase(it2);
	    }

	   
	
	}
	
	
	
}
	return 0;
}

