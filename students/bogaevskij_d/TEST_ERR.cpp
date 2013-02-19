/*       ������ ��������� �� �++
      �������� �������� ���� �������
  ( Location: ������� �� ������
    Point: ����������� ����� � ����������� ������ )
   � ������� ������������� �������-������ �������.*/


#include <conio.h>
#include <iostream.h>
using namespace std;

// ��������  ������ Location: ������� �� ������ 
class Location {
     private:		// ������ ��� �������-������, �������������
	int X; int Y;   // �������
     public:            // �������� ������
	Location (int InitX, int InitY); // �����������
	int GetX();
	int GetY();
 };
// ��������  ������ Point: ����������� ����� � ����������� ������ 
class Point: public Location { /* ����� Point - ����������� �� ��������
 ������ Location ������������ public ������������ ������������
������� ��� public � X,Y ��� protected */
     protected:          // ������ ��� �������-������, �������������
	bool Visible; // ������� � � ����������� �������
     public:
	Point (int InitX, int InitY);  // �����������
	void Show();			 // ������� ����� ������� 
	void Hide();             // ������� ����� ���������
	void Point::PrintPoint();  // ����� ���������
	bool IsVisible();     // �������� ���������
	void MoveTo (int NewX, int NewY); // �������� ���������� 
};
// ����������� �������-������ ������ Location
Location::Location (int InitX, int InitY)
       { X = InitX; Y = InitY; };
int Location::GetX(void)
       { return X; };
int Location::GetY(void)
       { return Y; };

// ����������� �������-������ ������ Point
Point::Point(int InitX, int InitY):Location ( InitX, InitY)
       { Visible = false; }; /* ����������� Point
      �������� ����������� Location � �������� ����� ��� ��������� */
void Point::PrintPoint(void)
       { if (Visible)			
		   cout << "\n ���������� �����: X = " << X << ", Y = " << Y << endl;/* ������� �����*/ 
	     else
			 cout << "\n ���������� ����� �������� " << endl;
		   };
void Point::Show(void)
       { Visible = true; /* ��������� ����� ��������� */ }
void Point::Hide(void)
       { Visible = false; /* ��������� ����� ��������� */ }
bool Point::IsVisible(void)
       { return Visible; };
void Point::MoveTo (int NewX, int NewY) //�������� ���������� 


//                  �������� ���������
int main()
{
 
//   ������ ������� � ��������� ������

    int a;
    cout << " ������! \n "
	 << " ������� ����� ����� ����� ";
    cin >> a;
    cout << "\n ������� �� " << a << endl;
    getch();
//

//  ������ � �������
    Point APoint;          // ������� ����� APoint � BPoint
    Point BPoint(100,50);  // � ������� ������������ ������ Point
    APoint.PrintPoint();	// ����� APoint
	BPoint.PrintPoint();	// ����� BPoint
	 _getch();               // ����� ������� �������
	BPoint.Show();         // ���������� ������ ����� BPoint
	BPoint.PrintPoint();	// ����� BPoint
    _getch();               // ����� ������� �������
    BPoint.MoveTo(300,150); // ����������� ����� �Point
	BPoint.Show();         // ���������� ������ ����� APoint
	BPoint.PrintPoint();	// ����� BPoint
    _getch();
    APoint.Hide();         // ������� ���������� �����
    BPoint.Hide();         // APoint �  BPoint
    _getch();
// �����
   
    return 0;
}
