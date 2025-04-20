#include <iostream>
using namespace std;

class Element {
public:
    int i, j, x;
};

class Sparse {
private:
    int m, n, num, maxSize;
    Element* ele;
public:
    Sparse(int rows, int cols, int nonZero) : m(rows), n(cols), num(nonZero), maxSize(nonZero) {
        ele = new Element[maxSize];
    }

    ~Sparse() {
        delete[] ele;
    }

    void create() {
        cout << "Enter non-zero elements:" << endl;
        for (int i = 0; i < num; i++) {
            cout << "Row, Column, Value: ";
            cin >> ele[i].i >> ele[i].j >> ele[i].x;
        }
    }

    void display() {
        int k = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == ele[k].i && j == ele[k].j) {
                    cout << ele[k].x << " ";
                    k++;
                } else {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }

    Sparse* add(Sparse &s) {
        if (m != s.m || n != s.n) {
            cout << "Matrices have different dimensions. Addition not possible." << endl;
            return nullptr;
        }

        Sparse *sum = new Sparse(m, n, num + s.num);
        int i = 0, j = 0, k = 0;

        while (i < num && j < s.num) {
            if (ele[i].i < s.ele[j].i) {
                sum->ele[k++] = ele[i++];
            } else if (ele[i].i > s.ele[j].i) {
                sum->ele[k++] = s.ele[j++];
            } else {
                if (ele[i].j < s.ele[j].j) {
                    sum->ele[k++] = ele[i++];
                } else if (ele[i].j > s.ele[j].j) {
                    sum->ele[k++] = s.ele[j++];
                } else {
                    sum->ele[k] = ele[i];
                    sum->ele[k++].x = ele[i++].x + s.ele[j++].x;
                }
            }
        }

        for (; i < num; i++) {
            sum->ele[k++] = ele[i];
        }

        for (; j < s.num; j++) {
            sum->ele[k++] = s.ele[j];
        }

        sum->num = k;
        return sum;
    }
};

int main() {
    Sparse s1(3, 3, 3), s2(3, 3, 3);

    cout << "Enter elements for first matrix:" << endl;
    s1.create();
    cout << "Enter elements for second matrix:" << endl;
    s2.create();

    Sparse *s3 = s1.add(s2);

    if (s3) {
        cout << "First Matrix:" << endl;
        s1.display();
        cout << "Second Matrix:" << endl;
        s2.display();
        cout << "Sum Matrix:" << endl;
        s3->display();
        delete s3;
    }

    return 0;
}
