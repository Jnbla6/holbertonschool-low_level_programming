```mermaid
flowchart TD
    A["Start _printf"] --> B["Initialize count_chars and va_list"]
    B --> C["Loop over format string"]
    
    C --> D{"Is char '%' ?"}
    D -->|No| E["Print char directly"] --> C
    D -->|Yes| F["Call handle_specifier"]
    
    F --> G["Check flags (+, space, #)"]
    G --> H{"Specifier type"}
    H -->|c| I["Print char"]
    H -->|s| J["Print string"]
    H -->|d/i| K["Print integer"]
    H -->|u| L["Print unsigned int"]
    H -->|o| M["Print octal"]
    H -->|x/X| N["Print hex"]
    H -->|b| O["Print binary"]
    H -->|S| P["Print escaped string"]
    H -->|p| Q["Print pointer"]
    H -->|Other| R["Print char with flags"]

    C --> S{"End of format string?"}
    S -->|Yes| T["va_end and return count_chars"]
    S -->|No| C
