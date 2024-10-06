class Solution(object):
    def solveNQueens(self, n):
        """
        :type n: int
        :rtype: List[List[str]]
        """
        result = [0] * (n + 1)
        col = [0] * (n + 1) 
        dia1 = [0] * (2 * n)
        dia2 = [0] * (2 * n)
        sol = []

        def test(k):
            for v in range(1, n + 1):
                if col[v] == 0 and dia1[k - v + n] == 0 and dia2[k + v - 1] == 0:
                    result[k] = v
                    col[v] = dia1[k - v + n] = dia2[k + v - 1] = 1
                    if k == n: 
                        board = []
                        for i in range(1, n + 1):
                            row = ['.' * (result[i] - 1) + 'Q' + '.' * (n - result[i])]
                            board.extend(row)
                        sol.append(board)
                    else:
                        test(k + 1)
                    # Backtrack
                    col[v] = dia1[k - v + n] = dia2[k + v - 1] = 0
        
        test(1)
        return sol
solution = Solution()
num = int(input())
print(solution.solveNQueens(num))
