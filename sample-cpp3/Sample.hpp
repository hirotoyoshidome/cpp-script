#ifndef SAMPLE_H
#define SAMPLE_H


class Sample {
    private:
        int myAge;

    public:
        int publicAge;

        // Constructor
        Sample(int age) {
            myAge = age;
        }

        void greet();
        void setAge(int age);
        int getAge();
};

#endif
