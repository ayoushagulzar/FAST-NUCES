// Question#01: kya  non-static mathod static field ko access kr skte hen
//Answer: Yes, because static field is globally available to all objects.

// Question#02: union and intersection of two arrays

import java.util.HashSet;
import java.util.Set; //Set is an interface in Java that stores unique elements (no duplicates allowed).

class UnionIntersection {
    public static void main(String[] args) {
        int[] arr1 = {1, 3, 5, 7, 11};
        int[] arr2 = {4, 5, 6, 7, 8};

        // Union
        Set<Integer> union = new HashSet<>();
        for (int num : arr1) union.add(num);
        for (int num : arr2) union.add(num);

        System.out.println("Union: " + union);

        // Intersection
        Set<Integer> set1 = new HashSet<>();
        for (int num : arr1) set1.add(num);

        Set<Integer> intersection = new HashSet<>();
        for (int num : arr2) {
            if (set1.contains(num)) {
                intersection.add(num);
            }
        }

        System.out.println("Intersection: " + intersection);
    }
}