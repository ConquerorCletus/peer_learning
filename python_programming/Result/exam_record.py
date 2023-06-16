class ExamRecord:
    no_of_students = 0
    no_of_subjects = 8


    def __init__(self, student_name, year, score=[]):
        self.student_name = student_name
        self.year = year
        self.score = score

    def average_score(self):
        scores = []
        for _ in range(ExamRecord.no_of_subjects):
            score = int(input("Enter subject score: "))
            scores.append(score)
        total_score = sum(score)
        average = total_score / ExamRecord.no_of_subjects
        return (average)


def main():
    record = ExamRecord("John Doe", 2023)
    avg = record.average_score()
    print("Average score:", avg)



main()


