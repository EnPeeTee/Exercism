#include <array>
#include <string>
#include <vector>
#include <cmath>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> result;
    for(auto score : student_scores){
        result.push_back(score);
    }
    return result;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int failStuds = 0;
    for(auto score : student_scores){
        if(score <= 40){ 
            failStuds += 1; 
        }
    }
    return failStuds;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> grades;
    for(int i = 1 ; i <= 4 ; i++){
        grades[4 - i] = ceil(highest_score - (i * ((highest_score - 40.1) / 4)));
    }       
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> leaderboard;
    for(int i = 0; i < student_scores.size(); i++){
        std::string score = std::to_string(student_scores[i]);
        std::string rank = std::to_string(i+1);
        std::string stats = rank + ". " + student_names[i] + ": " + score;
        leaderboard.push_back(stats);
    }
    return leaderboard;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    std::string perfectStud = "";
    for(int i = 0; i < student_scores.size(); i++){
        if(student_scores[i] == 100) {
            perfectStud = student_names[i];
            break;
        } 
    }
    return perfectStud;
}
