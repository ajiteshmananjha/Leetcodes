class Solution:
    def averageOfSubtree(self, root: TreeNode) -> int:
        ans = 0

        def dfs(node):
            nonlocal ans

            if node is None:
                return 0, 0

            leftSum, leftCount = dfs(node.left)
            rightSum, rightCount = dfs(node.right)

            totalSum = leftSum + rightSum + node.val
            totalCount = leftCount + rightCount + 1

            if totalSum // totalCount == node.val:
                ans += 1

            return totalSum, totalCount

        dfs(root)
        return ans