//
//  main.cpp
//  pjsh
//
//  Created by Siddhant Khanna on 08/04/16.
//  Copyright © 2016 Siddhant Khanna. All rights reserved.
//

#include <iostream>
#include <ncurses.h>
#include "include/prop.h" //OS Dependent funtions .. Rewritten
#include "include/project.h"//Class for project
#include "include/log.h"  //Log and console related stuff
#include "include/daemon.h"
#include "include/config.h"  //Console Confug .. Unused

//pthread_t t2l; //Another thread


//Initiaialize base proj (projec.h)
// base proj;
//Not to be used while it is incomplete


void rootval(){

    
}


int main() {
    log("Loding console");
    create_listener();
    console user("user");
    log("Admin init complete.");
    log("Quitting|0");
    return 0;
}

