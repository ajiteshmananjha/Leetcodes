from collections import deque

class Solution(object):
    def averageOfSubtree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """

        def bfs(node):
            if node is None:
                return -1
            count, summa = 0, 0
            q1 = deque([node])
            while q1:
                n = q1.popleft()
                summa += n.val
                count += 1

                if n.right:
                    q1.append(n.right)
                if n.left:
                    q1.append(n.left)

            return summa // count

        que = deque([root])
        ans = 0

        while que:
            e = que.popleft()
            avg = bfs(e)
            if avg == e.val:
                ans += 1
            if e.right:
                que.append(e.right)
            if e.left:
                que.append(e.left)

        return ans
