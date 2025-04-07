/**************************************************************************************************/
<<<<<<< HEAD
/** @file       source.h
 *  @brief      source.c interface API 
 *  @details    interface file header is typically omitted in preference for source file header
=======
/** @file     source.h
 *  @brief    source.c interface API 
 *  @details  interface file header is typically omitted in preference for source file header
 *
 *  @author   Justin Reina, Firmware Engineer
 *  @created  2/3/25
 *  @last rev 4/3/25
 *
 *  @section    Opens
 *      none current
 *
 *  @section    Legal Disclaimer
 *      ©2025 Justin Reina. All rights reserved. All contents of this source file and/or any other
 *      related source files are the explicit property of Justin Reina. Do not distribute.
 *      Do not copy.
>>>>>>> 5459203 ((+)    add app_main() template with core/mcu, core/rtos & core/system components)
 */
/**************************************************************************************************/
#ifndef DIR_SOURCE_H
#define DIR_SOURCE_H

//************************************************************************************************//
//                                            INCLUDES                                            //
//************************************************************************************************//

//Standard Library Includes

//Library Includes

//BSP Includes

//Project Includes


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

//Public

class MyPeripheral {

public:
    virtual void init() = 0;
    
    virtual int readData() = 0;
    
    virtual void writeData(int data) = 0;
};

#endif




//Private


#endif /*  DIR_SOURCE_H */

