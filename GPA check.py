course = input("Enter your course name: ")
exams_score = int(input("Enter your exams score: "))
credit_hours = 3

if exams_score >= 90 and exams_score <= 100:
    grade = 'A'
    GPA = 4.0
elif exams_score >= 80 and exams_score <= 89:
    grade = 'B'
    GPA = 3.0
elif exams_score >= 70 and exams_score <= 79:
    grade = 'C'
    GPA = 2.0
elif exams_score >= 60 and exams_score <= 69:
    grade = 'D'
    GPA = 1.0
elif exams_score >= 0 and exams_score <= 59:
    grade = 'F'
    GPA = 0.0
else:
    print("Enter a valid input.")
    exit()

print("Grade:", grade)
print("GPA:", GPA)
print("Credit hours:", credit_hours)

