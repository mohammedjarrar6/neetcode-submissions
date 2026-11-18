class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = defaultdict(list)
        for i in strs:
            skebd=''.join(sorted(i))
            groups[skebd].append(i)  
        
        return list(groups.values())