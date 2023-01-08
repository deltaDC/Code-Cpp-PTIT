#include <bits/stdc++.h>
using namespace std;

#define lim 1000005
#define MOD 1000000007
#define ll long long

#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define testcase() int t; cin >> t; while(t--)

int cnt = 0, cnt2 = 0, cnt3 = 0;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang
{
	public:
		string code, name, sex, dob, adr;
		friend class HoaDon;
		friend istream &operator >> (istream &in, KhachHang &a)
		{
			cnt++;
			//in.ignore();
			scanf("\n");
			a.code = "KH";
			if(cnt < 10) a.code += "00" + to_string(cnt);
			else if(cnt >= 10 && cnt < 100) a.code += "0" + to_string(cnt);
			else a.code += to_string(cnt);
			getline(in, a.name);
			getline(in, a.sex);
			getline(in, a.dob);
			getline(in, a.adr);
			KH[a.code] = a;
			return in;
		}
};

class MatHang
{
	public:
		string ma, ten, donvi;
		ll giamua, giaban;
		friend class HoaDon;
		friend istream &operator >> (istream &in, MatHang &a)
		{
			cnt2++;
			//in.ignore();
			scanf("\n");
			a.ma = "MH";
			if(cnt2 < 10) a.ma += "00" + to_string(cnt2);
			else if(cnt2 >= 10 && cnt2 < 100) a.ma += "0" + to_string(cnt2);
			else a.ma += to_string(cnt2);
			getline(in, a.ten);
			getline(in, a.donvi);
			cin >> a.giamua >> a.giaban;
			MH[a.ma] = a;
			return in;	
		}
};

class HoaDon
{
	public:
		string maHD, maKH, maMH;
		int slg;
		
		friend istream &operator >> (istream &in, HoaDon &a)
		{
			cnt3++;
			a.maHD = "HD";
			if(cnt3 < 10) a.maHD += "00" + to_string(cnt3);
			else if(cnt3 >= 10 && cnt3< 100) a.maHD += "0" + to_string(cnt3);
			else a.maHD += to_string(cnt3);
			cin >> a.maKH >> a.maMH >> a.slg;
			return in;
		}
		
		friend ostream &operator << (ostream &out, HoaDon a)
		{
			out << a.maHD << " " << KH[a.maKH].name << " " << KH[a.maKH].adr << " " << MH[a.maMH].ten
			<< " " << MH[a.maMH].donvi << " " << MH[a.maMH].giamua << " " << MH[a.maMH].giaban << " " << a.slg
			<< " " << MH[a.maMH].giaban * a.slg << endl;
			return out;
		}
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
 






