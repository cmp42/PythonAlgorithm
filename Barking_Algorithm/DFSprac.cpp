#include <bits/stdc++.h>
using namespace std;

# define X first
# define Y second

int		board[502][502];
bool	dist[502][502];

int	n,m;
int dx[4] = {1, 0, -1, 0};
int	dy[4] = {0, 1, 0, -1};

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	stack<pair<int,int> > S;
	dist[0][0] = 1;
	S.push(make_pair(0,0));

	while (!S.empty())
	{
		pair<int,int> cur = S.top();
		S.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (dist[nx][ny] || board[nx][ny] != 1) continue;
			dist[nx][ny] = 1;
			S.push(make_pair(nx,ny));
		}
	}
	return (0);
}