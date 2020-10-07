const getAnswersCount = (answers, student) =>
    answers.filter((ans, index) => ans === student[index % student.length]).length;

function solution(answers) {
    const answer = [];
    
    const s1 = [1, 2, 3, 4, 5];
    const s2 = [2, 1, 2, 3, 2, 4, 2, 5];
    const s3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5];
    
    const s1Arr = getAnswersCount(answers, s1);
    const s2Arr = getAnswersCount(answers, s2);
    const s3Arr = getAnswersCount(answers, s3);
    
    const max = Math.max(s1Arr, s2Arr, s3Arr);
    
    max === s1Arr && answer.push(1);
    max === s2Arr && answer.push(2);
    max === s3Arr && answer.push(3);
    
    return answer;
}