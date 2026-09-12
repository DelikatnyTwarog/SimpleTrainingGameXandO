#!/bin/bash
DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CMD="\"$DIR/SimpleGameXandO\"; echo; read -p 'Naciśnij Enter, aby zamknąć...'"

for term in konsole xterm gnome-terminal xfce4-terminal; do
    if command -v "$term" &> /dev/null; then
        "$term" -e bash -c "$CMD"
        exit 0
    fi
done

bash -c "$CMD"
