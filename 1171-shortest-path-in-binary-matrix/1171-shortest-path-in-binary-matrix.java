class Solution {
    public int shortestPathBinaryMatrix(int[][] grid) {
        int n = grid.length;
        int[][] dp = new int[n][n];
        if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1)
            return -1;
        for (int[] row : dp) {
            Arrays.fill(row, Integer.MAX_VALUE);
        }
        Queue<int[]> q = new LinkedList<>();
        dp[0][0] = 1;
        q.add(new int[] { 0, 0 });
        while (!q.isEmpty()) {
            int[] cell = q.poll();
            int x = cell[0], y = cell[1];
            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    int rw = x + i;
                    int cw = y + j;
                    if (rw >= 0 && rw < n && cw >= 0 && cw < n &&
                            grid[rw][cw] == 0 &&
                            dp[rw][cw] > dp[x][y] + 1) {
                        dp[rw][cw] = dp[x][y] + 1;
                        q.add(new int[] { rw, cw });
                    }
                }
            }
        }
        return dp[n - 1][n - 1] != Integer.MAX_VALUE ? dp[n - 1][n - 1] : -1;
    }
}