####################################
            
####################################


from itertools import combinations

l = [1,2,3]

for i in combinations(l,2):
	print(i)

'''
출력 결과:
(1, 2)
(1, 3)
(2, 3)
'''

from itertools import combinations_with_replacement

l = ['A', 'B', 'C']

for i in combinations_with_replacement(l,2):
	print(i)

'''
출력결과:
('A', 'A')
('A', 'B')
('A', 'C')
('B', 'B')
('B', 'C')
('C', 'C')
'''

from itertools import permutations

l = ['A', 'B', 'C']

for i in permutations(l): #r을 지정하지 않거나 r=None으로 하면 최대 길이의 순열이 리턴된다!
	print(i)

'''
출력결과:
('A', 'B', 'C')
('A', 'C', 'B')
('B', 'A', 'C')
('B', 'C', 'A')
('C', 'A', 'B')
('C', 'B', 'A')
'''

from itertools import product

l1 = ['A', 'B']
l2 = ['1', '2']

for i in product(l1,l2,repeat=1): #l1과 l2의 모든 쌍을 지어 리턴한다
	print(i)

'''
출력결과:
('A', '1')
('A', '2')
('B', '1')
('B', '2')
'''

for i in product(l1,repeat=3): #product(l1,l1,l1,repeat=1)과 동일한 출력
	print(i)

'''
출력결과:
('A', 'A', 'A')
('A', 'A', 'B')
('A', 'B', 'A')
('A', 'B', 'B')
('B', 'A', 'A')
('B', 'A', 'B')
('B', 'B', 'A')
('B', 'B', 'B')
'''
