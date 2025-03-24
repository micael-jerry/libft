#!/bin/bash

# Script to set up a Python3 environment, install dependencies, and run norminette.

# Check if a Python3 virtual environment exists and create one if it doesn't.
if [ ! -d ".venv" ]; then
  echo "Creating Python3 virtual environment..."
  if ! command -v python3 &> /dev/null
  then
    echo "python3 could not be found"
    exit 1
  fi
  python3 -m venv .venv
  if [ $? -ne 0 ]; then
    echo "Error creating virtual environment."
    exit 1
  fi
fi

# Activate the virtual environment.
echo "Activating virtual environment..."
source .venv/bin/activate

# Install dependencies from requirements.txt.
echo "Installing dependencies from requirements.txt..."
if [ -f "requirements.txt" ]; then
  pip install --upgrade pip
  pip install -r requirements.txt
  if [ $? -ne 0 ]; then
    echo "Error installing dependencies."
    exit 1
  fi
else
  echo "requirements.txt not found. Skipping dependency installation."
fi

# Run norminette and check for errors.
echo "Running norminette..."
norminette_output=$(python3 -m norminette)

echo "$norminette_output"

if echo "$norminette_output" | grep -q "Error!"; then
  echo "Norminette found errors!"
  exit 1
else
  echo "Norminette passed!"
  exit 0
fi
