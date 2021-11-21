#include <Gamebuino-Meta.h>
#define SCREENHEIGHT 64
#define SCREENWIDTH 80

#define NB_OF_SPRITES 22
int cpt=0;
int timer=0;
int timermax=5;

//###########################
//##### Game Setup ##########
//###########################
void setup(){
  gb.begin();
  loop();
}


//###########################
//##### Game Loop ###########
//###########################
void loop(){
  while(1){
    if(gb.update()){
      outputScreen_displayStrite(cpt+1);
      outputLights_displayColors(cpt+1);


      timer=timer+1;
      if(timer>=timermax){
        timer=0;
        cpt=cpt+1;
        if(cpt>=NB_OF_SPRITES){cpt=0;}
      }


      if(gb.buttons.repeat(BUTTON_RIGHT,0)){
        timermax=timermax+1;
        if(timermax>300){timermax=300;}
      }else{
        if(gb.buttons.repeat(BUTTON_LEFT,0)){
          timermax=timermax-1;
          if(timermax<0){timermax=0;}
        }
      }

      

    }
  }
}
