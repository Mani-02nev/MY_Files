from fpdf import FPDF

class PDF(FPDF):
    def header(self):
        self.set_font("Arial", "B", 14)
        self.cell(0, 10, "1st Semester Study Plan - 6 Subjects", 0, 1, "C")
        self.ln(5)
            
    def chapter_title(self, title):
        self.set_font("Arial", "B", 12)
        self.cell(0, 10, title, 0, 1)
        self.ln(2)
    
    def chapter_body(self, body):
        self.set_font("Arial", "", 11)
        self.multi_cell(0, 8, body)
        self.ln()

pdf = PDF()
pdf.add_page()

pdf.chapter_title("Subjects Covered:")
pdf.chapter_body(
    "C Programming\nOperating System (Linux basics)\nWeb Development\nRDBMS\nDigital Logic and Design System\n"
)

pdf.chapter_title("Study Duration:")
pdf.chapter_body("3 hours per day, balanced study across all 6 subjects.")

pdf.chapter_title("Weekly Study Plan:")
table = """
Day | Subject Focus | Hours | Topics/Activities
----|---------------|-------|------------------
Mon  | C Programming | 0.6   | Basics: Variables, Data types, Operators, Control structures (if, for, while)
     | OS (Linux)    | 0.6   | Basic Linux commands, File system navigation, Permissions
     | Web Dev      | 0.6   | HTML basics, Tags, Structure of a webpage
     | RDBMS        | 0.3   | Introduction to databases, Tables, Primary key
     | Digital Logic| 0.3   | Number Systems (binary, decimal), Logic gates

Tue  | C Programming | 0.6   | Functions, Arrays, Strings
     | OS (Linux)    | 0.6   | File handling commands, Processes overview
     | Web Dev      | 0.6   | CSS basics, Styling pages
     | RDBMS        | 0.3   | SQL Basics: SELECT, INSERT statements
     | Digital Logic| 0.3   | Boolean Algebra, Simplification techniques

Wed  | C Programming | 0.6   | Pointers basics, Structures
     | OS (Linux)    | 0.6   | Shell scripting basics (simple scripts)
     | Web Dev      | 0.6   | JavaScript basics (variables, functions)
     | RDBMS        | 0.3   | Queries with WHERE, UPDATE, DELETE
     | Digital Logic| 0.3   | Combinational circuits: adders, multiplexers

Thu  | C Programming | 0.6   | File handling in C
     | OS (Linux)    | 0.6   | Process management commands, Cron jobs
     | Web Dev      | 0.6   | JavaScript DOM manipulation
     | RDBMS        | 0.3   | Joins and Relationships in SQL
     | Digital Logic| 0.3   | Sequential circuits: flip-flops, counters

Fri  | C Programming | 0.6   | Dynamic memory allocation, Recursion
     | OS (Linux)    | 0.6   | Permissions & ownership, user management
     | Web Dev      | 0.6   | Responsive design basics, media queries
     | RDBMS        | 0.3   | Normalization concepts
     | Digital Logic| 0.3   | Memory elements and their applications

Sat  | Revision (All subjects) | 3  | Practice coding, Linux commands, SQL, Digital circuits
Sun  | Rest / Light revision / Projects | 2-3 | Light study or small projects (e.g., simple webpage, shell script)
"""
pdf.chapter_body(table)

pdf.chapter_title("Tips for Success:")
tips = """- Make notes daily for each subject.
- Practice coding and commands hands-on.
- Use diagrams/flowcharts for Digital Logic concepts.
- Try small projects for Web Dev and Linux.
- Revise older topics every weekend.
- Use online resources/videos for difficult topics."""
pdf.chapter_body(tips)

pdf_file_path = "/mnt/data/1st_Semester_6_Subjects_Study_Plan.pdf"
pdf.output(pdf_file_path)
