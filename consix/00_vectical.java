package consix;




class a{
    //임시
    int add, myCount, opponent;
    int[][] playBoard, superWeight, weight;
    int color;
    int check, emptyCount;



    //세로는 j가 변하는건가봄 
    void 지연언니베이스의가로세로방어(){


        //세로 방어 시작점 ------------------------------------------------------
        for(int i = 0; i < 19; i++) { //0~18
            for(int j = 0; j < 14; j++) { //0~13
                
                myCount = 0;
                emptyCount = 0;
                
               for(int k = 0; k < 6; k++) { //13~18
                      if(playBoard[i][j+k] == color) myCount++;
                      else if(playBoard[i][j+k] == 0) emptyCount++;
               }
      
                if(!(myCount + emptyCount == 6) || !(emptyCount == 1 || emptyCount == 2)) continue;
                
                //if((j == 0 || j > 0 && playBoard[i][j - 1] != color) && (j + 5 == 18 || j + 5 < 18 && playBoard[i][j + 6] != color)) {
               if((j - 1 >= 0 && playBoard[i][j - 1] != color) && (j + 6 <= 18 && playBoard[i][j + 6] != color)) {
                        
                   System.out.println("세로 공격로 진입. " + i+" : "+j);
                    
                   for(int k = 0; k < 6; k++) { //13~18
                       if(playBoard[i][j+k] == 0 && weight[i][j+k] >= 0) {
                           superWeight[i][j+k] += 500;
                           System.out.println("가중치 부여됨 " + i+" : "+j+k);
                           return;
                       }
                   }
                }
            }
        }






       
        



    




}
    public void 세로(){}
}