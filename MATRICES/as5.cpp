#include <iostream>

using namespace std;

class Element {
public:
    int i;
    int j;
    int x;
};

class Sparse {
public:
    int m;
    int n;
    int num;
    Element *ele;

    Sparse() {
        m = n = num = 0;
        ele = nullptr;
    }

    void create() {
        int i;
        cout << "Enter Dimensions: ";
        cin >> m >> n;
        cout << "Number of non-zero elements: ";
        cin >> num;

        ele = new Element[num];
        cout << "Enter non-zero elements (i, j, x):" << endl;
        for (i = 0; i < num; i++)
            cin >> ele[i].i >> ele[i].j >> ele[i].x;
    }

    void display() {
        int k = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == ele[k].i && j == ele[k].j)
                    cout << ele[k++].x << " ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
    }

    Sparse* add(Sparse* s2) {
        Sparse* sum = new Sparse();
        int i = 0, j = 0, k = 0;

        if (n != s2->n || m != s2->m) {
            cout << "Matrix dimensions don't match, addition not possible." << endl;
            return nullptr;
        }

        sum->m = m;
        sum->n = n;
        sum->num = 0;
        sum->ele = new Element[num + s2->num];

        while (i < num && j < s2->num) {
            if (ele[i].i < s2->ele[j].i)
                sum->ele[k++] = ele[i++];
            else if (ele[i].i > s2->ele[j].i)
                sum->ele[k++] = s2->ele[j++];
            else {
                if (ele[i].j < s2->ele[j].j)
                    sum->ele[k++] = ele[i++];
                else if (ele[i].j > s2->ele[j].j)
                    sum->ele[k++] = s2->ele[j++];
                else {
                    sum->ele[k] = ele[i];
                    sum->ele[k++].x = ele[i++].x + s2->ele[j++].x;
                }
            }
        }
        for (; i < num; i++) sum->ele[k++] = ele[i];
        for (; j < s2->num; j++) sum->ele[k++] = s2->ele[j];
        sum->num = k;

        return sum;
    }

    ~Sparse() {
        delete [] ele;
    }
};

int main() {
    Sparse s1, s2, *s3;

    s1.create();
    s2.create();

    s3 = s1.add(&s2);

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
