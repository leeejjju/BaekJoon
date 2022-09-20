package consix;

class a{
    //임시
    int add, myCount, opponent;
    int[][] playBoard, superWeight, weight;
    public void 가로(){




  // 가로 시작점
  // -------------------------------------------------------------------------------------------------





  if (add >= 2) return;
  // 방어/가로/5-1
  for (int j = 0; j < 19; j++) {
      myCount = 0;
      for (int i = 0; i < 19; i++) {
          try {
              if (playBoard[i][j] == opponent) {
                  myCount++;
                  if (myCount == 5) { // 양끝 모두(빈곳)에 가중치 왕창 이벤트
                      if (i - 5 > 0 && playBoard[i - 5][j] == 0) { // 0[11111] (left)
                          superWeight[i - 5][j] += 80;
                          add++;
                      }
                      if (i + 1 < 19 && playBoard[i + 1][j] == 0) { // [11111]0 (right)
                          superWeight[i + 1][j] += 80;
                          add++;
                      }
                  }
              } else myCount = 0;
          } catch (ArrayIndexOutOfBoundsException e) { }
      }
  }

  if (add >= 2) return;
  // 방어/가로/4-2/1-4-1
  for (int j = 0; j < 19; j++) {
      myCount = 0;
      for (int i = 0; i < 19; i++) {
          try {
              if (playBoard[i][j] == opponent) {
                  myCount++;
                  if (myCount == 4) {


                      if (i - 4 > 0){ //위쪽
                        //둘다 비었으면 일반 가중치가 높은 쪽으로... 
                        if(i - 5 > 0 && playBoard[i-4][j] == 0 && playBoard[i-5][j] == 0){
                          int dummy = (weight[i-4][j] > weight[i-5][j]) ? (superWeight[i-4][j] += 80) : (superWeight[i-5][j] += 80);
                          add ++;
                        }else{ //하나라도 막혀있으면 뚫린 쪽에 가중치 부여
                            if(playBoard[i - 4][j] == 0){
                                superWeight[i - 4][j] += 80;
                                add++;
                            }
                            if(i - 5 > 0 && playBoard[i - 5][j] == 0){
                                superWeight[i - 5][j] += 80;
                                add++;
                            }
                        }
                    }
                    if (i + 1 < 19){ //아래쪽
                        //둘다 비었으면 일반 가중치가 높은 쪽으로... 
                        if(i + 2 < 19 && playBoard[i + 1][j ] == 0 && playBoard[i + 2][j ] == 0){
                            int dummy = (weight[i + 1][j] > weight[i + 2][j ]) ? (superWeight[i + 1][j ] += 80) : (superWeight[i + 2][j] += 80);
                            add ++;
                          }else{ //하나라도 막혀있으면 뚫린 쪽에 가중치 부여
                              if(playBoard[i + 1][j ] == 0){
                                  superWeight[i + 1][j ] += 80;
                                  add++;
                              }
                              if(i + 2 < 19 && playBoard[i + 2][j] == 0){
                                  superWeight[i + 2][j] += 80;
                                  add++;
                              }
                          }
                    }



                  }
              } else myCount = 0;
          } catch (ArrayIndexOutOfBoundsException e) { }
      }
  }

  if (add >= 2) return;
  // 방어/가로/3-1-1-1
  for (int j = 0; j < 19; j++) {
      myCount = 0;
      for (int i = 0; i < 19; i++) {
          try {
              if (playBoard[i][j] == opponent) {
                  myCount++;
                  if (myCount == 3) {
                    //앞에서 4연속은 걸러졌으리라 간주하므로 양(1)끝이 비어있다고 전제함... 
                    // 2에 상대 돌이 있으면 13중 하나, 없으면 12중 하나 막기. - 345, + 123. 인덱스 개짱나네... 

                    //위쪽 -345
                    if(i-4>0 && playBoard[i-4][j] == opponent){ //상대 돌이 대기중일때,
                        
                        if(i-5>0 && playBoard[i-5][j] == 0){ //3이 유효하면 13중 하나 막기
                            int dummy = (weight[i-3][j] > weight[i-5][j]) ? (superWeight[i-3][j] += 80) : (superWeight[i-5][j] += 80);
                            add ++;
                        }else{//아니면 1 막기
                            superWeight[i-3][j] += 80;
                            add++;
                        }
                    }else if(i-4>0){ //상대 돌이 대기중 아닐때, 12중 하나 막기
                        int dummy = (weight[i-3][j] > weight[i-4][j]) ? (superWeight[i-3][j] += 80) : (superWeight[i-4][j] += 80);
                        add ++;
                    }

                    //아래쪽 +123
                    if(i+2 < 19 && playBoard[i+2][j] == opponent){ //상대 돌이 대기중일때,
                        
                        if(i+3 < 19 && playBoard[i+3][j] == 0){ //3이 유효하면 13중 하나 막기
                            int dummy = (weight[i+1][j] > weight[i+3][j]) ? (superWeight[i+1][j] += 80) : (superWeight[i+3][j] += 80);
                            add ++;
                        }else{//아니면 1 막기
                            superWeight[i+1][j] += 80;
                            add++;
                        }
                    }else if(i+2 < 19){ //상대 돌이 대기중 아닐때, 12중 하나 막기
                        int dummy = (weight[i+1][j] > weight[i+2][j]) ? (superWeight[i+1][j] += 80) : (superWeight[i+2][j] += 80);
                        add ++;
                    }


                  }
              } else myCount = 0;
          } catch (ArrayIndexOutOfBoundsException e) {}
      }
  }


  if (add >= 2) return;
  // 방어/가로/2-2-2/1-2-1-2/1-1-1-1-2/1-1-2-1-1
  for (int j = 0; j < 19; j++) {
      myCount = 0; // initialize myCount when entering new row
      for (int i = 0; i < 19; i++) {
          try {
              if (playBoard[i][j] == opponent) {
                  myCount++;
                  if (myCount == 2) {
                      if (i + 4 < 19 && playBoard[i + 1][j] == 0 && playBoard[i + 2][j] == 0
                              && playBoard[i + 3][j] == opponent
                              && playBoard[i + 4][j] == opponent) { // [11]0011 (right)
                          int dummy = (weight[i+1][j] > weight[i+2][j]) ? (superWeight[i+1][j] += 80) : (superWeight[i+2][j] += 80);
                        add ++;
                      }else if (i - 2 > 0 && i + 3 < 19 && playBoard[i - 2][j] == 0
                              && playBoard[i + 1][j] == 0
                              && playBoard[i + 2][j] == opponent
                              && playBoard[i + 3][j] == opponent) { // 0[11]011 (mid)
                          int dummy = (weight[i+1][j] > weight[i-2][j]) ? (superWeight[i+1][j] += 80) : (superWeight[i-2][j] += 80);
                        add ++;
                      }else if (i - 5 > 0 && playBoard[i - 2][j] == 0
                              && playBoard[i - 4][j] == 0
                              && playBoard[i - 3][j] == opponent
                              && playBoard[i - 5][j] == opponent) { // 1010[11] (left)
                                int dummy = (weight[i-4][j] > weight[i-2][j]) ? (superWeight[i-4][j] += 80) : (superWeight[i-2][j] += 80);
                                add ++;
                      }else if (i - 3 > 0 && i + 2 < 19 && playBoard[i - 2][j] == 0
                              && playBoard[i + 1][j] == 0
                              && playBoard[i - 3][j] == opponent
                              && playBoard[i + 2][j] == opponent) { // 10[11]01 mid
                        int dummy = (weight[i+1][j] > weight[i-2][j]) ? (superWeight[i+1][j] += 80) : (superWeight[i-2][j] += 80);
                        add ++;
                      }else if (i + 4 < 19 && playBoard[i + 1][j] == 0
                              && playBoard[i + 3][j] == 0
                              && playBoard[i + 2][j] == opponent
                              && playBoard[i + 4][j] == opponent) { // [11]0101 (right)
                        int dummy = (weight[i+1][j] > weight[i+3][j]) ? (superWeight[i+1][j] += 80) : (superWeight[i+3][j] += 80);
                        add ++;
                      }else if (i + 4 < 19 && playBoard[i + 1][j] == 0
                              && playBoard[i + 4][j] == 0
                              && playBoard[i + 2][j] == opponent
                              && playBoard[i + 3][j] == opponent) { // [11]0110 (right)
                        int dummy = (weight[i+1][j] > weight[i+4][j]) ? (superWeight[i+1][j] += 80) : (superWeight[i+4][j] += 80);
                        add ++;
                      }
                  }
              } else myCount = 0;
          } catch (ArrayIndexOutOfBoundsException e) {}
      }
  }

    }
}