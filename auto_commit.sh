#!/bin/bash

# List of Git project directories
REPOS=(
    "/Users/gobinath/study/mani/doc"
    "/Users/gobinath/study/mani/python"
    "/Users/gobinath/study/mani/c++"
    "/Users/gobinath/study/mani/c_program"
    "/Users/gobinath/study/mani/C_Basic"
    "/Users/gobinath/study/mani/C Advance"
    "/Users/gobinath/study/mani/bash script"
    "/Users/gobinath/study/mani/K_and_R"
    "/Users/gobinath/study/mani/my_sql"
    "/Users/gobinath/study/mani/mysite"
    "/Users/gobinath/study/mani/typing"
    "/Users/gobinath/study/mani/web_site"
)

for REPO in "${REPOS[@]}"
do
    echo "➡️ Working on $REPO"
    cd "$REPO" || { echo "❌ Failed to enter $REPO"; continue; }

    # Add and commit if changes exist
        git checkout main
        git add .
        git commit -m "Auto commit on $(date)"
        echo "Auto commit on $(date) SussesFull ✅"
        git pull origin main
        echo " Data pull in main ✅ "
        git push origin main
        echo " Data push in main ✅ "
        echo "Git Status"
        git status



        
done
