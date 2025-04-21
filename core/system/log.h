#ifndef DIR_LOG_H
#define DIR_LOG_H

//************************************************************************************************//
//                                            INCLUDES                                            //
//************************************************************************************************//

//Standard Library Includes
#include <string>


//************************************************************************************************//
//                                        DEFINITIONS & TYPES                                     //
//************************************************************************************************//

//-----------------------------------------  Definitions -----------------------------------------//

//Typedef Lengths
#define NUM_LOG_MESSAGE_TYPE        (9)


//------------------------------------------- Typedefs -------------------------------------------//

/**
 * @brief       General system status codes
 * @details     Naming generic for re-use
 */
typedef enum {
    LOG_TYPE_A             = 8,                     /* @open descr                                */
    LOG_TYPE_B             = 7,                     /* @open descr                                */
    LOG_TYPE_C             = 6,                     /* @open descr                                */
    LOG_TYPE_SYSTEM        = 5,                     /* System module log content                  */
    LOG_TYPE_RTOS          = 4,                     /* Rtos module log content                    */
    LOG_TYPE_APP           = 3,                     /* Application general log content            */
    LOG_TYPE_UTIL          = 2,                     /* Utilities module log content               */
    LOG_TYPE_GENERAL       = 1,                     /* General unspecified log content            */
    LOG_TYPE_UNSPECIFIED   = 0                      /* Unspecified location log content           */
} Log_message_type;


//************************************************************************************************//
//                                         CLASS DECLARATIONS                                     //
//************************************************************************************************//
using namespace std;

/**************************************************************************************************/
/** @fcn        class Log
 *  @brief      x
 *  @details    x
 */
/**************************************************************************************************/
class Log {

public:

    //Constructors
    Log(void);

    //Public Methods
    static void init(void);

    static void write(Log_message_type src, string msg);

};


#endif /*  DIR_LOG_H */

