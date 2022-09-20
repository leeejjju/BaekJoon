package consix;

public class deagak {

    int add, myCount, opponent;
    int[][] playBoard, superWeight, weight;
    int color;
    public void a(){
    int check;




    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            myCount = 0;
            check = 0;
            for (int k = 0; k < 6; k++) {
                try {
                    if (playBoard[i + k][j + k] == color) {
                        myCount++;
                    } else if (playBoard[i + k][j + k] == opponent) {
                        myCount = 0;
                        break;
                    } else if (playBoard[i + k][j + k] == 0) {
                        if (check == 0 && myCount != 0)
                            check = myCount;
                    }

                } catch (ArrayIndexOutOfBoundsException e) {
                }
            }
            if (myCount == 5) {
                try {
                    // 연속
                    if (check == 5) {
                        try {
                            if (playBoard[i][j] == 0 && playBoard[i - 1][j - 1] != color) {
                                if (playBoard[i + 6][j + 6] == 0) {
                                    superWeight[i][j] += 500;
                                    superWeight[i + 6][j + 6] += 500;
                                    return;
                                } else if (playBoard[i + 6][j + 6] == opponent) {
                                    superWeight[i][j] += 500;
                                    return;
                                }
                            } else if (playBoard[i + 5][j + 5] == 0 && playBoard[i - 6][j - 6] != color) {
                                if (playBoard[i - 1][j - 1] == 0) {
                                    superWeight[i - 1][j - 1] += 500;
                                    superWeight[i + 5][j + 5] += 500;
                                    return;
                                } else if (playBoard[i - 1][j - 1] == opponent) {
                                    superWeight[i + 5][j + 5] += 500;
                                    return;
                                }
                            }
                        } catch (ArrayIndexOutOfBoundsException e) {
                        }
                    }
                    // 중간에 공백 있음
                    else if (playBoard[i - 1][j - 1] != color && playBoard[i + 6][j + 6] != color) {
                        for (int k = 0; k < 6; k++) {
                            if (playBoard[i + k][j + k] == 0) {
                                superWeight[i + k][j + k] += 500;
                                return;
                            }
                        }
                    }
                } catch (ArrayIndexOutOfBoundsException e) {
                }
            } else if (myCount == 4) {
                if (check == 4) {
                    for (int k = 0; k < 6; k++) {
                        try {
                            // 4개 연속
                            if (playBoard[i + k][j + k] == color) {
                                if (playBoard[i + k - 1][j + k - 1] == 0
                                        && playBoard[i + k + 4][j + k + 4] == 0) {
                                    superWeight[i + k - 1][j + k - 1] += 500;
                                    superWeight[i + k + 4][j + k + 4] += 500;
                                    return;
                                } else if (playBoard[i - 1][j - 1] == opponent
                                        && playBoard[i + k + 4][j + k + 4] == 0) {
                                    superWeight[i + k + 4][j + k + 4] += 500;
                                    return;
                                } else if (playBoard[i + 4][j + 4] == opponent
                                        && playBoard[i + k - 1][j + k - 1] == 0) {
                                    superWeight[i + k - 1][j + k - 1] += 500;
                                    return;
                                }
                            }
                        } catch (ArrayIndexOutOfBoundsException e) {
                        }
                    }
                } else if (check == 3) {
                    for (int k = 0; k < 6; k++) {
                        try {
                            // 3연속 1 공백 1
                            if (playBoard[i + k][j + k] == color
                                    && playBoard[i + k + 4][j + k + 4] == color) {
                                if (playBoard[i + k - 1][j + k - 1] == 0 && playBoard[i + k + 5][j + k + 5] == 0) {
                                    superWeight[i + k - 1][j + k - 1] += 500;
                                    superWeight[i + k + 5][j + k + 5] += 500;
                                    return;
                                } else if (k == 0 && playBoard[i + k - 1][j + k - 1] == opponent) {
                                    superWeight[i + k + 5][j + k + 5] += 500;
                                    return;
                                } else if (k == 1 && playBoard[i + k + 5][j + k + 5] == opponent) {
                                    superWeight[i + k - 1][j + k - 1] += 500;
                                    return;
                                }
                            }
                            // 3연속 2공백 1
                            else if (playBoard[i + k][j + k] == color && playBoard[i + k + 3][j + k + 3] == 0
                                    && playBoard[i + k + 4][j + k + 4] == 0) {
                                if (weight[i + k + 3][j + k + 3] > weight[i + k + 4][j + k + 4]) {
                                    superWeight[i + k + 3][j + k + 3] += 500;
                                } else {
                                    superWeight[i + k + 4][j + k + 4] += 500;
                                }
                                return;
                            }
                        } catch (ArrayIndexOutOfBoundsException e) {
                        }
                    }
                } else if (check == 2) {
                    for (int k = 0; k < 6; k++) {
                        try {
                            if (playBoard[i + k][j + k] == color) {
                                // 2연속 1공백 2
                                if (playBoard[i + k - 1][j + k - 1] == 0 && playBoard[i + k + 5][j + k + 5] == 0) {
                                    superWeight[i + k - 1][j + k - 1] += 500;
                                    superWeight[i + k + 5][j + k + 5] += 500;
                                    return;
                                } else if (k == 0 && playBoard[i + k - 1][j + k - 1] == opponent) {
                                    superWeight[i + k + 5][j + k + 5] += 500;
                                    return;
                                } else if (k == 1 && playBoard[i + k + 5][j + k + 5] == opponent) {
                                    superWeight[i + k - 1][j + k - 1] += 500;
                                    return;
                                }
                                // 2연속 2공백 2
                                else if (playBoard[i + k + 2][j + k + 2] == 0
                                        && playBoard[i + k + 3][j + k + 3] == 0) {
                                    if (weight[i + k + 2][j + k + 2] > weight[i + k + 3][j + k + 3]) {
                                        superWeight[i + k + 2][j + k + 2] += 500;
                                    } else {
                                        superWeight[i + k + 3][j + k + 3] += 500;
                                    }
                                    return;
                                }
                            }
                        } catch (ArrayIndexOutOfBoundsException e) {
                        }
                    }
                } else if (check == 1) {
                    for (int k = 0; k < 6; k++) {
                        try {
                            // 1 1공백 3연속
                            if (playBoard[i + k][j + k] == color
                                    && playBoard[i + k + 2][j + k + 2] == color) {
                                if (playBoard[i + k - 1][i + k - 1] == 0 && playBoard[i + k + 5][j + k + 5] == 0) {
                                    superWeight[i + k - 1][i + k - 1] += 500;
                                    superWeight[i + k + 5][j + k + 5] += 500;
                                    return;
                                } else if (k == 0 && playBoard[i + k - 1][j + k - 1] == opponent) {
                                    superWeight[i + k + 5][j + k + 5] += 500;
                                    return;
                                } else if (k == 1 && playBoard[i + k + 5][j + k + 5] == opponent) {
                                    superWeight[i + k - 1][j + k - 1] += 500;
                                    return;
                                }
                            }
                            // 1 2공백 3연속
                            else if (playBoard[i + k][j + k] == color) {
                                if (weight[i + k + 1][j + k + 1] > weight[i + k + 2][j + k + 2]) {
                                    superWeight[i + k + 1][j + k + 1] += 500;
                                } else {
                                    superWeight[i + k + 2][j + k + 2] += 500;
                                }
                                return;
                            }
                        } catch (ArrayIndexOutOfBoundsException e) {
                        }
                    }
                }
            }
        }
    }



    
        


    }
}
