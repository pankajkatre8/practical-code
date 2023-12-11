def selection_sort(arr):
    n = len(arr)

    for i in range(n):
        min_index = i

        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j

        arr[i], arr[min_index] = arr[min_index], arr[i]

def bubble_sort(arr):
    n = len(arr)

    for i in range(n):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

def display_top_five(arr):
    print("Top five scores:")
    for i in range(min(5, len(arr))):
        print(f"Rank {i + 1}: {arr[-(i + 1)]}")

# Input: First-year percentage of students
num_students = int(input("Enter the number of students: "))
percentages = []

for i in range(num_students):
    percentage = float(input(f"Enter the first-year percentage of student {i + 1}: "))
    percentages.append(percentage)

# Copy the original array for sorting using different algorithms
arr_selection_sort = percentages.copy()
arr_bubble_sort = percentages.copy()

# Sorting using Selection Sort
selection_sort(arr_selection_sort)
print("Sorted array using Selection Sort:", arr_selection_sort)
display_top_five(arr_selection_sort)

# Sorting using Bubble Sort
bubble_sort(arr_bubble_sort)
print("Sorted array using Bubble Sort:", arr_bubble_sort)
display_top_five(arr_bubble_sort)
