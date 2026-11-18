class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = Counter(nums)
        n=len(count)
        cnt=0
        res=list
        by_freq = sorted(count, key=lambda x: count[x], reverse=True)
        return by_freq[:k]

