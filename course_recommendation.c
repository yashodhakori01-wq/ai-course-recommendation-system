#include <stdio.h>

int main() {
    char name[50];
    int age;
    int education;
    int interest;

    printf("========================================\n");
    printf(" AI COURSE RECOMMENDATION SYSTEM\n");
    printf("========================================\n");

    printf("Enter Your Name: ");
    scanf("%s", name);

    printf("Enter Your Age: ");
    scanf("%d", &age);

    printf("\nHighest Education Completed:\n");
    printf("1. SSLC/10th\n");
    printf("2. PUC/12th\n");
    printf("3. Diploma\n");
    printf("4. Undergraduate Degree\n");
    printf("5. Postgraduate Degree\n");
    printf("Enter Choice: ");
    scanf("%d", &education);

    printf("\nSelect Your Interest:\n");
    printf("1. Programming & Software Development\n");
    printf("2. Artificial Intelligence & Data Science\n");
    printf("3. Cyber Security\n");
    printf("4. Business & Management\n");
    printf("5. Design & Animation\n");
    printf("6. Healthcare\n");
    printf("7. Government Exam Preparation\n");
    printf("Enter Choice: ");
    scanf("%d", &interest);

    printf("\n========================================\n");
    printf("Student Profile\n");
    printf("Name : %s\n", name);
    printf("Age  : %d\n", age);
    printf("========================================\n");

    printf("\nRecommended Courses:\n\n");

    switch(interest) {

        case 1:
            printf("1. C Programming\n");
            printf("   Duration: 2 Months\n");
            printf("   Learn programming fundamentals.\n\n");

            printf("2. Python Programming\n");
            printf("   Duration: 3 Months\n");
            printf("   Used in AI, Web and Automation.\n\n");

            printf("3. Full Stack Web Development\n");
            printf("   Duration: 6 Months\n");
            printf("   Learn HTML, CSS, JavaScript and Backend.\n");
            break;

        case 2:
            printf("1. Data Science\n");
            printf("   Duration: 6 Months\n");
            printf("   Data Analysis and Visualization.\n\n");

            printf("2. Machine Learning\n");
            printf("   Duration: 4 Months\n");
            printf("   Build prediction models.\n\n");

            printf("3. Artificial Intelligence\n");
            printf("   Duration: 6 Months\n");
            printf("   Learn AI concepts and applications.\n");
            break;

        case 3:
            printf("1. Ethical Hacking\n");
            printf("   Duration: 4 Months\n");
            printf("   Security testing techniques.\n\n");

            printf("2. Network Security\n");
            printf("   Duration: 3 Months\n");
            printf("   Protect computer networks.\n\n");

            printf("3. Digital Forensics\n");
            printf("   Duration: 3 Months\n");
            printf("   Investigation of cyber crimes.\n");
            break;

        case 4:
            printf("1. Digital Marketing\n");
            printf("   Duration: 3 Months\n");
            printf("   Online marketing strategies.\n\n");

            printf("2. Business Analytics\n");
            printf("   Duration: 4 Months\n");
            printf("   Data-driven business decisions.\n\n");

            printf("3. Entrepreneurship\n");
            printf("   Duration: 2 Months\n");
            printf("   Start and manage businesses.\n");
            break;

        case 5:
            printf("1. Graphic Design\n");
            printf("   Duration: 3 Months\n");
            printf("   Design visual content.\n\n");

            printf("2. UI/UX Design\n");
            printf("   Duration: 4 Months\n");
            printf("   Create user-friendly interfaces.\n\n");

            printf("3. Animation\n");
            printf("   Duration: 6 Months\n");
            printf("   Create 2D and 3D animations.\n");
            break;

        case 6:
            printf("1. Nutrition & Dietetics\n");
            printf("   Duration: 4 Months\n");
            printf("   Health and nutrition planning.\n\n");

            printf("2. Public Health\n");
            printf("   Duration: 6 Months\n");
            printf("   Community healthcare management.\n");
            break;

        case 7:
            printf("1. UPSC Foundation Course\n");
            printf("2. KPSC Preparation\n");
            printf("3. Banking Exam Preparation\n");
            printf("4. SSC Exam Preparation\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    printf("\nThank You For Using AI Course Recommendation System.\n");

    return 0;
}
