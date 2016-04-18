//
//  log.h
//  pjsh
//
//  Created by Siddhant Khanna on 08/04/16.
//  Copyright © 2016 Siddhant Khanna. All rights reserved.
//


void help(){
printf("new_ws   -   New Workspace\n");
printf("save_    -   Save Current Workspace\n");
printf("zip      -   Pack workspace\n");
printf("exit     -    Exit\n");
printf("?        -     This Message\n");
}


void log(str in ){ //Logging functiom
    
    str echo="echo ";
    concatenate(echo,in);
    system(echo);
    concatenate(echo, "> ./log.txt");
    system(echo);
   
}


void system(str *a, str *b){
    concatenate(*a," ");
    concatenate(*a,*b);
    system(*a);
}


int console_main(str user){ //Console
    
    
    int enter = 0;
    log("Inside Console");
    log("Loading Project Env");
    str input;
    str prj = "";
    int to_sys;
    int logout = 0;
    keypad(stdscr, TRUE);
    log("Consol Ready to Go");
    system("sudo echo Root!");
    for(enter==0;enter<4096;enter++){
        to_sys=0;
    
        if(user_cfg==0){
            printf(user);
        }
        if(user_cfg!=0){
            printf(def.user);
        }
        printf(":~");
        gets(input);
        
        if(strcmp(input,"?")==0){
            
            help();
            to_sys=1;
        }
       
        if(strcmp(input, "term")==0){
            puts("A Project Management Console");
            to_sys=1;
            }
        if(strcmp(input, "save_")==0){
            to_sys=1;
            }
        
        if(strcmp(input,"config user")==0){
            
            printf("@");
            printf(user);
            
        }
        
        if(strcmp(input, "new_ws")==0){
            def._init();
            printf("Project Name : ");
            gets(input);
            
            concatenate(prj,input);
            if(user_cfg!=0){
                def.newfs(input,def.user);
            }

            to_sys=1;
            
        }
        
        
        if(strcmp(input, "exit")==0){
            def.cleanup_f();
            to_sys=1;
        }
        
        
        if(to_sys==0){
            to_sys=sys;
            str to_sys_i = "cd ";
            str ts2 = ";";
            if(user_cfg==0){system(input);}
            if(user_cfg!=0){concatenate(to_sys_i,full_path_to_prj);concatenate(to_sys_i,";");system(to_sys_i,input);}
            
        }
    }
    return(enter);
}


class console{  //incomplete console stuff
public:
    char* comms[10];
    
    
    
    int to_sys = 0;
    
    
    
    
    
    
    int str_parse(str in){
        
        
        
         console_main(in,to_sys);
        
    }

    
    console(str _user){
        
        console_main(_user,to_sys);
        }
        
    
    
};