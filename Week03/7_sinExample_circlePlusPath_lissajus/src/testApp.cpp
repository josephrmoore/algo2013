#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofSetVerticalSync(true);
	
//    ofSetBackgroundAuto(false);
    ofBackground(0);
	ofSetCircleResolution(100);
	ofEnableAlphaBlending();
    
    ofFill();
	ofSetRectMode( OF_RECTMODE_CORNER );
    ofSetColor(0,0,0,255);
    ofRect( ofGetWindowRect() );
    
    rotation.x = 0;
    rotation.y = 0;
    rotation.z = 0;
    
    mySound.loadSound("whitney.mp3", true);
    mySound.play();
}

//--------------------------------------------------------------
void testApp::update(){
	
    rotation.x += 0;
    rotation.y += 0;
    rotation.z += 1;
}

//--------------------------------------------------------------
void testApp::draw(){
    
//    ofFill();
//	ofSetRectMode( OF_RECTMODE_CORNER );
//    ofSetColor(0,0,0,255*0.01);
//    ofRect( ofGetWindowRect() );
    
    ofSetColor(255, 255, 255, 255);
	float xorig = 500;
	float yorig = 300;
	float angle = ofGetElapsedTimef()*3.5;
	float radius = 200;
	float x = xorig + 200*(sin(ofGetElapsedTimef()/10)) * cos(angle * 3.4);    // 3.4
	float y = yorig + 200*(cos(ofGetElapsedTimef()/10)) * sin(angle * 4.7);   // 4.7
	
	ofPoint temp;
	temp.x = x;
	temp.y = y;
	points.push_back(temp);
	if (points.size() > (1000*(sin(ofGetElapsedTimef())))){
		points.erase(points.begin());
	}
	
	ofPushMatrix();{
//        ofTranslate(ofGetScreenWidth()/2, ofGetScreenHeight()/2);
//        ofRotateX(rotation.z);
//        ofRotateY(rotation.z);
//        ofRotateZ(rotation.z);

        
	ofSetRectMode(OF_RECTMODE_CENTER);
	ofSetColor(255,0,127);
	ofFill();
	ofCircle(x,y,10);
	
	ofSetColor(255,255,255);
	
	ofNoFill();
	ofBeginShape();
	for (int i = 0; i < points.size(); i++){
		ofVertex(points[i].x, points[i].y);
	}
	ofEndShape();
    
    
    ofBeginShape();
	for (int i = 0; i < points.size(); i++){
        if(i>4){
            ofVertex(points[i-5].x+ofRandom(10), points[i-5].y+ofRandom(10));
        }
	}
	ofEndShape();
    
    ofBeginShape();
	for (int i = 0; i < points.size(); i++){
        if(i>9){
            ofVertex(points[i-10].x, points[i-10].y);
        }
	}
	ofEndShape();
    
    ofBeginShape();
	for (int i = 0; i < points.size(); i++){
        if(i>14){
            ofVertex(points[i-15].x, points[i-15].y);
        }
	}
	ofEndShape();
    };ofPopMatrix();
	
	
	
	
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

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

