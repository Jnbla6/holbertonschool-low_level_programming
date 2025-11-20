```mermaid
flowchart TD
    A[_printf Start] --> B{Format string valid?}
    B -- No --> C[Return -1]
    B -- Yes --> D[Initialize va_list]
    D --> E[Loop over format[]]
    E --> F{format[i] == '%'?}
    F -- No --> G[_putchar(format[i])]
    F -- Yes --> H[handle_specifier()]
    G --> I[Add char to buffer]
    H --> I
    I --> J{Buffer full?}
    J -- Yes --> K[flush()]
    J -- No --> L[Continue loop]
    K --> L
    L --> M{End of format?}
    M -- No --> E
    M -- Yes --> N[flush()]
    N --> O[va_end(cart)]
    O --> P[Return total_count]
