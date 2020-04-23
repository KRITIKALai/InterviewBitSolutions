/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
bool mysort(Interval a, Interval b) {
    return (a.start < b.start);
}
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    intervals.push_back(newInterval);
    
    int n = intervals.size();
    vector<Interval> new_intervals;
    stack<Interval> st;
    
    sort(intervals.begin(), intervals.end(), mysort);
    
    st.push(intervals[0]);
    
    for(int i = 1; i<n; i++){
        
        Interval top = st.top();
        
        if(intervals[i].start > top.end){
            st.push(intervals[i]);
        }
        else if(intervals[i].end > top.end){
            top.end = intervals[i].end;
            st.pop();
            st.push(top);
        }
    }
    
    while(!st.empty()){
        Interval i = st.top();
        new_intervals.push_back(i);
        st.pop();
    }
    
    sort(new_intervals.begin(), new_intervals.end(), mysort);
    
    return new_intervals;
}
