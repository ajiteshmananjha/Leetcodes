# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfSubtree(self, root: TreeNode) -> int:
        ans = 0
        def dfs(node):
            nonlocal ans
            if node is None:
                return [0,0]
                
            right = dfs(node.right)
            left = dfs(node.left)

            suma = right[0] + left[0] + node.val
            count = right[1] + left[1] + 1

            if suma//count == node.val:
                ans+=1
            return [suma,count]


        dfs(root)
        return ans
        
        