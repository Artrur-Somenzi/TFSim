#include "general.hpp"
#include "branch_predictor.hpp"
#include "general.hpp"
#include <iostream>
branch_predictor::branch_predictor(unsigned int t): n_bits(t)
{
    max = (1<<n_bits)-1;
    state = 0;
}

bool branch_predictor::predict(int dest)
{
   
    //return state&(1<<(n_bits-1));
    

   if (dest < 0)
      return false;
   else
     return true;
    
}
void branch_predictor::update_state(bool taken)
{
    if(taken)
    {
        state = ++state>max?max:state; 
    }
    else if(state)
    {
        state = --state<0?0:state;
    }
}
