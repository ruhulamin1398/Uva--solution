#include<bits/stdc++.h>
using namespace std;

struct data {
    int id, solved, penalty;
};

bool cmp(data a, data b) { // Compare Function
    if(a.solved==b.solved) {
        if(a.penalty==b.penalty) {
            return a.id<b.id;
        } else return a.penalty<b.penalty;
    } else return a.solved>b.solved;
}

int main() {

    int test;
    scanf("%d",&test);
    getchar();
    getchar();
    int probsolved[105], ptime[105], store[105], contprob[105][11];
    bool contid[105], issolved[105][11];
    while(test--) {

        memset(probsolved,0,sizeof(probsolved));
        memset(issolved,false,sizeof(issolved));
        memset(contprob,0,sizeof(contprob));
        memset(store,0,sizeof(store));
        memset(ptime,0,sizeof(ptime));
        memset(contid,false,sizeof(contid));
        int cid, prob, time;
        char verdict;
        int cnt = 0;
        char line[100];

//        int i=1 ;
        while(gets(line) && strlen(line)>0) {

            sscanf(line,"%d %d %d %c", &cid, &prob, &time, &verdict);

            if(!contid[cid]) {
                contid[cid] = true;
                store[cnt] = cid;
                cnt++;
            }
            if(verdict=='R' || verdict=='U' || verdict=='E')
                continue;
            if(verdict=='C' && !issolved[cid][prob]) {
                probsolved[cid]++;
                ptime[cid] = ptime[cid] + time + contprob[cid][prob];
                issolved[cid][prob] = true;
            } else if(verdict=='I' && !issolved[cid][prob]) {
                contprob[cid][prob] = contprob[cid][prob] + 20;
            }

            //     cout<<"After get "<<i<< " th  inpuit  = "<<cid<<' '<<probsolved[cid]<<' '<<ptime[cid]<<endl;
            //  i++;
        }
        data man[150];
        for(int i=0; i<cnt; i++) {
            if(contid[store[i]]) {
                //  cout<<store[i]<<' '<<probsolved[i]<<' '<<ptime[i]<<endl;
                man[i].id = store[i];
                man[i].solved = probsolved[store[i]];
                man[i].penalty = ptime[store[i]];
            }
        }
        sort(man,man+cnt, cmp); // Compare Function Calling
        for(int i=0; i<cnt; i++)
            cout<<man[i].id<<' '<<man[i].solved<<' '<<man[i].penalty<<endl;
        if(test) printf("\n");
    }
    return 0;
}
