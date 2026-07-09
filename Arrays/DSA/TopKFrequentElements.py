class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        dic = {}

        for num in nums:
            if num not in dic:
                dic[num] = 1
            else:
                dic[num] += 1

        pairs = []

        for key, val in dic.items():
            pairs.append([val, key])

        pairs.sort(reverse=True)

        ans = []

        for i in range(k):
            ans.append(pairs[i][1])

        return ans



            
            
            


        