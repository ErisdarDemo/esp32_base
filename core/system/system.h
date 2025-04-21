#ifndef DIR_SYSTEM_H
#define DIR_SYSTEM_H

//************************************************************************************************//
//                                            INCLUDES                                            //
//************************************************************************************************//

//Standard Library Includes
#include <string>

//Project Includes
#include "system.h"
#include "log.h"


//************************************************************************************************//
//                                        DEFINITIONS & TYPES                                     //
//************************************************************************************************//

//-----------------------------------------  Definitions -----------------------------------------//

//Typedef Lengths
#define NUM_SYSTEM_STATUS_CODES     (5)


//------------------------------------------- Typedefs -------------------------------------------//

/**
 * @brief       General system status codes
 * @details     Naming generic for re-use
 */
typedef enum {
    STATUS_OK          = 0,
    STATUS_WARN        = 1,
    STATUS_ERR         = 2,
    STATUS_ERR_STATE_A = 3,                         /* @open descr                                */
    STATUS_ERR_STATE_B = 4,                         /* @open descr                                */
} status_code;


//************************************************************************************************//
//                                         CLASS DECLARATIONS                                     //
//************************************************************************************************//
using namespace std;

/**************************************************************************************************/
/** @fcn        class System
 *  @brief      x
 *  @details    x
 */
/**************************************************************************************************/
class System {

public:

    //Public Methods
    static status_code initialize(void);
    
    static void delay_ms(int t_ms);
    
    static void log(string msg);

private:

    //Private Variables
    static Log logger;                              /* logging utility for system                 */
};


#endif /*  DIR_SYSTEM_H */

