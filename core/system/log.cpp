/**************************************************************************************************/
/** @file       log.cpp
 *  @brief      x
 *  @details    x
 *
 *  @section    Opens
 *      convert log naming lookup to map
 *		validate routine
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

//Identifiers
#define LOG_EVENT_A_TYPE_ID 	"Event-A"
#define LOG_EVENT_B_TYPE_ID 	"Event-B"
#define LOG_EVENT_C_TYPE_ID 	"Event-C"
#define LOG_SYSTEM_TYPE_ID 		"System"
#define LOG_RTOS_TYPE_ID 		"Rtos"
#define LOG_APP_TYPE_ID 		"App"
#define LOG_UTIL_TYPE_ID 		"Util"
#define LOG_GENERAL_TYPE_ID 	"General"
#define LOG_UNSPEC_TYPE_ID 		"Unspecified"
#define LOG_UNKNOWN_TYPE_ID		"Unknown"


//************************************************************************************************//
//                                       FUNCTION DECLARATIONS                                    //
//************************************************************************************************//

//Lookups
static string Log::log_getIdentifier(Log_message_type msg_type);


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
/** @fcn        void write(Log_message_type src, string msg)
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


	//Retrieve
	src_id = Log::log_getIdentifier(src);

    //Record
    printf("%s: %s", src_id.c_str(), msg.c_str());

    return;
}


//************************************************************************************************//
//                                         PRIVATE FUNCTIONS                                      //
//************************************************************************************************//

/**************************************************************************************************/
/** @fcn        static string log_getIdentifier(Log_message_type msg_type)
 *  @brief      lookup for log identifier value
 *  @details    x
 *
 *  @param    [in]  (Log_message_type) src - source of log message
 *
 *  @return   (string) identifier value
 */
/**************************************************************************************************/
static string Log::log_getIdentifier(Log_message_type msg_type) {

    //Retrieve Id
    switch(msg_type) {
        case LOG_TYPE_A:
            return LOG_EVENT_A_TYPE_ID;
        case LOG_TYPE_B:
            return LOG_EVENT_B_TYPE_ID;
        case LOG_TYPE_C:
            return LOG_EVENT_C_TYPE_ID;
        case LOG_TYPE_SYSTEM:
            return LOG_SYSTEM_TYPE_ID;
        case LOG_TYPE_RTOS:
            return LOG_RTOS_TYPE_ID;
        case LOG_TYPE_APP:
            return LOG_APP_TYPE_ID;
        case LOG_TYPE_UTIL:
            return LOG_UTIL_TYPE_ID;
        case LOG_TYPE_GENERAL:
            return LOG_GENERAL_TYPE_ID;
        case LOG_TYPE_UNSPECIFIED:
            return LOG_UNSPEC_TYPE_ID;
        default:
            return LOG_UNKNOWN_TYPE_ID;
    }
}

