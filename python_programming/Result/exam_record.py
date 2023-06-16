class ExamRecord:
    no_of_students = 0
    no_of_subjects = 0
   
    def __init__(self, student_name, year):
        self.student_name = student_name
        self.year = year
        self.average_score = 0


    def add_subject(self, subject):
        ExamRecord.no_of_subjects = len(subject)

    def add_grades(self, score):
        if len(score) == ExamRecord.no_of_subjects:
            self.average_score = sum(score) / ExamRecord.no_of_subjects

        else:
            print("Enter correct scores")


    @classmethod

    def new_student(cls, count):
        cls.no_of_students = count



def main():
    student1 = ExamRecord("John", 2017)
    student1.add_subject(["math","English"])
    student1.add_grades([50,50])
    student2 = ExamRecord("Henry", 2017)
    student2.add_subject(["math","English"])
    student2.add_grades([70,50])



    print(student1.student_name)
    print(student1.year)
    print(student2.student_name)
    print("The average of 2nd student", student2.average_score)
    print("The average of 1st student is",student1.average_score)
    print(ExamRecord.no_of_students)

main()





