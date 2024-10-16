class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
      string s = "";
      priority_queue<pair<int,char>>pq;
      pq.push({a,'a'});
      pq.push({b,'b'});
      pq.push({c,'c'});
 

    char d = 'p';

      while(pq.size()!=0)
      {
        pair<int,char>p = pq.top();
        pq.pop();
        if(p.first >=2 && d!=p.second)
        {
            s = s+p.second;
            s = s+p.second;
            d = p.second;
            int r = p.first;
            r= r-2;
            if(r!=0){
            pq.push({r,p.second});
            }
        }
        else if(p.first==1 && d!=p.second)
        {
            
            s = s+p.second;
            d = p.second;
        }
        else if(d==p.second && pq.size()!=0)
        {
            pair<int,char>t=pq.top();
            pq.pop();
            pq.push({p.first,p.second});
                // if(t.first==1 )
                // {
                    
                //     s = s+t.second;
                //     d = t.second;
                // }
                   if(t.first >0 )
                {
                    s = s+t.second;
                    // s = s+t.second;
                    d = t.second;
                    int r = t.first;
                    r= r-1;
                    if(r!=0){
                    pq.push({r,t.second});
                    }
                }
            

        }
        else{
            break;
        }

      }
      return s;

    }
};