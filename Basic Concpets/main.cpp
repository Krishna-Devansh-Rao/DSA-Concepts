
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5};;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0;i < n ;i++){
//         cout << arr[i];
//     }
// }

// //vector
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> mark = {92, 92, 94};
//     for(int i = 0; i < mark.size(); i++) {
//         cout << mark[i] << " ";
//     }
//     cout << endl;
// }

// // pair
// #include <iostream>
// #include <utility>
// using namespace std;
// int main() {
//     pair<string, int> student = {"Krishna", 95};
//     cout << "Name: " << student.first << endl;
//     cout << "Marks: " << student.second << endl;
// }

//tuple
// #include <iostream>
// #include <tuple>
// using namespace std;
// int main() {
//     tuple<int, string, double> student = {101, "Krishna", 95.5};
//     cout << get<0>(student) << endl;
//     cout << get<1>(student) << endl;
//     cout << get<2>(student) << endl;
// }


//map
// #include <iostream>
// #include <unordered_map>
// using namespace std;
// int main() {
//     int arr[] = {2, 3, 2, 5, 2, 3};
//     unordered_map<int, int> freq;
//     for(int x : arr) {
//         freq[x]++;
//     }
//     cout << "2 appears: " << freq[2] << " times" << endl;
//     cout << "3 appears: " << freq[3] << " times" << endl;
// }

// set
// #include <iostream>
// #include <set>
// using namespace std;
// int main() {
//     set<int> nums = {5, 2, 5, 1, 2};
//     for(int x : nums) {
//         cout << x << " ";
//     }
// }


// // Stack
// #include <iostream>
// #include <stack>
// using namespace std;
// int main() {
//     stack<int> plates;
//     plates.push(10);
//     plates.push(20);
//     plates.push(30);
//     cout << "Top: " << plates.top() << endl;
//     plates.pop();
//     cout << "After pop: " << plates.top() << endl;
// }


// // Queue
// #include <iostream>
// #include <queue>
// using namespace std;
// int main() {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     cout << "Front: " << q.front() << endl;
//     q.pop();
//     cout << "New Front: " << q.front() << endl;
// }


// // Dequeu
// #include <iostream>
// #include <deque>
// using namespace std;
// int main() {
//     deque<int> d;
//     d.push_back(20);
//     d.push_front(10);
//     d.push_back(30);
//     for(int x : d) {
//         cout << x << " ";
//     }
// }


// // Priority queue
// #include <iostream>
// #include <queue>
// using namespace std;
// int main() {
//     priority_queue<int> pq;
//     pq.push(10);
//     pq.push(30);
//     pq.push(20);
//     cout << "Highest: " << pq.top() << endl;
//     pq.pop();
//     cout << "Next Highest: " << pq.top() << endl;
// }

// Sorting
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> marks = {72, 95, 81, 90};
//     sort(marks.begin(), marks.end());
//     for(int x : marks) {
//         cout << x << " ";
//     }
// }











