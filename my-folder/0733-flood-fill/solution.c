/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int new_color, int* returnSize, int** returnColumnSizes){
    void dfs(int** image, int imageSize, int* imageColSize, int r, int c, int orig_color, int new_color){
        if (image[r][c] == orig_color) {
            image[r][c] = new_color;
            if (r >= 1) dfs(image, imageSize, imageColSize, r-1, c, orig_color, new_color);
            if (c >= 1) dfs(image, imageSize, imageColSize, r, c-1, orig_color, new_color);
            if (r+1 < imageSize) dfs(image, imageSize, imageColSize, r+1, c, orig_color, new_color);
            if (c+1 < imageColSize[r]) dfs(image, imageSize, imageColSize, r, c+1, orig_color, new_color);
        }
    }
    int orig_color = image[sr][sc];
    if (orig_color != new_color)
        dfs(image, imageSize, imageColSize, sr, sc, orig_color, new_color);
    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;
    return image;
}
