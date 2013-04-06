#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
         ofVideoPlayer player;
       ofVideoPlayer player2;
       ofVideoPlayer player3;
       ofVideoPlayer player4;
         ofVideoPlayer player5;
         ofVideoPlayer player6;
         ofVideoPlayer player7;
         ofVideoPlayer player8;
        ofVideoPlayer player9;
    
    //bool play1,play2,play3;
    
    int videonum;
    
    
		
};
