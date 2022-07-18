#include <iostream>
#include "tools.h"

int main()
{
    coordinates start{};
    coordinates end{};

    std::cout << "Start of the operation." << std::endl;
    std::cout << "Enter the coordinates of the beginning of the cut line (x,y): ";
    std::cin >> start.x >> start.y;
    std::cout << "enter the coordinates of the end of the cut line (x,y): ";
    std::cin >> end.x >> end.y;

    scalpel(start, end);

    while (true)
    {
        std::string tool;
        std::cout << "Which tool to use: hemostat, tweezers or suture to complete the operation?" << std::endl << ": ";
        std::cin >> tool;
        if (tool == "hemostat")
        {
            coordinates point{};
            std::cout << "Enter the coordinates: ";
            std::cin >> point.x >> point.y;
            hemostat(point);
        }
        else if (tool == "tweezers")
        {
            coordinates point{};
            std::cout << "Enter the coordinates: ";
            std::cin >> point.x >> point.y;
            tweezers(point);
        } else if (tool == "suture")
        {
            coordinates start_f{}, end_f{};

            while (true)
            {
                std::cout << "Enter the coordinates of the beginning of the seam (x,y): ";
                std::cin >> start_f.x >> start_f.y;
                std::cout << "Enter the coordinates of the end of the seam (x,y): ";
                std::cin >> end_f.x >> end_f.y;
                if (start.x != end_f.x || start.y != end_f.y || end.x != start_f.x || end.y != start_f.y)
                {
                    std::cout << "Incorrect coordinates. Try again." << std::endl;
                }
                else
                {
                    suture(start_f, end_f);
                    break;
                }
            }
            break;
        }
    }
    return 0;
}
