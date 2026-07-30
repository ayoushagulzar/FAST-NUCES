// Create a structure to manage a sports team and its players. Each team has a name, sport, 
// and an array of players. Each player has a name, age, and position. Implement functions 
// to add players, search by position, and display team details. 

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50
#define MAX_PLAYERS 20

typedef struct
{
    char player_name[MAX_LENGTH];
    char position[MAX_LENGTH];
    int player_age;
} Player;

typedef struct
{
    char team_name[MAX_LENGTH];
    char sport[MAX_LENGTH];
    Player players[MAX_PLAYERS];
    int player_count;
} Team;

void addPlayer(Team *team)
{
    if (team->player_count >= MAX_PLAYERS)
    {
        printf("Players list is full!\n");
        return;
    }

    Player *p = &team->players[team->player_count];

    printf("Enter player's name: ");
    fgets(p->player_name, MAX_LENGTH, stdin);
    p->player_name[strcspn(p->player_name, "\n")] = '\0';

    printf("Enter player's position: ");
    fgets(p->position, MAX_LENGTH, stdin);
    p->position[strcspn(p->position, "\n")] = '\0';

    printf("Enter player's age: ");
    scanf("%d", &p->player_age);
    getchar();

    team->player_count++;
    printf("Player added successfully!\n");
}

void searchByPosition(Team team)
{
    if (team.player_count == 0)
    {
        printf("No players available!\n");
        return;
    }

    char search[MAX_LENGTH];
    printf("Enter the position to search: ");
    fgets(search, MAX_LENGTH, stdin);
    search[strcspn(search, "\n")] = '\0';

    int found = 0;
    printf("\nPlayers in position '%s':\n", search);

    for (int i = 0; i < team.player_count; i++)
    {
        if (strcmp(search, team.players[i].position) == 0)
        {
            printf("- %s\n", team.players[i].player_name);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No players found in this position.\n");
    }
}
void displayTeamDetails(Team team)
{
    printf("\n===== TEAM DETAILS =====\n");
    printf("Team Name: %s\n", team.team_name);
    printf("Sport: %s\n", team.sport);
    printf("Total Players: %d\n", team.player_count);

    printf("\n--- Player List ---\n");
    for (int i = 0; i < team.player_count; i++)
    {
        printf("\nPlayer %d:\n", i + 1);
        printf("Name: %s\n", team.players[i].player_name);
        printf("Age: %d\n", team.players[i].player_age);
        printf("Position: %s\n", team.players[i].position);
    }
}
int main()
{
    Team team;
    team.player_count = 0;

    printf("Enter team name: ");
    fgets(team.team_name, MAX_LENGTH, stdin);
    team.team_name[strcspn(team.team_name, "\n")] = '\0';

    printf("Enter sport: ");
    fgets(team.sport, MAX_LENGTH, stdin);
    team.sport[strcspn(team.sport, "\n")] = '\0';

    int choice;

    do
    {
        printf("\n=== Team Management Menu ===\n");
        printf("1. Add Player\n");
        printf("2. Search Player by Position\n");
        printf("3. Display Team Details\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            addPlayer(&team);
            break;
        case 2:
            searchByPosition(team);
            break;
        case 3:
            displayTeamDetails(team);
            break;
        case 4:
            printf("Exiting the system...\n");
            return 0;
        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}