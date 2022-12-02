#include <stdio.h>

int std, top;


void push(int stack s1, int stack s2, int len)
{
    int i = 1;
    while (i <= len) {

        if (s1.size() > 0) {
            s2.push(s1.top());
            s1.pop();
        }

        i++;
    }
}

string compareStacks(int stack s1, int stack s2)
{

    int N = s1.size();


    int M = s2.size();


    if (N != M) {
        return "No";
    }


    for (int i = 1; i <= N; i++) {


        pushElements(s1, s2, N - i);


        int val = s1.top();

        pushElements(s2, s1, 2 * (N - i));


        if (val != s2.top())
            return "No";

        pushElements(s1, s2, N - i);
    }

    return "Yes";
}


int main()
{
    int stack S1, S2;

    S1.push(1);
    S1.push(2);
    S1.push(4);
    S1.push(3);

    S2.push(1);
    S2.push(2);
    S2.push(4);
    S2.push(3);

    printf("%d %d",&S1 &S2 compareStacks(S1, S2));
}
