# Create PDF document without currency symbols, using text-based solution
pdf = FPDF()
pdf.set_auto_page_break(auto=True, margin=15)
pdf.add_page()

# Set Title
pdf.set_font("Arial", 'B', 16)
pdf.cell(200, 10, "Top 10 Engineering Colleges for CSE in Coimbatore - TNEA 2025", ln=True, align='C')

# Add a line break
pdf.ln(10)

# Set Table Header
pdf.set_font("Arial", 'B', 12)
pdf.cell(30, 10, "Rank", border=1, align='C')
pdf.cell(60, 10, "College Name", border=1, align='C')
pdf.cell(30, 10, "Course", border=1, align='C')
pdf.cell(40, 10, "TNEA Code", border=1, align='C')
pdf.cell(30, 10, "Fees (in ₹)", border=1, align='C')
pdf.ln()

# Add data to table without currency symbols
colleges = [
    ("1", "Dr. N.G.P. Institute of Technology", "CSE", "2736", "97,800"),
    ("2", "KGISL Institute of Technology", "CSE", "2751", "93,000"),
    ("3", "SNS College of Engineering", "CSE", "2734", "90,000"),
    ("4", "Jansons Institute of Technology", "CSE", "2762", "1,05,000"),
    ("5", "VSB College of Engineering Tech Campus", "CSE", "2759", "95,000"),
    ("6", "Sri Eshwar College of Engineering", "CSE", "2757", "95,000"),
    ("7", "Hindusthan Institute of Technology", "CSE", "2735", "98,000"),
    ("8", "P.A. College of Engineering (Pollachi)", "CSE", "2741", "75,600"),
    ("9", "Akshaya College of Engineering", "CSE", "2758", "87,000"),
    ("10", "Kathir College of Engineering", "CSE", "2733", "90,000")
]

pdf.set_font("Arial", '', 12)
for college in colleges:
    pdf.cell(30, 10, college[0], border=1, align='C')
    pdf.cell(60, 10, college[1], border=1, align='C')
    pdf.cell(30, 10, college[2], border=1, align='C')
    pdf.cell(40, 10, college[3], border=1, align='C')
    pdf.cell(30, 10, college[4], border=1, align='C')
    pdf.ln()

# Save PDF
pdf_output_path = "/mnt/data/Top_Colleges_CSE_Coimbatore_v2.pdf"
pdf.output(pdf_output_path)

pdf_output_path
