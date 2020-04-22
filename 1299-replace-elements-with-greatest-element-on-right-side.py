class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        rightmax = arr[-1]
        arr[-1] = -1
        for i in range(2, len(arr) + 1):
            temp = arr[-i]
            arr[-i] = rightmax
            rightmax = max(rightmax, temp)
        return arr
