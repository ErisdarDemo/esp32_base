#ifndef CORE_SYSTEM_SYSTEM_H_
#define CORE_SYSTEM_SYSTEM_H_

//************************************************************************************************//
//                                            INCLUDES                                            //
//************************************************************************************************//

//FreeRTOS Includes
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"


//************************************************************************************************//
//                                        DEFINITIONS & TYPES                                     //
//************************************************************************************************//

//-----------------------------------------  Definitions -----------------------------------------//

#define NUM_SYSTEM_STATUS_CODES     (5)


//------------------------------------------- Typedefs -------------------------------------------//

/**
 * @brief       General System Status Codes
 * @details     Naming left generic for wider application use
 */
typedef enum {
    STATUS_OK          = 0,
    STATUS_WARN        = 1,
    STATUS_ERR         = 2,
    STATUS_ERR_STATE_A = 3,
    STATUS_ERR_STATE_B = 4,
} status_code;


//************************************************************************************************//
//                                       FUNCTION DECLARATIONS                                    //
//************************************************************************************************//

//Public
extern status_code system_initialize(void);			/* and section divs (e.g. 'DECLARATIONS' here)
													   are also not recommended for lightweight 
													   interface files like this either - 'KISS'  */
extern void delay_ms(int t_ms);


#endif /* CORE_SYSTEM_SYSTEM_H_ */
