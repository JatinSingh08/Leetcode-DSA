class Solution {
public:


int countDays(vector<int>& ws, int tot_cap, int cur_cap = 0, int res = 1) {
  for (auto w : ws) {
    cur_cap += w;
    if (cur_cap > tot_cap) ++res, cur_cap = w;
  }
  return res;
}
int shipWithinDays(vector<int>& ws, int D) {
  auto r = accumulate(begin(ws), end(ws), 0);
  auto l = max(r / D, *max_element(begin(ws), end(ws)));
  while (l < r) {
    auto m = (l + r) / 2;
    if (countDays(ws, m) <= D) r = m;
    else l = m + 1;
  }
  return l;
}
};