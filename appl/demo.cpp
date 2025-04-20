/**************************************************************************************************/
/** @file       demo.cpp
 *  @brief      x
 *  @details    x
 */
/**************************************************************************************************/
using namespace std;

//************************************************************************************************//
//                                            INCLUDES                                            //
//************************************************************************************************//

//Standard Library Includes
#include <cstdio>

//Project Includes
#include "demo.h"


//************************************************************************************************//
//                                        DEFINITIONS & TYPES                                     //
//************************************************************************************************//

//-----------------------------------------  Definitions -----------------------------------------//

//Init Values
#define DEMO_X_INIT_VAL     (1)
#define DEMO_Y_INIT_VAL     (2)

//Default Values
#define DEFAULT_READ_VAL    (42)


//************************************************************************************************//
//                                         PUBLIC COMPONENTS                                      //
//************************************************************************************************//

/**************************************************************************************************/
/** @fcn        Demo(void)
 *  @brief      Default Constructor
 *  @details    x
 *   
 *  @pre    any
 *  @post   Demo is initialized for use
 */
/**************************************************************************************************/
Demo::Demo(void) {
        
        //Initialize Variables
        x = DEMO_X_INIT_VAL;
        y = DEMO_Y_INIT_VAL;
        
        return; 
}

    
/**************************************************************************************************/
/** @fcn        void init(void)
 *  @brief      Initialize MyPeripheral
 *  @details    x
 *   
 *  @pre    System.initialize()
 *  @post   myPeripheral is initialized and prepared for use
 */
/**************************************************************************************************/
void Demo::init(void) {
        
    //Initialize the peripheral hardware
    printf("Initializing peripheral...\n\n");
        
    return;
}


/**************************************************************************************************/
/** @fcn        int readData(void)
 *  @brief      Read the peripheral data value
 *  @details    x
 *
 *  @return (int) peripheral data value  
 *
 *  @pre    this->init()
 *  @post   x
 */
/**************************************************************************************************/
int Demo::readData(void) {
        
    //Read data from the peripheral
        
    //Notify
    printf("Reading data from peripheral...\n\n");
   
    return DEFAULT_READ_VAL;
}


/**************************************************************************************************/
/** @fcn        void writeData(int data)
 *  @brief      Write the peripheral data value
 *  @details    x
 *   
 *  @param [in] (int) data - peripheral data value
 *
 *  @pre    this->init()
 *  @post   x
 */
/**************************************************************************************************/
void Demo::writeData(int data) {
        
    //Write data to the peripheral
        
    //Notify
    printf("Writing data to peripheral: %d\n", data);
        
    return;
}

    
//************************************************************************************************//
//                                         PRIVATE COMPONENTS                                     //
//************************************************************************************************//

/**************************************************************************************************/
/** @fcn        void log(char *msg)
 *  @brief      Record information to the log
 *  @details    x
 *   
 *  @param [in] (char *) msg- peripheral data value
 *
 *  @pre    this->init()
 *  @post   x
 */
/**************************************************************************************************/
void Demo::log(char *msg) {
        
    //Replace with actual log records
    printf("log: %s\n", msg);
    
    return;
}

