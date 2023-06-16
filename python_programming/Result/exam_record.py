class ExamRecord:
    no_of_students = 0
    no_of_subjects = 8


    def __init__(self, student_name, year, score=[]):
        self.student_name = student_name
        self.year = year
        self.score = score

    def average_score(self):
        score = int(input("Enter 8 subject scores"))
        total_score = sum(score)
        average = total_score / ExamRecord.no_of_subjects
        return (average)


def main():
    new = average_score()


main()


