#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T,N, temp;
	vector<vector<int>> v;
    T = 10;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N;
		v.clear();
        for(int i = 0 ; i < 100; i++){
            v.push_back(vector<int>());
            for(int j = 0 ; j < 100; j++){
                cin >> temp;
            	v[i].push_back(temp);
            }        
        }
        int sum =0 , answer = 0;
        for(int i = 0 ; i < 100;i++){
            sum = 0;
        	for(int j = 0 ; j < 100; j++)
            {
            	sum += v[i][j];
            }
            if(sum > answer)
                answer = sum;
        }
        for(int i = 0 ; i < 100;i++){
            sum = 0;
        	for(int j = 0 ; j < 100; j++)
            {
            	sum += v[j][i];
            }
            if(sum > answer)
                answer = sum;
        }
        sum = 0;
        for(int i = 0 ; i < 100 ; i++){
        	sum += v[i][i];
        }
        if(sum > answer)
            answer = sum;
        
        sum = 0;
        for(int i = 0 ; i < 100 ; i++){
        	sum += v[i][100-i-1];
        }
        if(sum > answer)
            answer = sum;
        cout << "#" << N  << " " << answer << endl; 
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}