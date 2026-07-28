int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
   int op;
   op = arrivalTime + delayedTime;
   if(op < 24){
       return op; 
   }else
   {
    return op-24;
   }
}
