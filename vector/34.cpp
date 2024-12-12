#include <iostream>
#include <queue>

int curr = 0;
int currq = 0;
int done = 0;
int sumTime = 0;

std::queue<int> q;

void Reset(int x) {
  curr =  x; 
  currq = x - 1;
}

void New(int t) {
  q.push(t);
  std::cout << ">> ticket " << curr << std::endl;
  curr += 1;
}

void Next() {
  currq += 1;
  std::cout << ">> call " << currq << std::endl;
  q.pop();
}

void Order(int t) {
  int qtime = t - q.front();
  sumTime += qtime;
  done += 1;
  std::cout << ">> qtime " << currq << " " << qtime << std::endl; 
}

void AvgQtime() {
  float avgqtime = float(sumTime) / float(done);
  std::cout << ">> avg_qtime " << avgqtime << std::endl;
}

int main(int argc, char const *argv[])
{
  q.push(0);
  int n = 0;
  std::cin >> n;
  while (n--) {
    std::string inp1 = "";
    int temp;
    int inp2 = 0;
    std::cin >> inp1;
    if (inp1 == "reset") {
      std::cin >> temp;
      Reset(temp);
      continue;
    }
    if (inp1 == "new") {
      std::cin >> temp;
      New(temp);
      continue;
    }
    if (inp1 == "next") {
      Next();
      continue;
    }
    if (inp1 == "order") {
      std::cin >> temp;
      Order(temp);
      continue;
    }
    if (inp1 == "avg_qtime") {
      AvgQtime();
      continue;
    }
  }
  return 0;
}
