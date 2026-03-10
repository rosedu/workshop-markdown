#!/bin/bash

# Check if arguments were provided
if [ $# -eq 0 ]; then
    echo "Usage: $0 username1 username2 ..."
    echo "Example: $0 adrian_dev bot-helper john_doe"
    exit 1
fi

# Convert arguments into a JSON array for jq
EXCEPTIONS_JSON=$(printf '%s\n' "$@" | jq -R . | jq -s .)

echo "Closing open pull requests (up to 1000), except those created by: $@"

# Filter and close process
# Added --limit 1000 to bypass the default 30 results pagination
gh pr list --state open --limit 1000 --json number,author | \
jq -r --argjson exceptions "$EXCEPTIONS_JSON" \
  '.[] | select(.author.login as $auth | $exceptions | index($auth) | not) | .number' | \
xargs -I {} gh pr close {} --comment "Automatically closed: Author is not in the approved users list."
