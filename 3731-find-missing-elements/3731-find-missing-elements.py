class Solution(object):
    def findMissingElements(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        d = {}
        a = min(nums)
        b = max(nums)

        while a<=b:
            d[a] = 1
            a += 1
        for num in nums:
            if num in d:
                d[num]=0
        store = []
        for k,v in d.items():
            if v == 1:
                store.append(k)
                 
        return sorted(store)

        

