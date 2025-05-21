    ```mermaid
    flowchart TD
        A[User Input] --> B[Call add(a, b)]
        B --> C[Print Result]
        C --> D{Continue?}
        D -- Yes --> A
        D -- No --> E[End]
    ```
