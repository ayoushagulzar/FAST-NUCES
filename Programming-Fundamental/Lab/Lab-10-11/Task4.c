// Write a program that use a structure to hold information about movies, such as title, genre,
// director, release year, and rating. Write a program that allows users to add new movies, 
// search for movies by genre, and display all movie details. 

#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 100
#define MAX_LENGTH 50

typedef struct
{
    char title[MAX_LENGTH];
    char genre[MAX_LENGTH];
    char director[MAX_LENGTH];
    int release_year;
    float rating;
} movie_info;

void addMovies(movie_info movies[], int *count)
{
    if (*count >= MAX_MOVIES)
    {
        printf("Movies list is full!\n");
        return;
    }

    printf("Enter the title of movie: ");
    fgets(movies[*count].title, MAX_LENGTH, stdin);
    movies[*count].title[strcspn(movies[*count].title, "\n")] = '\0';

    printf("Enter the genre of movie: ");
    fgets(movies[*count].genre, MAX_LENGTH, stdin);
    movies[*count].genre[strcspn(movies[*count].genre, "\n")] = '\0';

    printf("Enter the name of the director of movie: ");
    fgets(movies[*count].director, MAX_LENGTH, stdin);
    movies[*count].director[strcspn(movies[*count].director, "\n")] = '\0';

    printf("Enter the release year of movie: ");
    scanf("%d", &movies[*count].release_year);
    getchar();

    printf("Enter the rating of movie(out of 5): ");
    scanf("%f", &movies[*count].rating);
    getchar();

    (*count)++;
    printf("Movie added successfully!\n");
}

void searchByGenre(movie_info movies[], int count)
{
    if (count == 0)
    {
        printf("No movie available!\n");
        return;
    }

    char search[MAX_LENGTH];
    printf("Enter the genre of the movie you want to search: ");
    fgets(search, MAX_LENGTH, stdin);
    search[strcspn(search, "\n")] = '\0';

    int found = 0;
    printf("\nMovies in genre % s:\n", search);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(search, movies[i].genre) == 0)
        {
            printf("0%d.%s\n", i + 1, movies[i].title);
            found = 1;
        }
    }
    if (!found)
    {
        printf("No movies found in this genre!\n");
    }
}

void displayAllMovies(movie_info movies[], int count)
{
    if (count == 0)
    {
        printf("No movies available!\n");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        printf("\n====Movie %d details====\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Director: %s\n", movies[i].director);
        printf("Release Year: %d\n", movies[i].release_year);
        printf("Rating: %.2f\n", movies[i].rating);
    }
}

int main()
{
    movie_info MOVIES[MAX_MOVIES];
    int movieCount = 0;
    int choice;

    do
    {
        printf("\n=== Movie Management Menu ===\n");
        printf("1. Add Movie\n");
        printf("2. Search Movies by Genre\n");
        printf("3. Display All Movies\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            addMovies(MOVIES, &movieCount);
            break;
        case 2:
            searchByGenre(MOVIES, movieCount);
            break;
        case 3:
            displayAllMovies(MOVIES, movieCount);
            break;
        case 4:
            printf("Exiting the system!\n");
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    } while (choice != 4);

    return 0;
}
