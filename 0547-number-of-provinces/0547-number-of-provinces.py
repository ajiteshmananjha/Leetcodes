from collections import deque

class Solution(object):
    def findCircleNum(self, isConnected):
        """
        :type isConnected: List[List[int]]
        :rtype: int
        :time complexity: O(N^2)
        :space complexity: O(N)
        """
        n = len(isConnected)
        count = 0
        visited = [False] * n  
        for i in range(n):
            if not visited[i]:
                count += 1  
                que = deque([i])
                visited[i] = True
                while que:
                    curr_city = que.popleft()
                    
                    for neighbor in range(n):
                        if isConnected[curr_city][neighbor] == 1 and not visited[neighbor]:
                            visited[neighbor] = True
                            que.append(neighbor)
                            
        return count


        