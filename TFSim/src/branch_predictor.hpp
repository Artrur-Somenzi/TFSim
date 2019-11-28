class branch_predictor
{
public:
    branch_predictor(unsigned int t);
    bool predict(int dest);
    void update_state(bool taken);
    
private:
    int n_bits,max,state;
};
