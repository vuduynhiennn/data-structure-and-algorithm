#include <iostream>
using namespace std;

int main() {
    cout << "*******nhap mang 2 chieu********** " << endl;
    int m, n;
    cout << "arr[m][n], nhap m: ";
    cin >> m;
    cout << "arr[m][n], nhap n: ";
    cin >> n;
    int arr[m][n];
    // "********Nhập mảng 2 chiều*******";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "**********xuất mảng 2 chiều*************" << endl;
    // "*********xuất mảng 2 chiều********"
     for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "arr[" << i << "][" << j << "]: " << arr[i][j] << endl; 
        }
    }
    // ******tính tổng các phần tử cùng 1 dòng*******
    cout << "********tong cac phan tu trong mang******" << endl;
    for (int i = 0; i < m; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            count += arr[i][j];
        } 
        cout << "tong cac phan tu dong " << i << " là: " << count << endl;
    }
    
    // *****đếm số lượng số chẵn trong mảng 2 chiều*****
    cout << "****dem so luong so chan trong mang 2 chieu****" << endl;
    int count = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] % 2 == 0) {
                count++;
            }
        }
    }
    cout << "so luong so chan la: " << count << endl;
    //***** Tìm giá trị xuất hiện nhiều nhất trong mảng 2 chiều******
    cout << "*******gia tri xuat hien nhieu nhat trong mang 2 chieu là********" << endl;
    
    int tmp, dem, sll = 0, max;
    

    int arrResult[m * n];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            dem = 0;
            for (int z = 0; z < m; z++) {
                for (int x = 0; x < n; x++) {
                    if(arr[i][j] != tmp) {
                        if (arr[i][j] == arr[z][x]) {
                        dem+=1;
                        }
                    }
                }
            }
        arrResult[sll] = dem;
        sll = sll + 1;
        }

    }
    
    int vtmax = 0;
    for (int i = 0; i < sll; i++) {
        if (arrResult[i] > vtmax) {
            vtmax = i;
        }
    }
    
    int arr3[m * n];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int b = 0; b < (m * n); b++) {
                arr3[b] = arr[i][j];
            } 
        }
    }

    cout << "phan tu co so lan xuat hien nhieu nhat la: " << arr3[vtmax];
    
    return 0;
}