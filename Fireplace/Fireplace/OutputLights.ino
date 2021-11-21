const uint16_t IMAGE01_DATA[] = {2, 4, 1, 1, 0x0000, 0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe8e4, 0xfbe4};
const uint16_t IMAGE02_DATA[] = {2, 4, 1, 1, 0x0000, 0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe8e4, 0xe8e4, 0xfbe4};
const uint16_t IMAGE03_DATA[] = {2, 4, 1, 1, 0x0000, 0, 0x0000, 0x0000, 0x0000, 0x0000, 0xff80, 0xe8e4, 0xe8e4, 0xfbe4};
const uint16_t IMAGE04_DATA[] = {2, 4, 1, 1, 0x0000, 0, 0x0000, 0x0000, 0xfbe4, 0x0000, 0xff80, 0xe8e4, 0xe8e4, 0xfbe4};
const uint16_t IMAGE05_DATA[] = {2, 4, 1, 1, 0x0000, 0, 0x0000, 0x0000, 0xfbe4, 0xff80, 0xff80, 0xe8e4, 0xe8e4, 0xfbe4};
const uint16_t IMAGE06_DATA[] = {2, 4, 1, 1, 0x0000, 0, 0xffff, 0x0000, 0xfbe4, 0xff80, 0xff80, 0xe8e4, 0xe8e4, 0xfbe4};
const uint16_t IMAGE07_DATA[] = {2, 4, 1, 1, 0x0000, 0, 0xff80, 0xffff, 0xfbe4, 0xff80, 0xff80, 0xe8e4, 0xe8e4, 0xfbe4};
const uint16_t IMAGE08_DATA[] = {2, 4, 1, 1, 0x0000, 0, 0x0000, 0x0000, 0xfbe4, 0xff80, 0xff80, 0xe8e4, 0xe8e4, 0xfbe4};
const uint16_t IMAGE09_DATA[] = {2, 4, 1, 1, 0x0000, 0, 0x0000, 0x0000, 0xfbe4, 0x0000, 0xff80, 0xe8e4, 0xe8e4, 0xfbe4};
const uint16_t IMAGE10_DATA[] = {2, 4, 1, 1, 0x0000, 0, 0x0000, 0x0000, 0x0000, 0x0000, 0xff80, 0xe8e4, 0xe8e4, 0xfbe4};
const uint16_t IMAGE11_DATA[] = {2, 4, 1, 1, 0x0000, 0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xe8e4, 0xe8e4, 0xfbe4};


void outputLights_clear(){
  gb.lights.clear();
}


void  outputLights_displayColors(int spriteNb){

  if(spriteNb==1){Image img001 = Image(IMAGE01_DATA); gb.lights.drawImage(0,0,img001);}
  if(spriteNb==2){Image img002 = Image(IMAGE02_DATA); gb.lights.drawImage(0,0,img002);}
  if(spriteNb==3){Image img003 = Image(IMAGE03_DATA); gb.lights.drawImage(0,0,img003);}
  if(spriteNb==4){Image img004 = Image(IMAGE04_DATA); gb.lights.drawImage(0,0,img004);}
  if(spriteNb==5){Image img005 = Image(IMAGE05_DATA); gb.lights.drawImage(0,0,img005);}
  
  if(spriteNb==6){Image img006 = Image(IMAGE06_DATA); gb.lights.drawImage(0,0,img006);}
  if(spriteNb==7){Image img007 = Image(IMAGE07_DATA); gb.lights.drawImage(0,0,img007);}
  if(spriteNb==8){Image img008 = Image(IMAGE08_DATA); gb.lights.drawImage(0,0,img008);}
  if(spriteNb==9){Image img009 = Image(IMAGE09_DATA); gb.lights.drawImage(0,0,img009);}
  if(spriteNb==10){Image img010 = Image(IMAGE10_DATA); gb.lights.drawImage(0,0,img010);}

  if(spriteNb==11){Image img011 = Image(IMAGE11_DATA); gb.lights.drawImage(0,0,img011);}
  if(spriteNb==12){Image img001 = Image(IMAGE01_DATA); gb.lights.drawImage(0,0,img001);}
  if(spriteNb==13){Image img002 = Image(IMAGE02_DATA); gb.lights.drawImage(0,0,img002);}
  if(spriteNb==14){Image img003 = Image(IMAGE03_DATA); gb.lights.drawImage(0,0,img003);}
  if(spriteNb==15){Image img004 = Image(IMAGE04_DATA); gb.lights.drawImage(0,0,img004);}
  
  if(spriteNb==16){Image img005 = Image(IMAGE05_DATA); gb.lights.drawImage(0,0,img005);}
  if(spriteNb==17){Image img006 = Image(IMAGE06_DATA); gb.lights.drawImage(0,0,img006);}
  if(spriteNb==18){Image img007 = Image(IMAGE07_DATA); gb.lights.drawImage(0,0,img007);}
  if(spriteNb==19){Image img008 = Image(IMAGE08_DATA); gb.lights.drawImage(0,0,img008);}
  if(spriteNb==20){Image img009 = Image(IMAGE09_DATA); gb.lights.drawImage(0,0,img009);}
  
  if(spriteNb==21){Image img010 = Image(IMAGE10_DATA); gb.lights.drawImage(0,0,img010);}
  if(spriteNb==22){Image img011 = Image(IMAGE11_DATA); gb.lights.drawImage(0,0,img011);}
}
