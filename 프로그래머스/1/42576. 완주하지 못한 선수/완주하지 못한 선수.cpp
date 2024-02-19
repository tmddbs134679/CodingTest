#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> participants;
    
    // 참가자 목록을 map에 추가
    for(const string& name : participant) {
        participants[name]++;
    }
    
    // 완주자 목록에서 완주한 선수들의 값을 감소시킴
    for(const string& name : completion) {
        participants[name]--;
    }
    
    // 남은 선수 중 값이 1인 선수가 완주하지 못한 선수
    string result = "";
    for(const auto& pair : participants) {
        if(pair.second > 0) {
            result = pair.first;
            break;
        }
    }
    
    return result;
}