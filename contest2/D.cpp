#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll c = 0, n, v[200005];

void merge(ll arr[], ll l, ll m, ll r) 
{ 
    ll i, j, k; 
    ll n1 = m - l + 1; 
    ll n2 =  r - m; 
  
    ll L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++;
            c += n1-i;
        } 
        k++; 
    } 
    while (i < n1) { 
        arr[k] = L[i]; 
        i++;
        k++;
    } 
  
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void mergeSort(ll arr[], ll l, ll r) 
{ 
    if (l < r) { 
        ll m = l+(r-l)/2; 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
}

int main() {
    ll m;
    scanf("%lld", &m);

    for(ll j = 1; j <= m; j++) {

        c = 0;

        scanf("%lld", &n);

        for(ll i = 0; i < n; i++) {  
            scanf("%lld", &v[i]);
        }

        mergeSort(v, 0, n - 1); 

        printf("%lld\n", c);

    }
    return 0;
}