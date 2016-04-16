//
//  project.h
//  pjsh
//
//  Created by Siddhant Khanna on 08/04/16.
//  Copyright © 2016 Siddhant Khanna. All rights reserved.
//




class base {  //Actual Stuff related to project
    str name;
    str user;
    int cs = 0;
    int ts = 0;
    str size ;
    
    //Creating a new filesystem img
    int newfs(str n , int c){
        log("New FileSystem Image");
        str mkdir = "mkdir ./" ;
        concatenate(mkdir, n);
        str cd = "cd ./" ;
        concatenate(cd,n);
        system(mkdir);
        system(cd);
        
        log("Ready to make image!");
        system("dd if=/dev/zero of=./filesystem  bs=1M count=102400");
        system("mkdir -p /media/mountPoint");
	system("mkfs.ext4 ~/filesystem");
        log("Finished creating new fs image");
        return 0;
    }
        void _init(str name,int size,str fs){
	  system("mount -o loop ~/filesystem /media/mountPoint");
            //To mount,Format, and set image data
            //Inclomlete
            
        }
        
};


typedef base _project;

