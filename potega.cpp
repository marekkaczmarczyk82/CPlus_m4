#include <iostream>

	using namespace std;

		long potega( int stopien, long liczba );

			int main()
			{
				cout << "Program oblicza potegi liczb calkowitych z zadanego przedzialu \n\n";
				cout << "Podaj poczatek przedzialu : ";

				int pocz;
				cin >> pocz;

				cout << "Podaj koniec przedzialu : ";
				int koniec;
				cin >> koniec;

				for( int i = pocz; i <= koniec; ++i )
				{
					cout << i << "\tDO KWADRATU = " << potega( 2, i ) << "\tDO SZESCIANU = " << potega( i,3 ) <<  endl;
				}



			}


				long potega( int stopien, long liczba )
				{
					long wynik = liczba;

						for( int s = 1; s < stopien; ++s )
						{
							wynik = wynik * liczba;
						}
					return wynik;


				}
