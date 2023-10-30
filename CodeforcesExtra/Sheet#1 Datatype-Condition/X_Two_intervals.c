#include <stdio.h>

// Define a structure to represent an interval
struct Interval {
    int start;
    int end;
};

// Function to find the intersection of two intervals
struct Interval findIntersection(struct Interval a, struct Interval b) {
    struct Interval intersection;

    // Check if there is an intersection
    if (a.start > b.end || b.start > a.end) {
        // No intersection
        intersection.start = -1;
        intersection.end = -1;
    } else {
        // Calculate the intersection
        intersection.start = (a.start > b.start) ? a.start : b.start;
        intersection.end = (a.end < b.end) ? a.end : b.end;
    }

    return intersection;
}

int main() {
    struct Interval interval1, interval2;
    
    // Input the intervals
    printf("Enter the first interval [start, end]: ");
    scanf("%d %d", &interval1.start, &interval1.end);
    printf("Enter the second interval [start, end]: ");
    scanf("%d %d", &interval2.start, &interval2.end);

    // Find the intersection
    struct Interval intersection = findIntersection(interval1, interval2);

    // Output the intersection
    if (intersection.start == -1) {
        printf("No intersection\n");
    } else {
        printf("Intersection: [%d, %d]\n", intersection.start, intersection.end);
    }

    return 0;
}
