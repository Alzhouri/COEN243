

merge_sort(array , start, end)
    if (start < end)
	{   // divide the array into two subarrays.
        mid ← (start + end) / 2
        merge_sort(array, start, mid)
        merge_sort(array, mid + 1, end)

        merge(array, start, mid, end)
     }
end function


merge(array , start : first element of first subarray, mid : last element of first subarray, end : last element of second subarray)
    
    temp : temporary array of size (end - start + 1)
    
    i ← start
    j ← mid + 1
    k ← 0
    
    while i <= mid and j <= end // find the smallest element and save it in array temp.
        if array[i] < array[j]
            temp[k] ← array[i]
            i ← i + 1
        else
            temp[k] ← array[j]
            j ← j + 1
        end if
        k ← k + 1
    end while
    
    while i <= mid  // copy the rest of left subarray.
        temp[k] ← array[i]
        i ← i + 1
        k ← k + 1
    end while
    
    while j <= end  // copy the rest of right subarray.
        temp[k] ← array[j]
        j ← j + 1
        k ← k + 1
    end while
    
    Copy elements of temp back into array
    
end procedure