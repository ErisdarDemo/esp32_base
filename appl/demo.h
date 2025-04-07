/**************************************************************************************************/
/** @file       source.h
 *  @brief      source.c interface API 
 *  @details    interface file header is typically omitted in preference for source file header
 */
/**************************************************************************************************/
#ifndef APPL_DEMO_H
#define APPL_DEMO_H


//************************************************************************************************//
//                                       FUNCTION DECLARATIONS                                    //
//************************************************************************************************//

//Public
extern int demo_test(int x);						/* Test C example 							  */


//************************************************************************************************//
//                                         CLASS DECLARATIONS                                     //
//************************************************************************************************//

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

