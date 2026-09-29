#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int row;
    int col;
    int value;
    struct Node *next;
};

int main()
{
    int matrix[10][10];
    int rows, cols;
    struct Node *head = NULL;
    struct Node *temp, *newNode;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);

            // Store only non-zero elements
            if (matrix[i][j] != 0)
            {
                newNode = (struct Node *)malloc(sizeof(struct Node));

                newNode->row = i;
                newNode->col = j;
                newNode->value = matrix[i][j];
                newNode->next = NULL;

                if (head == NULL)
                {
                    head = newNode;
                }
                else
                {
                    temp = head;

                    while (temp->next != NULL)
                    {
                        temp = temp->next;
                    }

                    temp->next = newNode;
                }
            }
        }
    }

    printf("\nSparse Matrix using Linked List:\n");

    printf("Row\tColumn\tValue\n");

    temp = head;

    while (temp != NULL)
    {
        printf("%d\t%d\t%d\n",
               temp->row,
               temp->col,
               temp->value);

        temp = temp->next;
    }

    return 0;
}