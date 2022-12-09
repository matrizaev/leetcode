int maxAreaOfIsland(int** grid, int gridSize, int* gridColSize){

    bool ** seen = malloc(gridSize*sizeof(bool *));
    for(int i=0; i< gridSize; i++) {
        seen[i] = malloc(gridColSize[i]*sizeof(bool));
        for (int j = 0; j < gridColSize[i]; j++)
            seen[i][j] = false;
    }

    int area(int r, int c){
        if (r < 0 || c < 0 || r >= gridSize || c >= gridColSize[r] || grid[r][c]==0 || seen[r][c] == true)
            return 0;
        seen[r][c] = true;
        return 1 + area(r-1, c) + area(r+1, c) + area(r, c-1) + area(r, c+1);
    }

    int result = 0;

    for (int r = 0; r < gridSize; r++)
        for (int c = 0; c < gridColSize[r]; c++){
            int a = area(r, c);
            result = result < a ? a : result;
        }


    return result;
}
