int find_x(int array[],int length, int x)
{
    for(int i = 0; i < length;++i)
    {
        if(x == array[i]){
            return i;
        }
    }
}