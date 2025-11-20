```mermaid
flowchart TD
    A["Start _printf"] --> B["Initialize count_chars to 0"]
    B --> C["va_start for arguments"]
    C --> D["Loop over format string"]
    
    D --> E{"Is current char '%' ?"}
    E -->|No| F["Print char directly"] --> G["Increment count_chars"] --> D
    E -->|Yes| H["Call handle_specifier"]

    H --> I["Increment index and check flags (+, space, #)"]
    I --> J{"End of string?"}
    J -->|Yes| K["Print '%' and any flags"] --> D
    J -->|No| L["Combine + and space flags if both set"]
    
    L --> M{"Specifier type"}
    M -->|c| N["Print char from va_arg"] --> D
    M -->|s| O["Print string from va_arg"] --> D
    M -->|%| P["Print '%' and space if set"] --> D
    M -->|d or i| Q["Print integer with flags"] --> D
    M -->|b| R["Print binary from va_arg"] --> D
    M -->|u| S["Print unsigned int with flags"] --> D
    M -->|o| T["Print octal with flags"] --> D
    M -->|x| U["Print hex lowercase with flags"] --> D
    M -->|X| V["Print hex uppercase with flags"] --> D
    M -->|S| W["Print escaped string"] --> D
    M -->|p| X["Print pointer"] --> D
    M -->|Other| Y["Print char with flags manually"] --> D

    D --> Z{"End of format string?"}
    Z -->|Yes| AA["va_end"] --> AB["Return total count_chars"]
    Z -->|No| D
