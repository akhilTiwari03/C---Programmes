#include <iostream>
using namespace std;
int Merge(int *a1, int *a2, int n1, int n2, int *ans)
{
    int k = 0;
    for (int i = 0, j = 0; i < n1 || j < n2;)
    {
        if (i < n1 && j < n2 && a1[i] < a2[j])
        {
            ans[k] = a1[i];
            k++;
            i++;
        }
        if (i < n1 && j < n2 && a1[i] > a2[j])
        {
            ans[k] = a2[j];
            k++;
            j++;
        }
        else if (i < n1)
        {
            ans[k] = a1[i];
            k++;
            i++;
        }
        else if (j < n2)
        {
            ans[k] = a2[j];
            k++;
            j++;
        }
    }
    return k;
}
int main()
{
    int n1;
    cin >> n1;
    int a1[100];
    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }
    int n2;
    cin >> n2;
    int a2[100];
    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }
    int ans[200];
    int n3 = Merge(a1, a2, n1, n2, ans);
    cout << "After Merging 2 Sorted Arrays , Final Array is : \n";
    for (int i = 0; i < n3; i++)
    {
        cout << ans[i] << " ";
    }
}