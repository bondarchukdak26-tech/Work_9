#include <iostream>
using namespace std;

int main()
{
    //Task 1

    int M, N;
    double a[100][100];
    double sum[100];
    cout << "\tTask 1 \n" << endl;
    cout << "========================================\n";
    cout << "       COMPANY PROFIT CALCULATION       \n";
    cout << "========================================\n\n";

    cout << "Enter number of companies : ";
    cin >> M;
    cout << "Enter number of months : ";
    cin >> N;
    cout << "\nEnter profit for each company by month :\n\n";

    for (int i = 0; i < M; i++) {
        cout << "Company " << i + 1 << ": ";

        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\n========================================\n";
    cout << "              PROFIT TABLE              \n";
    cout << "========================================\n\n";

    cout << "Company       ";

    for (int j = 0; j < N; j++) {
        cout << "Month " << j + 1 << "       ";
    }

    cout << endl;

    for (int i = 0; i < M; i++) {
        cout << "Company " << i + 1 << "    ";

        for (int j = 0; j < N; j++) {
            cout << a[i][j] << "             ";
        }

        cout << endl;
    }

    for (int j = 0; j < N; j++) {
        sum[j] = 0;

        for (int i = 0; i < M; i++) {
            sum[j] += a[i][j];
        }
    }

    cout << "\n========================================\n";
    cout << "         TOTAL PROFIT BY MONTH          \n";
    cout << "========================================\n";

    for (int j = 0; j < N; j++) {
        cout << "Month " << j + 1 << ": " << sum[j] << endl;
    }

    cout << "========================================\n";



    //Task 2

    int buildings, floors, rooms;
    int hotel[10][10][20];
    int n, m;
    int emptyRooms = 0;

    cout << "\n\n\tTask 2 \n" << endl;
    cout << "========================================\n";
    cout << "          HOTEL ROOM INFORMATION        \n";
    cout << "========================================\n\n";

    cout << "Enter number of buildings : ";
    cin >> buildings;

    cout << "Enter number of floors : ";
    cin >> floors;

    cout << "Enter number of rooms : ";
    cin >> rooms;

    cout << "\nEnter number of people in each room :\n\n";

    for (int i = 0; i < buildings; i++) {
        cout << "Building " << i + 1 << ":\n";

        for (int j = 0; j < floors; j++) {
            cout << "Floor " << j + 1 << ": ";

            for (int k = 0; k < rooms; k++) {
                cin >> hotel[i][j][k];
            }
        }
    }

    cout << "\n========================================\n";
    cout << "             HOTEL INFORMATION          \n";
    cout << "========================================\n";

    for (int i = 0; i < buildings; i++) {
        cout << "Building " << i + 1 << ":\n";

        for (int j = 0; j < floors; j++) {
            cout << "Floor " << j + 1 << ": ";

            for (int k = 0; k < rooms; k++) {
                cout << hotel[i][j][k] << " ";
            }

            cout << endl;
        }

        cout << endl;
    }

    cout << "Enter building number : ";
    cin >> n;

    cout << "Enter floor number : ";
    cin >> m;

    for (int k = 0; k < rooms; k++) {
        if (hotel[n - 1][m - 1][k] == 0) {
            emptyRooms++;
        }
    }

    cout << "\n========================================\n";
    cout << "             CALCULATION RESULT         \n";
    cout << "========================================\n";

    cout << "Empty rooms in building " << n
        << " on floor " << m << ": "
        << emptyRooms << endl;

    cout << "========================================\n";

}