def solution(x):

    num_x = x
    #x를 문자열로 바꿔서 각 문자를 num으로 for문에서 돌리면서 sum하기
    sum_x = sum([int(num) for num in str(x)])
    print(sum_x," ", num_x)
    if num_x % sum_x ==0:
        return True
    else:
        return False
