
int largest(n,arr){
    int largest = arr[0]
    for(i=0;i<arr.size();i++)
        if (arr[i]>largest){
            largest = arr[i]
            print("Largest :",largest) 
            if (arr[i+1]>largest && arr[i+1]<arr[i] && arr[i+1]!=largest)
                second_largest = arr[i+1]
                print("Second Largest is",second_largest)
                }
        else{
            largest = arr[0]
            return largest
        }
}                
int  show_array(n,arr){
        for(i=0;i<=n;i++){
            cin >> arr[i]
        }
int main()
{
    int n, arr = []
    cout <<"Enter the range of the array :");
    cin >> n;
    show_array(n,arr);
    largest(n,arr);
    return 0;
}