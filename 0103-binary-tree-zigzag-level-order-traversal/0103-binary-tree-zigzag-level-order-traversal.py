# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        if not root:
            return []
        que = deque()
        que.append(root)
        result = []
        flag = False
        while que:
            length = len(que)
            ans = []
            if not flag:
                flag = True
            else:
                flag = False
                
            for _ in range(length):
                c = que.popleft()
                ans.append(c.val)
                if c.left:
                    que.append(c.left)
                if c.right:
                    que.append(c.right)
            if flag:
                result.append(ans)
            else:
                ans.reverse()
                result.append(ans)

        return result

        