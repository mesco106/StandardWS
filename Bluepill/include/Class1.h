#ifndef State_h
#define State_h

class ClassExample1
{
        int changeme;

    public:
        const static int i = 1;
        ClassExample1();

        static void Hello();

        static int Add(int Value1, int Value2);

        static void TurnOn(int pin);

        static void TurnOff(int pin);

        void Increaser(int byhowmuch);
        int GetVal();

};

// extern Printer State;
   
#endif


        // /**
        //  * @param i is an integer 
        //  * @return void 
        // */