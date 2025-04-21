/**************************************************************************************************/
/** @file       log.cpp
 *  @brief      x
 *  @details    x
 *
 *  @section    Opens
 *      convert log naming lookup to map
 */
/**************************************************************************************************/
using namespace std;

//************************************************************************************************//
//                                            INCLUDES                                            //
//************************************************************************************************//

//Standard Library Includes
#include <iostream>
#include <string>

//Project Includes
#include "log.h"


//************************************************************************************************//
//                                        DEFINITIONS & TYPES                                     //
//************************************************************************************************//

//-----------------------------------------  Definitions -----------------------------------------//


//************************************************************************************************//
//                                       FUNCTION DECLARATIONS                                    //
//************************************************************************************************//
using namespace std;

/**********************************************************************************************/
/** @fcn        Log(void)
 *  @brief      Default constructor
 *  @details    x
 */
/**********************************************************************************************/
Log::Log(void) {

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
void Log::init(void) {


    //Notify
    printf("Log(): Initialization complete.\n");

    return;
}


/**************************************************************************************************/
/** @fcn        write(Log_message_type src, string msg)
 *  @brief      x
 *  @details    x
 *
 *  @param    [in]  (Log_message_type) src - source of log message
 *  @param    [in]  (string) msg - message to record to log file
 *
 *  @return   (type) descrip
 *
 *  @pre    x
 *  @post   x
 *  
 *  @section    Opens
 *      Can you overload with just one input arg?
 *      Enter time into log
 *      overload the input here to cascade vars (e.g. "%d")
 *      log to SD? log with Espressif log api?
 */
/**************************************************************************************************/
void Log::write(Log_message_type src, string msg) {

    //Locals
    string src_id;                                  /* identified description string for src      */

    //Lookup Id
    switch(src) {
        case LOG_TYPE_A:
            src_id = "Event-A";
            break;
        case LOG_TYPE_B:
            src_id = "Event-B";
            break;
        case LOG_TYPE_C:
            src_id = "Event-C";
            break;
        case LOG_TYPE_SYSTEM:
            src_id = "System";
            break;
        case LOG_TYPE_RTOS:
            src_id = "Rtos";
            break;
        case LOG_TYPE_APP:
            src_id = "App";
            break;
        case LOG_TYPE_UTIL:
            src_id = "Util";
            break;
        case LOG_TYPE_GENERAL:
            src_id = "General";
            break;
        case LOG_TYPE_UNSPECIFIED:
            src_id = "Unspecified";
            break;
        default:
            src_id = "Unknown";
    }

    //Record
    printf("%s: %s", src_id.c_str(), msg.c_str());

    return;
}

