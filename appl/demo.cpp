/**************************************************************************************************/
/** @file       demo.cpp
 *  @brief      x
 *  @details    x
 */
/**************************************************************************************************/
using namespace std;

//************************************************************************************************//
//                                            INCLUDES                                            //
//************************************************************************************************//

//Standard Library Includes
#include <cstdio>


//************************************************************************************************//
//                                          PUBLIC FUNCTIONS                                      //
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
	
//************************************************************************************************//
//                                           PUBLIC CONTENT                                       //
//************************************************************************************************//
public:
	
	//Attributes
	int x;											/* first object param 						  */


	/**********************************************************************************************/
	/** @fcn        Demo(void)
	 *  @brief      Default Constructor
	 *  @details    x
	 *	 
	 *  @pre    any
	 *  @post   Demo is initialized for use
	 */
	/**********************************************************************************************/
    Demo(void) {
		
		x = 1;
		y = 2;
		
		return;	
	}

    
	/**********************************************************************************************/
	/** @fcn        void init(void)
	 *  @brief      Initialize MyPeripheral
	 *  @details    x
	 *	 
	 *  @pre    System.initialize()
	 *  @post   myPeripheral is initialized and prepared for use
	 */
	/**********************************************************************************************/
    void init(void) {
		
        // Initialize the peripheral hardware
        printf("Initializing peripheral...\n");
        
        return;
    }


	/**********************************************************************************************/
	/** @fcn        int readData(void)
	 *  @brief      Read the peripheral data value
	 *  @details    x
	 *
	 *	@return	(int) peripheral data value	 
	 *
	 *  @pre    myPeripheral.init()
	 *  @post   x
	 */
	/**********************************************************************************************/
    int readData(void) {
        
        // Read data from the peripheral
        
        // Replace this with actual hardware read
        printf("Reading data from peripheral...\n");
   
        return 42; 									/* Example data								  */
    }


	/**********************************************************************************************/
	/** @fcn        void writeData(int data)
	 *  @brief      Write the peripheral data value
	 *  @details    x
	 *	 
	 *  @param [in] (int) data - peripheral data value
	 *
	 *  @pre    myPeripheral.init()
	 *  @post   x
	 */
	/**********************************************************************************************/
    void writeData(int data) {
        
        // Write data to the peripheral
        
        // Replace this with actual hardware write
        printf("Writing data to peripheral: %d\n", data);
        
        return;
    }

    
//************************************************************************************************//
//                                          PRIVATE CONTENT                                       //
//************************************************************************************************//

	//Attributes
	int y;											/* private param example					  */


	/**********************************************************************************************/
	/** @fcn        void log(char *msg)
	 *  @brief      Record information to the log
	 *  @details    x
	 *	 
	 *  @param [in] (char *) msg- peripheral data value
	 *
	 *  @pre    myPeripheral.init()
	 *  @post   x
	 */
	/**********************************************************************************************/
    void log(char *msg) {
        
        // Replace this with actual log records
        printf("log: %s\n", msg);
        
        return;
    }
};

