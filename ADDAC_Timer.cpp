 
/*
 * Some hints about what this Class does!
 *
*/


#include "ADDAC_Timer.h"

//-----------------------------------------------------------------------ADDAC Timer-----------------

ADDAC_Timer::ADDAC_Timer(){	// INITIALIZE CLASS
	
	//Serial.println("ADDAC_Timer INITIALIZED");
    oldTime=0;
    actualTime=0;
    elapsedTime=0;
}



// --------------------------------------------------------------------------- UPDATE -------------------------
//


bool ADDAC_Timer::set(long _time){ // DO SOMETHING !
	
     oldTime = millis();
    
     elapsedTime += abs(actualTime - oldTime);
    
     actualTime = millis();
    if (elapsedTime > _time){
        elapsedTime=0;
     return true;   
    }
    else return false;


}
// --------------------------------------------------------------------------- END -------------------------------