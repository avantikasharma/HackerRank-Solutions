class Student{
    int scores[5];
    public:
        void input(){
            cin>>scores[0]>>scores[1]>>scores[2]>>scores[3]>>scores[4];
        }
        int calculateTotalScore(){
            int total = scores[0]+scores[1]+scores[2]+scores[3]+scores[4];
            return total;
        } 
};
