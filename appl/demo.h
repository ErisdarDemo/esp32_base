#ifndef APPL_DEMO_H
#define APPL_DEMO_H

//************************************************************************************************//
//                                       FUNCTION DECLARATIONS                                    //
//************************************************************************************************//

//Public
#ifdef CPP_COMPILE_ISSUE                            /* @open at loc in main.h for C++ incl now?   */
    extern void app_routine(int ct);
#endif


//************************************************************************************************//
//                                         CLASS DECLARATIONS                                     //
//************************************************************************************************//

/**************************************************************************************************/
/** @fcn        class Demo
 *  @brief      Template model for C++ use for application
 *  @details    x
 *
 *  @section    Opens
 *      Expand header with further sections
 */
/**************************************************************************************************/
class Demo {

public:
    //Attributes
    int x;
    
    //Constructor
    Demo();

    //Public methods
    void init(void);
    int  readData(void);
    void writeData(int data);
    

private:
    //Attributes
    int y;

    //Private methods
    void log(char *msg);
};


#endif /*  APPL_DEMO_H */

