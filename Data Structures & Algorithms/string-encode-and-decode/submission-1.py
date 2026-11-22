class Solution:

    def encode(self, strs: List[str]) -> str:
        encode = ''
        for s in strs:
            encode += (s)
            encode += ('~')
        return encode

    def decode(self, s: str) -> List[str]:
        decode = []
        count = 0
        app = ''
        for c in s:
            if(c == '~'):
                decode.append(app)
                app = ''
            else:
                app += c
        return decode
