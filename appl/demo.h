#ifndef APPL_DEMO_H
#define APPL_DEMO_H

//************************************************************************************************//
//                                       FUNCTION DECLARATIONS                                    //
//************************************************************************************************//

//Public
extern void demo_routine(int ct);


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

