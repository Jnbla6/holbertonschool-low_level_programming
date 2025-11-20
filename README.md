flowchart TD
    A[Start] --> B[Initialize variables]
    B --> C{Check format type}
    C -->|c| D[Print character]
    C -->|s| E[Print string]
    E --> F[Loop over format]
    F --> G{More items?}
    G -->|Yes| F
    G -->|No| H[End]
    D --> H
    
