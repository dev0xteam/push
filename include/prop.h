//
//  prop.h
//  pjsh
//
//  Created by Siddhant Khanna on 08/04/16.
//  Copyright © 2016 Siddhant Khanna. All rights reserved.
//


/**/

typedef char str[64];

typedef int arr[128];


void concatenate(char p[], char q[]) {
    
    /*This function concatenates char p[] and char q[] */
    int c, d;
    
    c = 0;
    
    while (p[c] != '\0') {
        c++;
    }
    
    d = 0;
    
    while (q[d] != '\0') {
        p[c] = q[d];
        d++;
        c++;
    }
    
    p[c] = '\0';
}
void concatenatexy(char p[], char q[]){
    
    /*This function concatenates char p[] and char q[] */
    int c, d;
    
    c = 0;
    
    while (p[c] != '\0') {
        c++;
    }
    
    d = 0;
    
    while (q[d] != '\0') {
        p[c] = q[d];
        d++;
        c++;
    }
    
    p[c] = '\0';
}

void concatenate(str p, str q, str r){
    
    void concatenatexy(char p[], char q[]);

    
    concatenatexy(p,q);
    concatenatexy(p,r);
    
}


void system(str a, str b){
    concatenate(a,b);
    system(a);
    
}

char * cut(str in,int c){
    /*This function removes any text before 'int c' in a char array*/
    str _out = "";
    
    int y = c;
    for(c<=64;c==64;c++){
        _out[c-y]=in[c];
       
    }
    
    return _out;
}


