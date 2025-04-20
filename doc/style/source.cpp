/**************************************************************************************************/
/** @file       source.cpp
 *  @brief      x
 *  @details    x
 *
 *  @author     Justin Reina, Firmware Engineer
 *  @created    4/6/25
 *  @last rev   4/19/25
 *
 *  @note   Members default to private with accessor apis
 *
 *  @section    Opens
 *      none listed
 *
 *  @section    Legal Disclaimer
 *      ©2025 Justin Reina. All rights reserved. All contents of this source file and/or any other
 *      related source files are the explicit property of Justin Reina. Do not distribute.
 *      Do not copy.
 */
/**************************************************************************************************/

//************************************************************************************************//
//                                            INCLUDES                                            //
//************************************************************************************************//

//Standard Library Includes
#include <iostream>
#include <string>

//Library Includes

//BSP Includes

//Project Includes
#include "source.h"


//************************************************************************************************//
//                                        DEFINITIONS & TYPES                                     //
//************************************************************************************************//

//-----------------------------------------  Definitions -----------------------------------------//


//-------------------------------------------- Macros --------------------------------------------//


//----------------------------------------- Enumerations -----------------------------------------//


//------------------------------------------- Typedefs -------------------------------------------//


//************************************************************************************************//
//                                            VARIABLES                                           //
//************************************************************************************************//


//************************************************************************************************//
//                                       FUNCTION DECLARATIONS                                    //
//************************************************************************************************//
using namespace std;

/**********************************************************************************************/
/** @fcn        Source(void)
 *  @brief      Default constructor
 *  @details    x
 */
/**********************************************************************************************/
Source::Source(void) {

    this->width  = 0;
    this->length = 0;
    this->height = 0;

    return;
}

/**************************************************************************************************/
/** @fcn        Source(int width, int length, int height)
 *  @brief      Custom constructor
 *  @details    x
 */
/**************************************************************************************************/
Source::Source(int width, int length, int height) {

    this->width  = width;
    this->length = length;
    this->height = height;

    return;
}

/**************************************************************************************************/
/** @fcn        void init(void)
 *  @brief      x
 *  @details    a separate routine item as needed
 *
 *  @param    [in]  name    descrip
 *
 *  @return   (type) descrip
 *
 *  @pre    x
 *  @post   x
 */
/**************************************************************************************************/
void Source::init(void) {


    //Notify
    printf("Initializing...\n");

    return;
}


/**************************************************************************************************/
/** @fcn        void readData(void)
 *  @brief      x
 *  @details    x
 *
 *  @param    [in]  name    descrip
 *
 *  @return   (type) descrip
 *
 *  @pre    x
 *  @post   x
 */
/**************************************************************************************************/
int Source::readData(void) {

    // Read data from the peripheral

    // Demo
    printf("Reading data from peripheral (%d)...\n\n", this->width);

    return this->width;                             /* Example data                               */
}


/**************************************************************************************************/
/** @fcn        void writeData(void)
 *  @brief      x
 *  @details    x
 *
 *  @param    [in]  name    descrip
 *
 *  @return   (type) descrip
 *
 *  @pre    x
 *  @post   x
 */
/**************************************************************************************************/
void Source::writeData(int data) {

    // Write data to the peripheral
    this->width = data;

    //Notify
    Source::source_log("Writing data to peripheral: %d\n\n", data);

    return;
}


//************************************************************************************************//
//                                        PRIVATE COMPONENTS                                      //
//************************************************************************************************//

/**************************************************************************************************/
/** @fcn        static void source_log(std::string msg, int val)
 *  @brief      Record content to source log utilities
 *  @details    x
 *
 *  @param    [in] (char *) msg - x
 *  @param    [in] (int) val - x
 *
 *  @pre    System.initialize()
 *  @post   x
 *
 *  @note   naming selected here to minimize naming conflict risks for this general demonstration
 */
/**************************************************************************************************/
void Source::source_log(string msg, int val) {

    //Record to Log
    printf(msg.c_str(), val);

    return;
}
