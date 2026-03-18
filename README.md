# LeetCode Progress Tracker

![Total Questions Solved](https://img.shields.io/badge/Solved%20Questions-0-brightgreen) ![Daily Update](https://img.shields.io/badge/Last%20Updated-2026--03--18%20%21%20hour%20UTC-blue)

## Overview

This repository tracks your LeetCode progress automatically and generates a badge showing the number of problems solved based on the provided username.

## Configuration Instructions

1. **Fork this repository.**
2. **Add your LeetCode username:**
   - Go to **Settings** -> **Secrets and variables** -> **Actions**.
   - Create a new secret named `LEETCODE_USERNAME` and set its value to your LeetCode username.
3. **Set up the workflow:**
   - The GitHub actions will run daily, and on each push, to fetch the number of problems solved.

## How the Badge Works
- The badge displaying the number of solved questions will be updated automatically through the action script.

### Breakdown by Difficulty (Coming Soon)

- Easy: 0
- Medium: 0
- Hard: 0