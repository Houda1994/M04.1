Title: CSCI 202 Programming Assignment - State Capitals and Unique Words

Introduction:
This program consists of two parts. The first part reads words from a text file, stores them in a set, and displays all unique words in ascending order. The second part uses a map to store state-capital pairs and allows the user to query the capital city of any state.

Implementation Details:
1. **Nonduplicate Words**: The program reads from a file and uses a set to store words without duplicates. It then displays the words sorted in ascending order.
2. **State and Capital Map**: The program uses a map to store state-capital pairs. The user is prompted to enter a state, and the program displays the capital for that state.

How to Run:
1. Compile the code using a C++ compiler.
2. Run the executable. In the case of the first program, make sure to provide the `input.txt` file in the same directory.
3. For the state-capital program, input the state name when prompted.

CSCI 202 Programming Assignment - State Capitals and Unique Words

Introduction:
This program consists of two parts. The first part reads words from a text file, stores them in a set, and displays all unique words in ascending order. The second part uses a map to store state-capital pairs and allows the user to query the capital city of any state.

Implementation Details:
1. Nonduplicate Words (WordProcessor class):
   - Uses std::set to store unique words
   - Automatically sorts words in ascending order
   - Reads from input.txt file

2. State and Capital Map (StateCapitalManager class):
   - Uses std::map to store state-capital pairs
   - Provides lookup functionality for capital cities
   - Includes error handling for invalid states

How to Run:
1. Ensure you have a C++ compiler installed
2. Place input.txt in the same directory (for word processing)
3. Compile: g++ main.cpp WordProcessor.cpp StateCapitalManager.cpp -o program
4. Run: ./program

UML Class Diagram:
The UML class diagram is provided in diagrams.puml and shows:
1. WordProcessor class with:
   - Private: uniqueWords (set<string>)
   - Public: readFromFile(), displayWords()

2. StateCapitalManager class with:
   - Private: stateCapitalMap (map<string, string>)
   - Public: constructor, addStateCapital(), findCapital(), displayCapital()

Use Case Diagram:
The use case diagram in diagrams.puml shows:
1. Word Processing System:
   - Read words from file
   - Display unique words
   - Sort words

2. State Capital System:
   - Enter state name
   - View capital city
   - Handle invalid state

Note: The actual UML diagrams are implemented in PlantUML format in diagrams.puml
