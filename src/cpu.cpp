

/*
 * CPU Simulator
 */
class CPU 
{

    public:
        CPU(void);
        void reset(void);
        void set_program(void *program);
        void fetch(void);
        void decode(void);
        void execute(void);
        

    private:
        void *program;

        int zero_flag;
        int sign_flag;
        int overflow_flag;
        int break_flag;
        int decimal_flag;
        int interrupt_flag;
        int carry_flag;
};




