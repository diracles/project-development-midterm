#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    //this let's us draw the movie with transparent tinting
    ofEnableAlphaBlending();
    
    //load the movie. always looks in bin/data/
     player.loadMovie("super slow from top down.mp4");
     player2.loadMovie("tease in the middle.mp4");
     player3.loadMovie("guitin.mp4");
     player4.loadMovie("move to middle stay.mp4");
     player5.loadMovie("quick up down full.mp4");
     player6.loadMovie("little squishes.mp4");
    player7.loadMovie("sounds for midterm_6b.mov");
        player8.loadMovie("sounds for midterm_9.mov");
     player9.loadMovie("sounds for midterm_3f.mov");
    
    
    
    
//    play1 = true;
//    play2=false;
//    play3=false;
    
    
    videonum = 0;
  
    
    
    //play the movie to start with
  //  player.play();
  //  player2.play();
    
    //you can change the loop settings this way
     player.setLoopState(OF_LOOP_NONE);
     player2.setLoopState(OF_LOOP_NONE);
     player3.setLoopState(OF_LOOP_NONE);
     player4.setLoopState(OF_LOOP_NONE);
     player5.setLoopState(OF_LOOP_NONE);
     player6.setLoopState(OF_LOOP_NONE);
     player7.setLoopState(OF_LOOP_NONE);
     player8.setLoopState(OF_LOOP_NONE);
     player9.setLoopState(OF_LOOP_NONE);
}

//--------------------------------------------------------------
void testApp::update(){
    
    if(videonum == 0){
        player.play();
    }else{
        player.stop();
    }
    
    
    if(videonum == 1){
        player2.play();
    }else{
        player2.stop();
    }
    
    if(videonum == 2){
        player3.play();
          player9.play();
    }else{
        player3.stop();
           player9.play();
    }
    
    
    if(videonum == 3){
        player4.play();
    }else{
        player4.stop();
    }
    
    if(videonum == 4){
        player5.play();
         player8.play();
        
    }else{
        player5.stop();
        player8.stop();
    }
    
    if(videonum == 5){
        player6.play();
        player7.play();
    }else{
        player6.stop();
        player7.stop();
    }
    
    
    
    player.update();
    player2.update();
    player3.update();
       player4.update();
    player5.update();
     player6.update();
    player7.update();

    
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    

    
    if(videonum == 0){
   
    player.draw(0,0);
        
    }
    
    
    if(videonum == 1){
        
        player2.draw(0,0);
        
    }
    
    
    if(videonum == 2){
        
        player3.draw(0,0);
        player9.draw(0,0);
        
    }
    
    
    if(videonum == 3){
        
        player4.draw(0,0);
        
    }
    
    
    
    if(videonum == 4){
        
        player5.draw(0,0);
         player8.draw(0,0);
        
    }
    
    
    if(videonum == 5){
        
        player6.draw(0,0);
        player7.draw(0,0);
        
    }
    
//    ofSetColor(255,130,0);
//    ofRect(0, 0, 3000, 3000);
    


}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
    //key codes are always the single character with single quotes.
    //In this case we are looking for space bar
    if(key == '1'){
       
        videonum = 0;
        
    }
    
    
    
    if(key == '2'){
        videonum = 1;
    }
    
    
    if(key == '3'){
        videonum = 2;
    }
    
    
    if(key == '4'){
        videonum = 3;
    }
    
    
    
    if(key == '5'){
        videonum = 4;
    }
    
    
    
    if(key == '6'){
        videonum = 5;
    }
//
//    
//    if(key == 'z'){
//        videonum = 6;
//    }
    
    
    
    //we can toggle the window to cover the whole screen. great for installations!
    if(key == 'f'){
        ofToggleFullscreen();
    }



}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}