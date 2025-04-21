/**************************************************************************************************/
/** @file       main.h
 *  @brief      Global interface & definitions  
 *  @details    Shared content for project promoting re-use & commonality
 *  
 *  @section    Opens
 *      The current requirement to extern C content in this file is unclear
 */
/**************************************************************************************************/
#ifndef CORE_MAIN_H_
#define CORE_MAIN_H_

//************************************************************************************************//
//                                            INCLUDES                                            //
//************************************************************************************************//

//Project Includes
#include "utils.h"                                  /* common utilities                           */


//************************************************************************************************//
//                                       FUNCTION DECLARATIONS                                    //
//************************************************************************************************//

//Public    
extern "C" {

    //------------------------------------------ demo.h ------------------------------------------//
    
    extern "C" void app_routine(int ct);


    //----------------------------------------- system.h -----------------------------------------//
    
    extern "C" status_code system_initialize(void);
    
    extern "C" void delay_ms(int t_ms);
    
    
    //------------------------------------------ mcu.c -------------------------------------------//
    
    extern "C" status_code mcu_initialize(void);
    
    extern "C" void mcu_print_info(void);
            
            
    //------------------------------------------ rtos.c ------------------------------------------//
    extern "C" void rtos_init(void);

}


#endif /* CORE_MAIN_H_ */

