#include <string.h>

int VoteOn(void* Instances[], int nInstances, int nSize){
    int i,j;
    int currep = 0, maxRep = 0; 
    int maxindex = -1;
    for( i = 0; i < nInstances; i++){
        currep = 0;
        for(j = i+1; j < nInstances; j++){
            if(memcmp(Instances[i], Instances[j], nSize) == 0){
                currep++;
            }
        }
        if(currep > maxRep){
            maxRep = currep;
            maxindex = i;
        }
    }
    return maxindex;
}