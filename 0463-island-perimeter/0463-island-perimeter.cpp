class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {  // land cell
                    perimeter += 4; // each land cell contributes 4 initially

                    // subtract shared sides with other land cells
                    if (i > 0 && grid[i - 1][j] == 1) perimeter -= 2; // top neighbor
                    if (j > 0 && grid[i][j - 1] == 1) perimeter -= 2; // left neighbor
                }
            }
        }
        return perimeter;
    }
};
