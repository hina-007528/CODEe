#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int score = 0;
    char answer;
    string name;

    cout << "Welcome to the Unique Human Nature Quiz!\n";
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Hello, " << name << "! Let's explore what makes you unique.\n\n";

    // List of questions and answers
    vector<string> questions = {
        "How do you prefer to express yourself?\n a) Writing\n b) Art\n c) Speaking\n d) Actions\n",
        "In a group, do you tend to:\n a) Lead\n b) Follow\n c) Observe\n d) Challenge ideas\n",
        "How do you handle criticism?\n a) I get defensive\n b) I reflect on it\n c) I ignore it\n d) I embrace it\n",
        "Do you enjoy routines or spontaneity?\n a) Routines\n b) A mix\n c) Spontaneity\n d) I dislike both\n",
        "What do you think about societal norms?\n a) They are essential\n b) They can be helpful\n c) They are restrictive\n d) I challenge them\n",
        "When making decisions, do you rely on:\n a) Logic\n b) Emotion\n c) Intuition\n d) Experience\n",
        "How do you react to change?\n a) Resist it\n b) Adapt easily\n c) Feel anxious\n d) Embrace it\n",
        "What inspires you most?\n a) Nature\n b) People\n c) Art\n d) Knowledge\n",
        "How do you define success?\n a) Wealth\n b) Happiness\n c) Knowledge\n d) Making an impact\n",
        "How do you view failure?\n a) As the end\n b) As a learning opportunity\n c) As something to fear\n d) As a stepping stone\n"
    };

    // Scoring system based on user choices
    vector<vector<int>> scoring = {
        {5, 4, 3, 2},
        {5, 2, 3, 4},
        {1, 4, 2, 5},
        {3, 4, 5, 1},
        {2, 4, 5, 3},
        {4, 5, 3, 2},
        {1, 5, 2, 4},
        {4, 5, 3, 2},
        {2, 5, 4, 3},
        {1, 4, 2, 5}
    };

    // Main loop for the quiz
    for (int i = 0; i < questions.size(); ++i) {
        cout << "Question " << (i + 1) << ": " << questions[i];
        cin >> answer;

        // Validate answer
        if (answer < 'a' || answer > 'd') {
            cout << "Invalid answer, please choose a, b, c, or d.\n";
            --i; // Repeat the question
            continue;
        }

        // Calculate score based on the answer
        int index = answer - 'a';
        score += scoring[i][index];
        
        // Provide additional feedback based on the answer
        switch (i) {
            case 0:
                cout << (index == 0 ? "Writing is a powerful form of expression!\n" :
                           index == 1 ? "Art conveys emotions beautifully!\n" :
                           index == 2 ? "Speaking is a direct way to share thoughts!\n" :
                           "Actions often speak louder than words!\n");
                break;
            case 1:
                cout << (index == 0 ? "Leaders often inspire others!\n" :
                           index == 1 ? "Following can also show strength in unity!\n" :
                           index == 2 ? "Observers have a unique perspective!\n" :
                           "Challenging ideas leads to growth!\n");
                break;
            case 2:
                cout << (index == 0 ? "Defensiveness can be a natural reaction.\n" :
                           index == 1 ? "Reflection is a sign of maturity!\n" :
                           index == 2 ? "Ignoring criticism may hinder growth.\n" :
                           "Embracing criticism can lead to improvement!\n");
                break;
            case 3:
                cout << (index == 0 ? "Routines provide stability!\n" :
                           index == 1 ? "A mix offers flexibility!\n" :
                           index == 2 ? "Spontaneity can lead to adventure!\n" :
                           "Disliking both may lead to a unique path!\n");
                break;
            case 4:
                cout << (index == 0 ? "Essential norms create order.\n" :
                           index == 1 ? "Helpful norms can guide us!\n" :
                           index == 2 ? "Restrictive norms may stifle creativity.\n" :
                           "Challenging norms leads to progress!\n");
                break;
            case 5:
                cout << (index == 0 ? "Logic provides clarity in decisions.\n" :
                           index == 1 ? "Emotion adds depth to choices!\n" :
                           index == 2 ? "Intuition is a powerful guide!\n" :
                           "Experience shapes our decisions over time.\n");
                break;
            case 6:
                cout << (index == 0 ? "Resistance can hinder progress.\n" :
                           index == 1 ? "Adapting is a valuable skill!\n" :
                           index == 2 ? "Feeling anxious is natural during change.\n" :
                           "Embracing change leads to growth!\n");
                break;
            case 7:
                cout << (index == 0 ? "Nature offers endless inspiration!\n" :
                           index == 1 ? "People can be a source of motivation!\n" :
                           index == 2 ? "Art inspires us in unique ways!\n" :
                           "Knowledge fuels our curiosity!\n");
                break;
            case 8:
                cout << (index == 0 ? "Wealth isn't the only measure of success.\n" :
                           index == 1 ? "Happiness is a fulfilling goal!\n" :
                           index == 2 ? "Knowledge empowers us!\n" :
                           "Making an impact leaves a legacy!\n");
                break;
            case 9:
                cout << (index == 0 ? "Viewing failure as the end limits growth.\n" :
                           index == 1 ? "Learning from failure is key!\n" :
                           index == 2 ? "Fearing failure can hold you back.\n" :
                           "Using failure as a stepping stone is wise!\n");
                break;
        }
        cout << "Your current score: " << score << "\n\n";
    }

    // Final score evaluation
    cout << "Thank you for completing the quiz, " << name << "!\n";
    cout << "Your total score: " << score << "\n";

    // Final feedback based on the total score
    if (score < 15) {
        cout << "You may align closely with conventional views.\n";
    } else if (score < 30) {
        cout << "You show some uniqueness but still value common traits.\n";
    } else if (score < 40) {
        cout << "You have a good mix of uniqueness and traditional values!\n";
    } else {
        cout << "You embrace your uniqueness and stand out in many ways!\n";
    }

    return 0;
}
