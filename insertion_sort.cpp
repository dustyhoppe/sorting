
void insertion_sort(int *items, int size)
{
    for(int i = 0; i < size; i++)
    {
        int temp = items[i];
        int j = i;

        while(j > 0 && temp < items[j - 1])
        {
            items[j] = items[j - 1];
            j = j - 1;
        }

        items[j] = temp;
    }
}