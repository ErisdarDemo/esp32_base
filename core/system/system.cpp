/**************************************************************************************************/
/** @file       system.cpp
 *  @brief      x
 *  @details    x
 *
 *  @section    Opens
 *      none listed
 */
/**************************************************************************************************/

//************************************************************************************************//
//                                            INCLUDES                                            //
//************************************************************************************************//

//Standard Library Includes
#include <iostream>
#include <string>

//FreeRTOS Includes
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

//BSP Includes

//Project Includes
#include "mcu.h"
#include "rtos.h"
#include "system.h"
#include "log.h"
#include "main.h"


//************************************************************************************************//
//                                       FUNCTION DECLARATIONS                                    //
//************************************************************************************************//
using namespace std;


/**************************************************************************************************/
/** @fcn        status_code system_initialize(void)
 *  @brief      Initialize system for application
 *  @details    Satisfies all task & feature requirements
 *
 *  @return   (status_code) system initialization status
 *
 *  @pre    app_main()
 *  @post   system is initialized & prepared for application
 */
/**************************************************************************************************/
status_code System::initialize(void) {
    
    //Initialize Variables
    logger = Log();
    
   
    //--------------------------------------- Init Console ---------------------------------------// 

    //Header
    printf("\n\n\n");
    printf("//****************************************************************************//\n");
    printf("//                                                                            //\n");
    printf("//****************************************************************************//\n");
    printf("\n");

    System::log("Initialize(): System is beginning initialization\n\n");

    
    //----------------------------------------- Init MCU -----------------------------------------// 
    mcu_initialize();

    //Detail
    mcu_print_info();
            

    //---------------------------------------- Init RTOS -----------------------------------------//
    rtos_init();


    //Notify
    System::log("Initialize(): System is initialized and prepared for application.\n\n");


    return STATUS_OK;
}


/**************************************************************************************************/
/** @fcn        void delay_ms(int t_ms)
 *  @brief      delay routine
 *  @details    x
 *
 *  @param [in] (int) t_ms - delay time, milliseconds
 *
 *  @pre    System.initialize()
 *  @post   x
 */
/**************************************************************************************************/
void System::delay_ms(int t_ms) {

    //Delay
    vTaskDelay(t_ms / portTICK_PERIOD_MS);

    return;
}


/**************************************************************************************************/
/** @fcn        void log(string msg)
 *  @brief      log to the system log files
 *  @details    x
 *
 *  @param [in] (string) msg - message to record
 *
 *  @pre    System.initialize()
 *  @post   x
 */
/**************************************************************************************************/
void System::log(string msg) {

    //Write to log
    Log::write(LOG_TYPE_SYSTEM, msg);

    return;
}

