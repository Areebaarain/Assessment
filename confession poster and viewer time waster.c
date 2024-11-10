#include <stdio.h>

int main() {
    int time_reading, time_writing, total_time;

    printf("Enter time spent reading confession posts (in minutes): ");
    scanf("%d", &time_reading);

    printf("Enter time spent writing a confession post (in minutes): ");
    scanf("%d", &time_writing);

    total_time = time_reading + time_writing;

    if (total_time > 120) {
        printf("Oye! 2 ghante se zyada confessions mein laga diye? Itna waqt barbaad! "
               "Socho agar yeh 2 ghante parhai ya skill seekhne mein lagate to kidhar pohanch gaye hote! "
               "Zindagi mein kuch bara karna hai toh yeh confession waghera chor do, aur apne goals par focus karo!\n");
    } else if (total_time >= 60 && total_time <= 120) {
        printf("Abey yar, 1 se 2 ghante confessions par lagana thoda zyada ho gaya na? "
               "Dekho, thora socho kya yeh waqt waqayi mein tumhe agay leke ja raha hai? "
               "Zindagi mein aise activities ka balance rakhna seekho, warna regret ho ga baad mein!\n");
    } else {
        printf("Wah bhai, kamal kar rahe ho! Sirf thori der mein confessions check kar liya, "
               "aur phir apne kaam par wapas lag gaye. Isi tarah focus rakho, tum bahut agay jao ge. "
               "Parhai aur apne goals pe dhyan rakho, shabash!\n");
    }

    return 0;
}
