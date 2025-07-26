from flask import Flask, request, jsonify, render_template
import subprocess
import json

app = Flask(__name__)

@app.route("/")
def home():
    return render_template("index.html")

@app.route("/ask", methods=["POST"])
def ask():
    data = request.get_json()
    prompt = data.get("prompt", "")

    # Call ollama using subprocess
    try:
        result = subprocess.run(
            ["ollama", "run", "mistral", prompt],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True
        )
        if result.returncode == 0:
            return jsonify({"response": result.stdout.strip()})
        else:
            return jsonify({"error": result.stderr.strip()}), 500
    except Exception as e:
        return jsonify({"error": str(e)}), 500

if __name__ == "__main__":
    app.run(debug=True)
