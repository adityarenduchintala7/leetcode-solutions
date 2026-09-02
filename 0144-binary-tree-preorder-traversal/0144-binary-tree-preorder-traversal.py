# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preord(self,node):
        res = []
        if not node:
            return []
        return [node.val] + self.preord(node.left) + self.preord(node.right)

    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        return self.preord(root)


        

