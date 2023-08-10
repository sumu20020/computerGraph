#include<bits/stdc++.h>
#include<graphics.h>

int main()
{
    int i,ch;
    std::cout << "Enter your number: ";
    std::cin >> ch;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    switch(ch)
    {
    case 1:
       line(100, 100, 150, 50);

        line(150, 50, 200, 100);

        line(150, 50, 350, 50);
        line(350, 50, 400, 100);

        // Draw rectangle to give proper
        // shape to the house
        rectangle(100, 100, 200, 200);
        rectangle(200, 100, 400, 200);
        rectangle(130, 130, 170, 200);
        rectangle(250, 120, 350, 180);

        // Set color using setfillstyle()
        // which take style and color as
        // an argument
        setfillstyle(2, 3);

        // Fill the shapes with colors white
        floodfill(131, 131, WHITE);
        floodfill(201, 101, WHITE);

        // Change the filling color
        setfillstyle(11, 7);

        // Fill the shapes with changed colors
        floodfill(101, 101, WHITE);
        floodfill(150, 52, WHITE);
        floodfill(163, 55, WHITE);
        floodfill(251, 121, WHITE);

        // Close the initialized gdriver
        getch();
        closegraph();
        break;

    case 2:
        setcolor(WHITE);
        circle(200,150,100);
        setcolor(WHITE);
        circle(150,120,10);
        setcolor(WHITE);
        circle(240,120,10);
        line(195,130,180,150);
        line(195,130,210,150);
        line(180,150,210,150);

        ellipse(200, 160, 180, 0, 50, 20);
        getch();
        closegraph();
        break;

    case 3:
         setcolor(GREEN);
        rectangle(100,50,270,200);
        setfillstyle(1,GREEN);
        floodfill(121,55,GREEN);

        setcolor(RED);
        circle(150,115,40);
        setfillstyle(1,RED);
        floodfill(156,121,RED);

        setcolor(WHITE);
        rectangle(96,50,99,400);
        setfillstyle(4,BLUE);
        floodfill(97,53,WHITE);

        getch();
        closegraph();
        break;

    case 4:

    // Sky
    setcolor(CYAN);
    rectangle(0, 0, getmaxx(), getmaxy());
    floodfill(getmaxx() / 2, getmaxy() / 2, CYAN);

    // Sun
    setcolor(YELLOW);
    circle(100, 100, 40);
    floodfill(100, 100, YELLOW);

    // Ground
    setcolor(GREEN);
    rectangle(0, 300, getmaxx(), getmaxy());
    floodfill(getmaxx() / 2, getmaxy() / 2 + 150, GREEN);

    // Houses
    setcolor(BROWN);
    rectangle(150, 250, 300, 400);
    floodfill(225, 325, BROWN);

    setcolor(RED);
    rectangle(170, 280, 200, 400);
    floodfill(185, 340, RED);

    setcolor(BROWN);
    rectangle(400, 250, 550, 400);
    floodfill(475, 325, BROWN);

    setcolor(BLUE);
    rectangle(420, 280, 450, 400);
    floodfill(435, 340, BLUE);

    // Trees
    setcolor(DARKGRAY);
    rectangle(50, 250, 100, 400);
    floodfill(75, 325, DARKGRAY);

    setcolor(GREEN);
    circle(75, 230, 60);
    floodfill(75, 230, GREEN);

    setcolor(DARKGRAY);
    rectangle(350, 250, 400, 400);
    floodfill(375, 325, DARKGRAY);

    setcolor(GREEN);
    circle(375, 230, 60);
    floodfill(375, 230, GREEN);

    // Pond
    setcolor(BLUE);
    ellipse(500, 500, 0, 360, 100, 40);
    floodfill(500, 500, BLUE);

    getch();
    closegraph();

        break;

    default:
        std::cout << "Invalid choice";
    }

    return 0;
}
