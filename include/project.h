//
//  project.h
//  pjsh
//
//  Created by Siddhant Khanna on 08/04/16.
//  Copyright © 2016 Siddhant Khanna. All rights reserved.
//

#include<fstream>
int user_cfg = 0;


//std::ofstream out;



class base {  //Actual Stuff related to project
public:
    str name="";
    str user;
    str Volumes = "/Volumes/";
    int cs = 0;
    int ts = 0;
    str size = "sudo dd if=/dev/zero of=./";
    str fmt = "sudo mkdir -p /media/rfs";
    str mount = "sudo mount -t hfsplus -o loop ~/";
    str new_fs = "sudo mkdir /Volumes/" ;
    void o_pr(str fname,str fuser){
        //...
    }
    
    int newfs(str n,str c){
        
        concatenate(name,n);
        concatenate(full_path_to_prj,n);
      //concatenate(prj,n);
        concatenate(new_fs,n);
        system(new_fs);
        return 0;
    }
    
    void cleanup_f(){
        
        if(user_cfg!=0){
        str tmp1 = "zip /Volumes/";
        str tmp2 = " ~/";
        str _zip = ".zip";
        str rm_volumes = "sudo rm -rf /Volumes/";
        concatenate(rm_volumes,name,"/");
        concatenate(tmp1,name,tmp2);
        concatenate(tmp1,_zip);
        system(tmp1);
        system(rm_volumes);
        }
    }
    /*//Creating a new filesystem img
    int newfs(str n , str c){
        str mkdir = "mkdir ./" ;
        concatenate(mkdir, c);
        str cd = "cd ./" ;
        concatenate(cd,c);
        system(mkdir);
        system(cd);
        concatenate(size,user);
        concatenate(size,"/rfs");
        concatenate(size," bs=1024 count=");
        concatenate(size,n);
        system(size);
        system(fmt);
	    system(new_fs);
        printf("Finished creating new fs image");
        return 0;
    }*/
        void _init(){
            //To mount,Format, and set image data
            //...
            printf("Username : ");
            gets(user);
            concatenate(full_path_to_prj,Volumes);
        //  concatenate(full_path_to_prj,"/");
            printf(full_path_to_prj);
            user_cfg++;
            
        }
    
    
};


typedef base _project;

_project def;