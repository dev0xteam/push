//
//  log.h
//  pjsh
//
//  Created by Siddhant Khanna on 08/04/16.
//  Copyright © 2016 Siddhant Khanna. All rights reserved.
//

void log(str in ){ //Logging functiom
    
    str echo="echo ";
    concatenate(echo,in);
    system(echo);
    concatenate(echo, "> ./log.txt");
    system(echo);
   
}


void system(str *a, str *b){
    concatenate(*a,*b);
    system(*a);
}


int console_main(str user){ //Console
    
    int enter = 0;
    log("Inside Console");
    str input;
    int to_sys;
    int logout = 0;
    keypad(stdscr, TRUE);
    raw();				
    log("Consol Ready to Go");
    system("sudo su c exit");
    for(enter>=0;enter<4096;enter++){
        to_sys=0;
        printf(user);
        printf(":~");
        gets(input);
       
        if(strcmp(input, "term")==0){
            puts("A Project Management Console");
            to_sys=1;
            }
        if(strcmp(input, "new_ws")==0){
            log("Setting a new project");
            to_sys=1;
        }
        if(strcmp(input, "exit")==0){
            system("killall exec");
            to_sys=1;
        }
        
        
        if(to_sys==0){system(input);}
    }
    
    return(enter);
}


class console{  //incomplete console stuff
public:
  const str sh = "bash ";
  const str echo = "echo ";
  const str disk = "hdut ";
  const str xar = "cxar ";
  const str tar = "ctar ";
  const str bzip = "bzip ";
  const str install = "inst ";
  const str nimage = "newi ";
  
    
    char  *input(str *in){
        str path ;
        char *y=path;
        
        y = cut(*in,5);
        
        return y;
    }
    
    

    
    console(str _user){
        
        console_main(_user);
        }
        
    
    
};