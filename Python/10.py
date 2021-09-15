#Problem 10 Python (Hackerrank)
#Take input of name and score. Print second Highest score

if __name__ == '__main__':
    student = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        student.append([name, score])
    

    second_high = sorted(set([i[1] for i in student]))[1]
    print("\n".join(sorted([i[0] for i in student if i[1] == second_high])))