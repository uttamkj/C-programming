#include <stdio.h>
#include <limits.h>
#include<float.h>

// Define the CRICKETER structure
struct CRICKETER {
    char NAME[50];
    int AGE;
    char COUNTRY[50];
    int MATCHES;
    int RUNS;
    int WICKETS;
    int CATCHES;
};

// Function to calculate batting average
float calculateBattingAverage(struct CRICKETER player) {
    if (player.MATCHES == 0) {
        return 0.0;
    }
    return (float)player.RUNS / player.MATCHES ;
}

// Function to calculate bowling average
float calculateBowlingAverage(struct CRICKETER player) {
    if (player.WICKETS == 0) {
        return 0.0;
    }
    return (float)player.RUNS / player.WICKETS;
}

void  main() {
    struct CRICKETER players[5];
    float highestBattingAverage = 0.0;
    float highestBowlingAverage = FLT_MAX;
    float lowestCatchesPerMatch = FLT_MAX;
    int highestWickets[3] = {0};            // Store indices of the top 3 wicket-takers
    int playersWithNoCatches[5] = {0};     // Array to track players with no catches

    // Input data for five players

    for (int i = 0; i < 5; i++) {
        printf("Enter details for Player %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", players[i].NAME);
        printf("Age: ");
        scanf("%d", &players[i].AGE);
        printf("Country: ");
        scanf("%s", players[i].COUNTRY);
        printf("Matches: ");
        scanf("%d", &players[i].MATCHES);
        printf("Runs: ");
        scanf("%d", &players[i].RUNS);
        printf("Wickets: ");
        scanf("%d", &players[i].WICKETS);
        printf("Catches: ");
        scanf("%d", &players[i].CATCHES);
        printf("\n");

        // Calculate highest batting average
        float battingAverage = calculateBattingAverage(players[i]);
        if (battingAverage > highestBattingAverage) {
            highestBattingAverage = battingAverage;
        }

        // Calculate highest bowling average
        float bowlingAverage = calculateBowlingAverage(players[i]);
        if (players[i].WICKETS > 0 && bowlingAverage < highestBowlingAverage) {
            highestBowlingAverage = bowlingAverage;
        }

        // Calculate lowest catches per match
        float catchesPerMatch = (players[i].MATCHES > 0) ? (float)players[i].CATCHES / players[i].MATCHES : 0.0;
        if (catchesPerMatch < lowestCatchesPerMatch) {
            lowestCatchesPerMatch = catchesPerMatch;
        }

        // Track players with no catches
        if (players[i].CATCHES == 0) {
            playersWithNoCatches[i] = 1;
        }

        // Track top 3 wicket-takers
        for (int j = 0; j < 3; j++) {
            if (players[i].WICKETS > players[highestWickets[j]].WICKETS) {
                for (int k = 2; k > j; k--) {
                    highestWickets[k] = highestWickets[k - 1];
                }
                highestWickets[j] = i;
                break;
            }
        }
    }

    // Print the results
    printf("Player with the highest batting average:\n");
    for (int i = 0; i < 5; i++) {
        float battingAverage = calculateBattingAverage(players[i]);
        if (battingAverage == highestBattingAverage) {
            printf("Name: %s\n", players[i].NAME);
            printf("Country: %s\n", players[i].COUNTRY);
            printf("Batting Average: %.2f\n\n", highestBattingAverage);
            break;
        }
    }

    printf("Player with the highest wickets:\n");
    for (int i = 0; i < 5; i++) {
        float bowlingAverage = calculateBowlingAverage(players[i]);
        if (players[i].WICKETS > 0 && bowlingAverage == highestBowlingAverage) {
            printf("Name: %s\n", players[i].NAME);
            printf("Country: %s\n", players[i].COUNTRY);
            printf("Bowling Average: %.2f\n\n", highestBowlingAverage);
            break;
        }
    }

    printf("Player with the lowest catches per match:\n");
    for (int i = 0; i < 5; i++) {
        float catchesPerMatch = (players[i].MATCHES > 0) ? (float)players[i].CATCHES / players[i].MATCHES : 0.0;
        if (catchesPerMatch == lowestCatchesPerMatch) {
            printf("Name: %s\n", players[i].NAME);
            printf("Catches: %d\n\n", players[i].CATCHES);
            break;
        }
    }

    printf("Top 3 wicket-takers:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", players[highestWickets[i]].NAME);
        printf("Country: %s\n", players[highestWickets[i]].COUNTRY);
        printf("Wickets: %d\n\n", players[highestWickets[i]].WICKETS);
    }

    printf("Players who have scored more than 100 runs:\n");
    for (int i = 0; i < 5; i++) {
        if (players[i].RUNS > 100) {
            printf("Name: %s\n", players[i].NAME);
            printf("Runs: %d\n\n", players[i].RUNS);
        }
    }

    printf("Players who have not taken any catches:\n");
    for (int i = 0; i < 5; i++) {
        if (playersWithNoCatches[i]) {
            printf("Name: %s\n\n", players[i].NAME);
        }
    }

   
}
